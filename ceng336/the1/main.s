PROCESSOR 18F8722

#include <xc.inc>

; CONFIGURATION (DO NOT EDIT)
; CONFIG1H
CONFIG OSC = HSPLL      ; Oscillator Selection bits (HS oscillator, PLL enabled (Clock Frequency = 4 x FOSC1))
CONFIG FCMEN = OFF      ; Fail-Safe Clock Monitor Enable bit (Fail-Safe Clock Monitor disabled)
CONFIG IESO = OFF       ; Internal/External Oscillator Switchover bit (Oscillator Switchover mode disabled)
; CONFIG2L
CONFIG PWRT = OFF       ; Power-up Timer Enable bit (PWRT disabled)
CONFIG BOREN = OFF      ; Brown-out Reset Enable bits (Brown-out Reset disabled in hardware and software)
; CONFIG2H
CONFIG WDT = OFF        ; Watchdog Timer Enable bit (WDT disabled (control is placed on the SWDTEN bit))
; CONFIG3H
CONFIG LPT1OSC = OFF    ; Low-Power Timer1 Oscillator Enable bit (Timer1 configured for higher power operation)
CONFIG MCLRE = ON       ; MCLR Pin Enable bit (MCLR pin enabled; RE3 input pin disabled)
; CONFIG4L
CONFIG LVP = OFF        ; Single-Supply ICSP Enable bit (Single-Supply ICSP disabled)
CONFIG XINST = OFF      ; Extended Instruction Set Enable bit (Instruction set extension and Indexed Addressing mode disabled (Legacy mode))
CONFIG DEBUG = OFF      ; Disable In-Circuit Debugger


GLOBAL var1
GLOBAL var2
GLOBAL var3
GLOBAL re_state
GLOBAL counter1
GLOBAL counter2

; Define space for the variables in RAM
PSECT udata_acs
var1:
    DS 1 ; Allocate 1 byte for var1
var2:
    DS 1 
var3:
    DS 1
re_state:
    DS 1
counter1:
    DS 1
counter2:
    DS 1


PSECT resetVec,class=CODE,reloc=2
resetVec:
    goto       main

PSECT CODE
main:
; initalization period
    clrf re_state
    clrf counter1
    movlw 189
    movwf counter2
    clrf TRISB ; PORT BCD all output
    clrf TRISC
    clrf TRISD
    setf TRISE ; PORT E input 
    
    setf LATB	; light up all leds
    setf LATC
    setf LATD
    
    call busy_wait
    
    clrf LATB	; turn off all leds
    clrf LATC
    clrf LATD

main_loop:
    call check_buttons
    call update_display
    goto main_loop

check_buttons:
    btfsc PORTE, 0  ; check re0, skip if 0 (skip if not pressed) 
    call re0_pressed
    btfss PORTE, 0  ; check re0, skip if 1 (skip if pressed)
    call re0_released
    btfsc PORTE, 1  ; check re1, skip if 0 (skip if not pressed) 
    call re1_pressed
    btfss PORTE,1  ; check re1, skip if 1 (skip if pressed)
    call re1_released
    return

re0_pressed:
    bsf re_state, 0 ; re0_state = 1 (pressed)
    return
    
re0_released:
    btfss re_state, 0	; test re0_state if 1 do func else do nothing
    return
    bcf re_state, 0
    btg re_state, 3	; toggle re3_state 1 display 0 no 
    return
    
re1_pressed:
    bsf re_state, 1	; re1_state = 1 (pressed)
    return
    
re1_released:
    btfss re_state, 1	; test re1_state if 1 do func else do nothing
    return
    bcf re_state, 1
    btg re_state, 2	; toggle re2_state 1 display 0 no
    return
    
update_display:
    incfsz counter1
    return
    incfsz counter2
    return
    counter_overflow:
	movlw 189		; reload counter2
	movwf counter2
	btg LATD, 0
	btfss re_state, 2	; check whether open PORTB
	clrf PORTB		; close PORTB leds
	btfsc re_state, 2
	call update_b		; update PORTB leds
	btfss re_state, 3	; check whether open PORTC
	clrf PORTC		; close PORTC leds
	btfsc re_state, 3
	call update_c		; update PORTC leds
	return
update_b:
    movf PORTB, 0, 0	; mov PORTB to WREG
    addlw 1		; WREG += 1
    btfss STATUS, 2	; check zero 
    addwf PORTB, 0, 0	; WREG =  WREG + WREG
    movwf PORTB		; write back PORTB
    return
    
update_c:
    movf PORTC, 0, 0	; mov PORTC to WREG
    rrncf WREG, 1
    btfsc STATUS, 4	; check neg
    goto clear_part
    bsf WREG, 7		; WREG = 1xxxxxxx
    movwf PORTC
    return  
clear_part:
    clrf WREG
    movwf PORTC
    return
    
busy_wait:
    ; triple for loop
    
    movlw 250
    movwf var1 
    movlw 242
    movwf var2
    clrf var3	; var3 = 0
    loop_1:
	loop_2:
	    loop_3:
		incf var3   ; var3++
		bnz loop_3  ; var3 != 0
	    incf var2	; var2++
	    bnz loop_2	; var2 != 0
	incf var1   ; var1++
	bnz loop_1  ; var1 != 0
    return

    

end resetVec