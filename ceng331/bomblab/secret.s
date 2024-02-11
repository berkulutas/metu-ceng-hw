(gdb) disas phase_defused 
Dump of assembler code for function phase_defused:
   0x00000000000032f2 <+0>:	endbr64 
   0x00000000000032f6 <+4>:	sub    $0x88,%rsp
   0x00000000000032fd <+11>:	mov    %fs:0x28,%rax
   0x0000000000003306 <+20>:	mov    %rax,0x78(%rsp)
   0x000000000000330b <+25>:	xor    %eax,%eax
   0x000000000000330d <+27>:	mov    $0x1,%edi
   0x0000000000003312 <+32>:	call   0x303e <send_msg>
   0x0000000000003317 <+37>:	cmpl   $0x6,0x47e6(%rip)        # 0x7b04 <num_input_strings>
   0x000000000000331e <+44>:	je     0x333c <phase_defused+74>
   0x0000000000003320 <+46>:	mov    0x78(%rsp),%rax
   0x0000000000003325 <+51>:	sub    %fs:0x28,%rax
   0x000000000000332e <+60>:	jne    0x33bb <phase_defused+201>
   0x0000000000003334 <+66>:	add    $0x88,%rsp
   0x000000000000333b <+73>:	ret    
   0x000000000000333c <+74>:	lea    0xc(%rsp),%rcx
   0x0000000000003341 <+79>:	lea    0x8(%rsp),%rdx
   0x0000000000003346 <+84>:	lea    0x10(%rsp),%r8
   0x000000000000334b <+89>:	lea    0x1a3d(%rip),%rsi        # 0x4d8f
   0x0000000000003352 <+96>:	lea    0x48f3(%rip),%rdi        # 0x7c4c <input_strings+300>
   0x0000000000003359 <+103>:	mov    $0x0,%eax
   0x000000000000335e <+108>:	call   0x2330 <__isoc99_sscanf@plt>
   0x0000000000003363 <+113>:	cmp    $0x3,%eax
   0x0000000000003366 <+116>:	je     0x3382 <phase_defused+144>
   0x0000000000003368 <+118>:	lea    0x18e1(%rip),%rdi        # 0x4c50
   0x000000000000336f <+125>:	call   0x2250 <puts@plt>
   0x0000000000003374 <+130>:	lea    0x1905(%rip),%rdi        # 0x4c80
   0x000000000000337b <+137>:	call   0x2250 <puts@plt>
   0x0000000000003380 <+142>:	jmp    0x3320 <phase_defused+46>
   0x0000000000003382 <+144>:	lea    0x10(%rsp),%rdi
   0x0000000000003387 <+149>:	lea    0x1a0a(%rip),%rsi        # 0x4d98
   0x000000000000338e <+156>:	call   0x2cda <strings_not_equal>
   0x0000000000003393 <+161>:	test   %eax,%eax
   0x0000000000003395 <+163>:	jne    0x3368 <phase_defused+118>
   0x0000000000003397 <+165>:	lea    0x1852(%rip),%rdi        # 0x4bf0
   0x000000000000339e <+172>:	call   0x2250 <puts@plt>
   0x00000000000033a3 <+177>:	lea    0x186e(%rip),%rdi        # 0x4c18
   0x00000000000033aa <+184>:	call   0x2250 <puts@plt>
   0x00000000000033af <+189>:	mov    $0x0,%eax
   0x00000000000033b4 <+194>:	call   0x2b17 <secret_phase>
   0x00000000000033b9 <+199>:	jmp    0x3368 <phase_defused+118>
   0x00000000000033bb <+201>:	call   0x2280 <__stack_chk_fail@plt>
End of assembler dump.
