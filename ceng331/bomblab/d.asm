
bomb:     file format elf64-x86-64


Disassembly of section .init:

0000000000002000 <_init>:
    2000:	f3 0f 1e fa          	endbr64 
    2004:	48 83 ec 08          	sub    $0x8,%rsp
    2008:	48 8b 05 d9 4f 00 00 	mov    0x4fd9(%rip),%rax        # 6fe8 <__gmon_start__@Base>
    200f:	48 85 c0             	test   %rax,%rax
    2012:	74 02                	je     2016 <_init+0x16>
    2014:	ff d0                	call   *%rax
    2016:	48 83 c4 08          	add    $0x8,%rsp
    201a:	c3                   	ret    

Disassembly of section .plt:

0000000000002020 <.plt>:
    2020:	ff 35 ba 4e 00 00    	push   0x4eba(%rip)        # 6ee0 <_GLOBAL_OFFSET_TABLE_+0x8>
    2026:	f2 ff 25 bb 4e 00 00 	bnd jmp *0x4ebb(%rip)        # 6ee8 <_GLOBAL_OFFSET_TABLE_+0x10>
    202d:	0f 1f 00             	nopl   (%rax)
    2030:	f3 0f 1e fa          	endbr64 
    2034:	68 00 00 00 00       	push   $0x0
    2039:	f2 e9 e1 ff ff ff    	bnd jmp 2020 <_init+0x20>
    203f:	90                   	nop
    2040:	f3 0f 1e fa          	endbr64 
    2044:	68 01 00 00 00       	push   $0x1
    2049:	f2 e9 d1 ff ff ff    	bnd jmp 2020 <_init+0x20>
    204f:	90                   	nop
    2050:	f3 0f 1e fa          	endbr64 
    2054:	68 02 00 00 00       	push   $0x2
    2059:	f2 e9 c1 ff ff ff    	bnd jmp 2020 <_init+0x20>
    205f:	90                   	nop
    2060:	f3 0f 1e fa          	endbr64 
    2064:	68 03 00 00 00       	push   $0x3
    2069:	f2 e9 b1 ff ff ff    	bnd jmp 2020 <_init+0x20>
    206f:	90                   	nop
    2070:	f3 0f 1e fa          	endbr64 
    2074:	68 04 00 00 00       	push   $0x4
    2079:	f2 e9 a1 ff ff ff    	bnd jmp 2020 <_init+0x20>
    207f:	90                   	nop
    2080:	f3 0f 1e fa          	endbr64 
    2084:	68 05 00 00 00       	push   $0x5
    2089:	f2 e9 91 ff ff ff    	bnd jmp 2020 <_init+0x20>
    208f:	90                   	nop
    2090:	f3 0f 1e fa          	endbr64 
    2094:	68 06 00 00 00       	push   $0x6
    2099:	f2 e9 81 ff ff ff    	bnd jmp 2020 <_init+0x20>
    209f:	90                   	nop
    20a0:	f3 0f 1e fa          	endbr64 
    20a4:	68 07 00 00 00       	push   $0x7
    20a9:	f2 e9 71 ff ff ff    	bnd jmp 2020 <_init+0x20>
    20af:	90                   	nop
    20b0:	f3 0f 1e fa          	endbr64 
    20b4:	68 08 00 00 00       	push   $0x8
    20b9:	f2 e9 61 ff ff ff    	bnd jmp 2020 <_init+0x20>
    20bf:	90                   	nop
    20c0:	f3 0f 1e fa          	endbr64 
    20c4:	68 09 00 00 00       	push   $0x9
    20c9:	f2 e9 51 ff ff ff    	bnd jmp 2020 <_init+0x20>
    20cf:	90                   	nop
    20d0:	f3 0f 1e fa          	endbr64 
    20d4:	68 0a 00 00 00       	push   $0xa
    20d9:	f2 e9 41 ff ff ff    	bnd jmp 2020 <_init+0x20>
    20df:	90                   	nop
    20e0:	f3 0f 1e fa          	endbr64 
    20e4:	68 0b 00 00 00       	push   $0xb
    20e9:	f2 e9 31 ff ff ff    	bnd jmp 2020 <_init+0x20>
    20ef:	90                   	nop
    20f0:	f3 0f 1e fa          	endbr64 
    20f4:	68 0c 00 00 00       	push   $0xc
    20f9:	f2 e9 21 ff ff ff    	bnd jmp 2020 <_init+0x20>
    20ff:	90                   	nop
    2100:	f3 0f 1e fa          	endbr64 
    2104:	68 0d 00 00 00       	push   $0xd
    2109:	f2 e9 11 ff ff ff    	bnd jmp 2020 <_init+0x20>
    210f:	90                   	nop
    2110:	f3 0f 1e fa          	endbr64 
    2114:	68 0e 00 00 00       	push   $0xe
    2119:	f2 e9 01 ff ff ff    	bnd jmp 2020 <_init+0x20>
    211f:	90                   	nop
    2120:	f3 0f 1e fa          	endbr64 
    2124:	68 0f 00 00 00       	push   $0xf
    2129:	f2 e9 f1 fe ff ff    	bnd jmp 2020 <_init+0x20>
    212f:	90                   	nop
    2130:	f3 0f 1e fa          	endbr64 
    2134:	68 10 00 00 00       	push   $0x10
    2139:	f2 e9 e1 fe ff ff    	bnd jmp 2020 <_init+0x20>
    213f:	90                   	nop
    2140:	f3 0f 1e fa          	endbr64 
    2144:	68 11 00 00 00       	push   $0x11
    2149:	f2 e9 d1 fe ff ff    	bnd jmp 2020 <_init+0x20>
    214f:	90                   	nop
    2150:	f3 0f 1e fa          	endbr64 
    2154:	68 12 00 00 00       	push   $0x12
    2159:	f2 e9 c1 fe ff ff    	bnd jmp 2020 <_init+0x20>
    215f:	90                   	nop
    2160:	f3 0f 1e fa          	endbr64 
    2164:	68 13 00 00 00       	push   $0x13
    2169:	f2 e9 b1 fe ff ff    	bnd jmp 2020 <_init+0x20>
    216f:	90                   	nop
    2170:	f3 0f 1e fa          	endbr64 
    2174:	68 14 00 00 00       	push   $0x14
    2179:	f2 e9 a1 fe ff ff    	bnd jmp 2020 <_init+0x20>
    217f:	90                   	nop
    2180:	f3 0f 1e fa          	endbr64 
    2184:	68 15 00 00 00       	push   $0x15
    2189:	f2 e9 91 fe ff ff    	bnd jmp 2020 <_init+0x20>
    218f:	90                   	nop
    2190:	f3 0f 1e fa          	endbr64 
    2194:	68 16 00 00 00       	push   $0x16
    2199:	f2 e9 81 fe ff ff    	bnd jmp 2020 <_init+0x20>
    219f:	90                   	nop
    21a0:	f3 0f 1e fa          	endbr64 
    21a4:	68 17 00 00 00       	push   $0x17
    21a9:	f2 e9 71 fe ff ff    	bnd jmp 2020 <_init+0x20>
    21af:	90                   	nop
    21b0:	f3 0f 1e fa          	endbr64 
    21b4:	68 18 00 00 00       	push   $0x18
    21b9:	f2 e9 61 fe ff ff    	bnd jmp 2020 <_init+0x20>
    21bf:	90                   	nop
    21c0:	f3 0f 1e fa          	endbr64 
    21c4:	68 19 00 00 00       	push   $0x19
    21c9:	f2 e9 51 fe ff ff    	bnd jmp 2020 <_init+0x20>
    21cf:	90                   	nop
    21d0:	f3 0f 1e fa          	endbr64 
    21d4:	68 1a 00 00 00       	push   $0x1a
    21d9:	f2 e9 41 fe ff ff    	bnd jmp 2020 <_init+0x20>
    21df:	90                   	nop
    21e0:	f3 0f 1e fa          	endbr64 
    21e4:	68 1b 00 00 00       	push   $0x1b
    21e9:	f2 e9 31 fe ff ff    	bnd jmp 2020 <_init+0x20>
    21ef:	90                   	nop
    21f0:	f3 0f 1e fa          	endbr64 
    21f4:	68 1c 00 00 00       	push   $0x1c
    21f9:	f2 e9 21 fe ff ff    	bnd jmp 2020 <_init+0x20>
    21ff:	90                   	nop

Disassembly of section .plt.got:

0000000000002200 <__cxa_finalize@plt>:
    2200:	f3 0f 1e fa          	endbr64 
    2204:	f2 ff 25 ed 4d 00 00 	bnd jmp *0x4ded(%rip)        # 6ff8 <__cxa_finalize@GLIBC_2.2.5>
    220b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

Disassembly of section .plt.sec:

0000000000002210 <getenv@plt>:
    2210:	f3 0f 1e fa          	endbr64 
    2214:	f2 ff 25 d5 4c 00 00 	bnd jmp *0x4cd5(%rip)        # 6ef0 <getenv@GLIBC_2.2.5>
    221b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000002220 <strcasecmp@plt>:
    2220:	f3 0f 1e fa          	endbr64 
    2224:	f2 ff 25 cd 4c 00 00 	bnd jmp *0x4ccd(%rip)        # 6ef8 <strcasecmp@GLIBC_2.2.5>
    222b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000002230 <__errno_location@plt>:
    2230:	f3 0f 1e fa          	endbr64 
    2234:	f2 ff 25 c5 4c 00 00 	bnd jmp *0x4cc5(%rip)        # 6f00 <__errno_location@GLIBC_2.2.5>
    223b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000002240 <strcpy@plt>:
    2240:	f3 0f 1e fa          	endbr64 
    2244:	f2 ff 25 bd 4c 00 00 	bnd jmp *0x4cbd(%rip)        # 6f08 <strcpy@GLIBC_2.2.5>
    224b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000002250 <puts@plt>:
    2250:	f3 0f 1e fa          	endbr64 
    2254:	f2 ff 25 b5 4c 00 00 	bnd jmp *0x4cb5(%rip)        # 6f10 <puts@GLIBC_2.2.5>
    225b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000002260 <write@plt>:
    2260:	f3 0f 1e fa          	endbr64 
    2264:	f2 ff 25 ad 4c 00 00 	bnd jmp *0x4cad(%rip)        # 6f18 <write@GLIBC_2.2.5>
    226b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000002270 <strlen@plt>:
    2270:	f3 0f 1e fa          	endbr64 
    2274:	f2 ff 25 a5 4c 00 00 	bnd jmp *0x4ca5(%rip)        # 6f20 <strlen@GLIBC_2.2.5>
    227b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000002280 <__stack_chk_fail@plt>:
    2280:	f3 0f 1e fa          	endbr64 
    2284:	f2 ff 25 9d 4c 00 00 	bnd jmp *0x4c9d(%rip)        # 6f28 <__stack_chk_fail@GLIBC_2.4>
    228b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000002290 <alarm@plt>:
    2290:	f3 0f 1e fa          	endbr64 
    2294:	f2 ff 25 95 4c 00 00 	bnd jmp *0x4c95(%rip)        # 6f30 <alarm@GLIBC_2.2.5>
    229b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000000022a0 <close@plt>:
    22a0:	f3 0f 1e fa          	endbr64 
    22a4:	f2 ff 25 8d 4c 00 00 	bnd jmp *0x4c8d(%rip)        # 6f38 <close@GLIBC_2.2.5>
    22ab:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000000022b0 <read@plt>:
    22b0:	f3 0f 1e fa          	endbr64 
    22b4:	f2 ff 25 85 4c 00 00 	bnd jmp *0x4c85(%rip)        # 6f40 <read@GLIBC_2.2.5>
    22bb:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000000022c0 <fgets@plt>:
    22c0:	f3 0f 1e fa          	endbr64 
    22c4:	f2 ff 25 7d 4c 00 00 	bnd jmp *0x4c7d(%rip)        # 6f48 <fgets@GLIBC_2.2.5>
    22cb:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000000022d0 <strcmp@plt>:
    22d0:	f3 0f 1e fa          	endbr64 
    22d4:	f2 ff 25 75 4c 00 00 	bnd jmp *0x4c75(%rip)        # 6f50 <strcmp@GLIBC_2.2.5>
    22db:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000000022e0 <signal@plt>:
    22e0:	f3 0f 1e fa          	endbr64 
    22e4:	f2 ff 25 6d 4c 00 00 	bnd jmp *0x4c6d(%rip)        # 6f58 <signal@GLIBC_2.2.5>
    22eb:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000000022f0 <gethostbyname@plt>:
    22f0:	f3 0f 1e fa          	endbr64 
    22f4:	f2 ff 25 65 4c 00 00 	bnd jmp *0x4c65(%rip)        # 6f60 <gethostbyname@GLIBC_2.2.5>
    22fb:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000002300 <__memmove_chk@plt>:
    2300:	f3 0f 1e fa          	endbr64 
    2304:	f2 ff 25 5d 4c 00 00 	bnd jmp *0x4c5d(%rip)        # 6f68 <__memmove_chk@GLIBC_2.3.4>
    230b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000002310 <strtol@plt>:
    2310:	f3 0f 1e fa          	endbr64 
    2314:	f2 ff 25 55 4c 00 00 	bnd jmp *0x4c55(%rip)        # 6f70 <strtol@GLIBC_2.2.5>
    231b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000002320 <fflush@plt>:
    2320:	f3 0f 1e fa          	endbr64 
    2324:	f2 ff 25 4d 4c 00 00 	bnd jmp *0x4c4d(%rip)        # 6f78 <fflush@GLIBC_2.2.5>
    232b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000002330 <__isoc99_sscanf@plt>:
    2330:	f3 0f 1e fa          	endbr64 
    2334:	f2 ff 25 45 4c 00 00 	bnd jmp *0x4c45(%rip)        # 6f80 <__isoc99_sscanf@GLIBC_2.7>
    233b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000002340 <__printf_chk@plt>:
    2340:	f3 0f 1e fa          	endbr64 
    2344:	f2 ff 25 3d 4c 00 00 	bnd jmp *0x4c3d(%rip)        # 6f88 <__printf_chk@GLIBC_2.3.4>
    234b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000002350 <fopen@plt>:
    2350:	f3 0f 1e fa          	endbr64 
    2354:	f2 ff 25 35 4c 00 00 	bnd jmp *0x4c35(%rip)        # 6f90 <fopen@GLIBC_2.2.5>
    235b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000002360 <gethostname@plt>:
    2360:	f3 0f 1e fa          	endbr64 
    2364:	f2 ff 25 2d 4c 00 00 	bnd jmp *0x4c2d(%rip)        # 6f98 <gethostname@GLIBC_2.2.5>
    236b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000002370 <exit@plt>:
    2370:	f3 0f 1e fa          	endbr64 
    2374:	f2 ff 25 25 4c 00 00 	bnd jmp *0x4c25(%rip)        # 6fa0 <exit@GLIBC_2.2.5>
    237b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000002380 <connect@plt>:
    2380:	f3 0f 1e fa          	endbr64 
    2384:	f2 ff 25 1d 4c 00 00 	bnd jmp *0x4c1d(%rip)        # 6fa8 <connect@GLIBC_2.2.5>
    238b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000002390 <__fprintf_chk@plt>:
    2390:	f3 0f 1e fa          	endbr64 
    2394:	f2 ff 25 15 4c 00 00 	bnd jmp *0x4c15(%rip)        # 6fb0 <__fprintf_chk@GLIBC_2.3.4>
    239b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000000023a0 <sleep@plt>:
    23a0:	f3 0f 1e fa          	endbr64 
    23a4:	f2 ff 25 0d 4c 00 00 	bnd jmp *0x4c0d(%rip)        # 6fb8 <sleep@GLIBC_2.2.5>
    23ab:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000000023b0 <__ctype_b_loc@plt>:
    23b0:	f3 0f 1e fa          	endbr64 
    23b4:	f2 ff 25 05 4c 00 00 	bnd jmp *0x4c05(%rip)        # 6fc0 <__ctype_b_loc@GLIBC_2.3>
    23bb:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000000023c0 <__sprintf_chk@plt>:
    23c0:	f3 0f 1e fa          	endbr64 
    23c4:	f2 ff 25 fd 4b 00 00 	bnd jmp *0x4bfd(%rip)        # 6fc8 <__sprintf_chk@GLIBC_2.3.4>
    23cb:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000000023d0 <socket@plt>:
    23d0:	f3 0f 1e fa          	endbr64 
    23d4:	f2 ff 25 f5 4b 00 00 	bnd jmp *0x4bf5(%rip)        # 6fd0 <socket@GLIBC_2.2.5>
    23db:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

Disassembly of section .text:

00000000000023e0 <_start>:
    23e0:	f3 0f 1e fa          	endbr64 
    23e4:	31 ed                	xor    %ebp,%ebp
    23e6:	49 89 d1             	mov    %rdx,%r9
    23e9:	5e                   	pop    %rsi
    23ea:	48 89 e2             	mov    %rsp,%rdx
    23ed:	48 83 e4 f0          	and    $0xfffffffffffffff0,%rsp
    23f1:	50                   	push   %rax
    23f2:	54                   	push   %rsp
    23f3:	45 31 c0             	xor    %r8d,%r8d
    23f6:	31 c9                	xor    %ecx,%ecx
    23f8:	48 8d 3d ca 00 00 00 	lea    0xca(%rip),%rdi        # 24c9 <main>
    23ff:	ff 15 d3 4b 00 00    	call   *0x4bd3(%rip)        # 6fd8 <__libc_start_main@GLIBC_2.34>
    2405:	f4                   	hlt    
    2406:	66 2e 0f 1f 84 00 00 	cs nopw 0x0(%rax,%rax,1)
    240d:	00 00 00 

0000000000002410 <deregister_tm_clones>:
    2410:	48 8d 3d 39 56 00 00 	lea    0x5639(%rip),%rdi        # 7a50 <__TMC_END__>
    2417:	48 8d 05 32 56 00 00 	lea    0x5632(%rip),%rax        # 7a50 <__TMC_END__>
    241e:	48 39 f8             	cmp    %rdi,%rax
    2421:	74 15                	je     2438 <deregister_tm_clones+0x28>
    2423:	48 8b 05 b6 4b 00 00 	mov    0x4bb6(%rip),%rax        # 6fe0 <_ITM_deregisterTMCloneTable@Base>
    242a:	48 85 c0             	test   %rax,%rax
    242d:	74 09                	je     2438 <deregister_tm_clones+0x28>
    242f:	ff e0                	jmp    *%rax
    2431:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
    2438:	c3                   	ret    
    2439:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

0000000000002440 <register_tm_clones>:
    2440:	48 8d 3d 09 56 00 00 	lea    0x5609(%rip),%rdi        # 7a50 <__TMC_END__>
    2447:	48 8d 35 02 56 00 00 	lea    0x5602(%rip),%rsi        # 7a50 <__TMC_END__>
    244e:	48 29 fe             	sub    %rdi,%rsi
    2451:	48 89 f0             	mov    %rsi,%rax
    2454:	48 c1 ee 3f          	shr    $0x3f,%rsi
    2458:	48 c1 f8 03          	sar    $0x3,%rax
    245c:	48 01 c6             	add    %rax,%rsi
    245f:	48 d1 fe             	sar    %rsi
    2462:	74 14                	je     2478 <register_tm_clones+0x38>
    2464:	48 8b 05 85 4b 00 00 	mov    0x4b85(%rip),%rax        # 6ff0 <_ITM_registerTMCloneTable@Base>
    246b:	48 85 c0             	test   %rax,%rax
    246e:	74 08                	je     2478 <register_tm_clones+0x38>
    2470:	ff e0                	jmp    *%rax
    2472:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)
    2478:	c3                   	ret    
    2479:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

0000000000002480 <__do_global_dtors_aux>:
    2480:	f3 0f 1e fa          	endbr64 
    2484:	80 3d fd 55 00 00 00 	cmpb   $0x0,0x55fd(%rip)        # 7a88 <completed.0>
    248b:	75 2b                	jne    24b8 <__do_global_dtors_aux+0x38>
    248d:	55                   	push   %rbp
    248e:	48 83 3d 62 4b 00 00 	cmpq   $0x0,0x4b62(%rip)        # 6ff8 <__cxa_finalize@GLIBC_2.2.5>
    2495:	00 
    2496:	48 89 e5             	mov    %rsp,%rbp
    2499:	74 0c                	je     24a7 <__do_global_dtors_aux+0x27>
    249b:	48 8b 3d 66 4b 00 00 	mov    0x4b66(%rip),%rdi        # 7008 <__dso_handle>
    24a2:	e8 59 fd ff ff       	call   2200 <__cxa_finalize@plt>
    24a7:	e8 64 ff ff ff       	call   2410 <deregister_tm_clones>
    24ac:	c6 05 d5 55 00 00 01 	movb   $0x1,0x55d5(%rip)        # 7a88 <completed.0>
    24b3:	5d                   	pop    %rbp
    24b4:	c3                   	ret    
    24b5:	0f 1f 00             	nopl   (%rax)
    24b8:	c3                   	ret    
    24b9:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

00000000000024c0 <frame_dummy>:
    24c0:	f3 0f 1e fa          	endbr64 
    24c4:	e9 77 ff ff ff       	jmp    2440 <register_tm_clones>

00000000000024c9 <main>:
    24c9:	f3 0f 1e fa          	endbr64 
    24cd:	53                   	push   %rbx
    24ce:	83 ff 01             	cmp    $0x1,%edi
    24d1:	0f 84 f8 00 00 00    	je     25cf <main+0x106>
    24d7:	48 89 f3             	mov    %rsi,%rbx
    24da:	83 ff 02             	cmp    $0x2,%edi
    24dd:	0f 85 21 01 00 00    	jne    2604 <main+0x13b>
    24e3:	48 8b 7e 08          	mov    0x8(%rsi),%rdi
    24e7:	48 8d 35 cd 2c 00 00 	lea    0x2ccd(%rip),%rsi        # 51bb <array.0+0xfdb>
    24ee:	e8 5d fe ff ff       	call   2350 <fopen@plt>
    24f3:	48 89 05 96 55 00 00 	mov    %rax,0x5596(%rip)        # 7a90 <infile>
    24fa:	48 85 c0             	test   %rax,%rax
    24fd:	0f 84 df 00 00 00    	je     25e2 <main+0x119>
    2503:	e8 97 09 00 00       	call   2e9f <initialize_bomb>
    2508:	48 8d 3d 79 1b 00 00 	lea    0x1b79(%rip),%rdi        # 4088 <_IO_stdin_used+0x88>
    250f:	e8 3c fd ff ff       	call   2250 <puts@plt>
    2514:	48 8d 3d ad 1b 00 00 	lea    0x1bad(%rip),%rdi        # 40c8 <_IO_stdin_used+0xc8>
    251b:	e8 30 fd ff ff       	call   2250 <puts@plt>
    2520:	e8 93 0c 00 00       	call   31b8 <read_line>
    2525:	48 89 c7             	mov    %rax,%rdi
    2528:	e8 fa 00 00 00       	call   2627 <phase_1>
    252d:	e8 c0 0d 00 00       	call   32f2 <phase_defused>
    2532:	48 8d 3d bf 1b 00 00 	lea    0x1bbf(%rip),%rdi        # 40f8 <_IO_stdin_used+0xf8>
    2539:	e8 12 fd ff ff       	call   2250 <puts@plt>
    253e:	e8 75 0c 00 00       	call   31b8 <read_line>
    2543:	48 89 c7             	mov    %rax,%rdi
    2546:	e8 bc 01 00 00       	call   2707 <phase_2>
    254b:	e8 a2 0d 00 00       	call   32f2 <phase_defused>
    2550:	48 8d 3d e4 1a 00 00 	lea    0x1ae4(%rip),%rdi        # 403b <_IO_stdin_used+0x3b>
    2557:	e8 f4 fc ff ff       	call   2250 <puts@plt>
    255c:	e8 57 0c 00 00       	call   31b8 <read_line>
    2561:	48 89 c7             	mov    %rax,%rdi
    2564:	e8 15 02 00 00       	call   277e <phase_3>
    2569:	e8 84 0d 00 00       	call   32f2 <phase_defused>
    256e:	48 8d 3d e4 1a 00 00 	lea    0x1ae4(%rip),%rdi        # 4059 <_IO_stdin_used+0x59>
    2575:	e8 d6 fc ff ff       	call   2250 <puts@plt>
    257a:	e8 39 0c 00 00       	call   31b8 <read_line>
    257f:	48 89 c7             	mov    %rax,%rdi
    2582:	e8 0b 03 00 00       	call   2892 <phase_4>
    2587:	e8 66 0d 00 00       	call   32f2 <phase_defused>
    258c:	48 8d 3d 95 1b 00 00 	lea    0x1b95(%rip),%rdi        # 4128 <_IO_stdin_used+0x128>
    2593:	e8 b8 fc ff ff       	call   2250 <puts@plt>
    2598:	e8 1b 0c 00 00       	call   31b8 <read_line>
    259d:	48 89 c7             	mov    %rax,%rdi
    25a0:	e8 64 03 00 00       	call   2909 <phase_5>
    25a5:	e8 48 0d 00 00       	call   32f2 <phase_defused>
    25aa:	48 8d 3d b7 1a 00 00 	lea    0x1ab7(%rip),%rdi        # 4068 <_IO_stdin_used+0x68>
    25b1:	e8 9a fc ff ff       	call   2250 <puts@plt>
    25b6:	e8 fd 0b 00 00       	call   31b8 <read_line>
    25bb:	48 89 c7             	mov    %rax,%rdi
    25be:	e8 bc 03 00 00       	call   297f <phase_6>
    25c3:	e8 2a 0d 00 00       	call   32f2 <phase_defused>
    25c8:	b8 00 00 00 00       	mov    $0x0,%eax
    25cd:	5b                   	pop    %rbx
    25ce:	c3                   	ret    
    25cf:	48 8b 05 9a 54 00 00 	mov    0x549a(%rip),%rax        # 7a70 <stdin@GLIBC_2.2.5>
    25d6:	48 89 05 b3 54 00 00 	mov    %rax,0x54b3(%rip)        # 7a90 <infile>
    25dd:	e9 21 ff ff ff       	jmp    2503 <main+0x3a>
    25e2:	48 8b 4b 08          	mov    0x8(%rbx),%rcx
    25e6:	48 8b 13             	mov    (%rbx),%rdx
    25e9:	48 8d 35 14 1a 00 00 	lea    0x1a14(%rip),%rsi        # 4004 <_IO_stdin_used+0x4>
    25f0:	bf 01 00 00 00       	mov    $0x1,%edi
    25f5:	e8 46 fd ff ff       	call   2340 <__printf_chk@plt>
    25fa:	bf 08 00 00 00       	mov    $0x8,%edi
    25ff:	e8 6c fd ff ff       	call   2370 <exit@plt>
    2604:	48 8b 16             	mov    (%rsi),%rdx
    2607:	48 8d 35 13 1a 00 00 	lea    0x1a13(%rip),%rsi        # 4021 <_IO_stdin_used+0x21>
    260e:	bf 01 00 00 00       	mov    $0x1,%edi
    2613:	b8 00 00 00 00       	mov    $0x0,%eax
    2618:	e8 23 fd ff ff       	call   2340 <__printf_chk@plt>
    261d:	bf 08 00 00 00       	mov    $0x8,%edi
    2622:	e8 49 fd ff ff       	call   2370 <exit@plt>

0000000000002627 <phase_1>:
    2627:	f3 0f 1e fa          	endbr64 
    262b:	55                   	push   %rbp
    262c:	53                   	push   %rbx
    262d:	48 83 ec 78          	sub    $0x78,%rsp
    2631:	48 89 fb             	mov    %rdi,%rbx
    2634:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    263b:	00 00 
    263d:	48 89 44 24 68       	mov    %rax,0x68(%rsp)
    2642:	31 c0                	xor    %eax,%eax
    2644:	48 b8 46 69 6e 61 6c 	movabs $0x6574206c616e6946,%rax
    264b:	20 74 65 
    264e:	48 ba 78 74 20 69 73 	movabs $0x207369207478,%rdx
    2655:	20 00 00 
    2658:	48 89 04 24          	mov    %rax,(%rsp)
    265c:	48 89 54 24 08       	mov    %rdx,0x8(%rsp)
    2661:	48 c7 44 24 10 00 00 	movq   $0x0,0x10(%rsp)
    2668:	00 00 
    266a:	48 c7 44 24 18 00 00 	movq   $0x0,0x18(%rsp)
    2671:	00 00 
    2673:	48 c7 44 24 20 00 00 	movq   $0x0,0x20(%rsp)
    267a:	00 00 
    267c:	48 c7 44 24 28 00 00 	movq   $0x0,0x28(%rsp)
    2683:	00 00 
    2685:	48 c7 44 24 30 00 00 	movq   $0x0,0x30(%rsp)
    268c:	00 00 
    268e:	48 c7 44 24 38 00 00 	movq   $0x0,0x38(%rsp)
    2695:	00 00 
    2697:	48 c7 44 24 40 00 00 	movq   $0x0,0x40(%rsp)
    269e:	00 00 
    26a0:	48 c7 44 24 48 00 00 	movq   $0x0,0x48(%rsp)
    26a7:	00 00 
    26a9:	48 c7 44 24 50 00 00 	movq   $0x0,0x50(%rsp)
    26b0:	00 00 
    26b2:	48 c7 44 24 58 00 00 	movq   $0x0,0x58(%rsp)
    26b9:	00 00 
    26bb:	c7 44 24 60 00 00 00 	movl   $0x0,0x60(%rsp)
    26c2:	00 
    26c3:	48 89 e5             	mov    %rsp,%rbp
    26c6:	48 8d 35 83 1a 00 00 	lea    0x1a83(%rip),%rsi        # 4150 <_IO_stdin_used+0x150>
    26cd:	48 89 ef             	mov    %rbp,%rdi
    26d0:	e8 65 06 00 00       	call   2d3a <strings_cat>
    26d5:	48 89 ee             	mov    %rbp,%rsi
    26d8:	48 89 df             	mov    %rbx,%rdi
    26db:	e8 fa 05 00 00       	call   2cda <strings_not_equal>
    26e0:	85 c0                	test   %eax,%eax
    26e2:	75 17                	jne    26fb <phase_1+0xd4>
    26e4:	48 8b 44 24 68       	mov    0x68(%rsp),%rax
    26e9:	64 48 2b 04 25 28 00 	sub    %fs:0x28,%rax
    26f0:	00 00 
    26f2:	75 0e                	jne    2702 <phase_1+0xdb>
    26f4:	48 83 c4 78          	add    $0x78,%rsp
    26f8:	5b                   	pop    %rbx
    26f9:	5d                   	pop    %rbp
    26fa:	c3                   	ret    
    26fb:	e8 31 0a 00 00       	call   3131 <explode_bomb>
    2700:	eb e2                	jmp    26e4 <phase_1+0xbd>
    2702:	e8 79 fb ff ff       	call   2280 <__stack_chk_fail@plt>

0000000000002707 <phase_2>:
    2707:	f3 0f 1e fa          	endbr64 
    270b:	55                   	push   %rbp
    270c:	53                   	push   %rbx
    270d:	48 83 ec 28          	sub    $0x28,%rsp
    2711:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    2718:	00 00 
    271a:	48 89 44 24 18       	mov    %rax,0x18(%rsp)
    271f:	31 c0                	xor    %eax,%eax
    2721:	48 89 e6             	mov    %rsp,%rsi
    2724:	e8 4a 0a 00 00       	call   3173 <read_six_numbers>
    2729:	8b 04 24             	mov    (%rsp),%eax
    272c:	0b 44 24 04          	or     0x4(%rsp),%eax
    2730:	78 0a                	js     273c <phase_2+0x35>
    2732:	48 89 e3             	mov    %rsp,%rbx
    2735:	bd 04 00 00 00       	mov    $0x4,%ebp
    273a:	eb 13                	jmp    274f <phase_2+0x48>
    273c:	e8 f0 09 00 00       	call   3131 <explode_bomb>
    2741:	eb ef                	jmp    2732 <phase_2+0x2b>
    2743:	48 83 c3 04          	add    $0x4,%rbx
    2747:	83 c5 02             	add    $0x2,%ebp
    274a:	83 fd 0c             	cmp    $0xc,%ebp
    274d:	74 13                	je     2762 <phase_2+0x5b>
    274f:	8b 43 04             	mov    0x4(%rbx),%eax
    2752:	03 03                	add    (%rbx),%eax
    2754:	01 e8                	add    %ebp,%eax
    2756:	39 43 08             	cmp    %eax,0x8(%rbx)
    2759:	74 e8                	je     2743 <phase_2+0x3c>
    275b:	e8 d1 09 00 00       	call   3131 <explode_bomb>
    2760:	eb e1                	jmp    2743 <phase_2+0x3c>
    2762:	48 8b 44 24 18       	mov    0x18(%rsp),%rax
    2767:	64 48 2b 04 25 28 00 	sub    %fs:0x28,%rax
    276e:	00 00 
    2770:	75 07                	jne    2779 <phase_2+0x72>
    2772:	48 83 c4 28          	add    $0x28,%rsp
    2776:	5b                   	pop    %rbx
    2777:	5d                   	pop    %rbp
    2778:	c3                   	ret    
    2779:	e8 02 fb ff ff       	call   2280 <__stack_chk_fail@plt>

000000000000277e <phase_3>:
    277e:	f3 0f 1e fa          	endbr64 
    2782:	48 83 ec 28          	sub    $0x28,%rsp
    2786:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    278d:	00 00 
    278f:	48 89 44 24 18       	mov    %rax,0x18(%rsp)
    2794:	31 c0                	xor    %eax,%eax
    2796:	48 8d 4c 24 10       	lea    0x10(%rsp),%rcx
    279b:	48 8d 54 24 0c       	lea    0xc(%rsp),%rdx
    27a0:	4c 8d 44 24 14       	lea    0x14(%rsp),%r8
    27a5:	48 8d 35 96 25 00 00 	lea    0x2596(%rip),%rsi        # 4d42 <array.0+0xb62>
    27ac:	e8 7f fb ff ff       	call   2330 <__isoc99_sscanf@plt>
    27b1:	83 f8 02             	cmp    $0x2,%eax
    27b4:	7e 1c                	jle    27d2 <phase_3+0x54>
    27b6:	83 7c 24 0c 07       	cmpl   $0x7,0xc(%rsp)
    27bb:	77 71                	ja     282e <phase_3+0xb0>
    27bd:	8b 44 24 0c          	mov    0xc(%rsp),%eax
    27c1:	48 8d 15 f8 19 00 00 	lea    0x19f8(%rip),%rdx        # 41c0 <_IO_stdin_used+0x1c0>
    27c8:	48 63 04 82          	movslq (%rdx,%rax,4),%rax
    27cc:	48 01 d0             	add    %rdx,%rax
    27cf:	3e ff e0             	notrack jmp *%rax
    27d2:	e8 5a 09 00 00       	call   3131 <explode_bomb>
    27d7:	eb dd                	jmp    27b6 <phase_3+0x38>
    27d9:	bf 56 00 00 00       	mov    $0x56,%edi
    27de:	8b 54 24 14          	mov    0x14(%rsp),%edx
    27e2:	8b 74 24 10          	mov    0x10(%rsp),%esi
    27e6:	e8 89 04 00 00       	call   2c74 <check_power_equal>
    27eb:	85 c0                	test   %eax,%eax
    27ed:	74 52                	je     2841 <phase_3+0xc3>
    27ef:	48 8b 44 24 18       	mov    0x18(%rsp),%rax
    27f4:	64 48 2b 04 25 28 00 	sub    %fs:0x28,%rax
    27fb:	00 00 
    27fd:	75 49                	jne    2848 <phase_3+0xca>
    27ff:	48 83 c4 28          	add    $0x28,%rsp
    2803:	c3                   	ret    
    2804:	bf cb 00 00 00       	mov    $0xcb,%edi
    2809:	eb d3                	jmp    27de <phase_3+0x60>
    280b:	bf 70 01 00 00       	mov    $0x170,%edi
    2810:	eb cc                	jmp    27de <phase_3+0x60>
    2812:	bf 09 02 00 00       	mov    $0x209,%edi
    2817:	eb c5                	jmp    27de <phase_3+0x60>
    2819:	bf e9 01 00 00       	mov    $0x1e9,%edi
    281e:	eb be                	jmp    27de <phase_3+0x60>
    2820:	bf 07 03 00 00       	mov    $0x307,%edi
    2825:	eb b7                	jmp    27de <phase_3+0x60>
    2827:	bf ed 01 00 00       	mov    $0x1ed,%edi
    282c:	eb b0                	jmp    27de <phase_3+0x60>
    282e:	e8 fe 08 00 00       	call   3131 <explode_bomb>
    2833:	bf 00 00 00 00       	mov    $0x0,%edi
    2838:	eb a4                	jmp    27de <phase_3+0x60>
    283a:	bf d4 00 00 00       	mov    $0xd4,%edi
    283f:	eb 9d                	jmp    27de <phase_3+0x60>
    2841:	e8 eb 08 00 00       	call   3131 <explode_bomb>
    2846:	eb a7                	jmp    27ef <phase_3+0x71>
    2848:	e8 33 fa ff ff       	call   2280 <__stack_chk_fail@plt>

000000000000284d <func4>:
    284d:	f3 0f 1e fa          	endbr64 
    2851:	b8 01 00 00 00       	mov    $0x1,%eax
    2856:	85 f6                	test   %esi,%esi
    2858:	74 37                	je     2891 <func4+0x44>
    285a:	53                   	push   %rbx
    285b:	89 fb                	mov    %edi,%ebx
    285d:	40 f6 c6 01          	test   $0x1,%sil
    2861:	75 13                	jne    2876 <func4+0x29>
    2863:	89 f0                	mov    %esi,%eax
    2865:	c1 e8 1f             	shr    $0x1f,%eax
    2868:	01 c6                	add    %eax,%esi
    286a:	d1 fe                	sar    %esi
    286c:	e8 dc ff ff ff       	call   284d <func4>
    2871:	0f af c0             	imul   %eax,%eax
    2874:	5b                   	pop    %rbx
    2875:	c3                   	ret    
    2876:	83 ee 01             	sub    $0x1,%esi
    2879:	89 f0                	mov    %esi,%eax
    287b:	c1 e8 1f             	shr    $0x1f,%eax
    287e:	01 c6                	add    %eax,%esi
    2880:	d1 fe                	sar    %esi
    2882:	e8 c6 ff ff ff       	call   284d <func4>
    2887:	89 da                	mov    %ebx,%edx
    2889:	0f af d0             	imul   %eax,%edx
    288c:	0f af c2             	imul   %edx,%eax
    288f:	eb e3                	jmp    2874 <func4+0x27>
    2891:	c3                   	ret    

0000000000002892 <phase_4>:
    2892:	f3 0f 1e fa          	endbr64 
    2896:	48 83 ec 18          	sub    $0x18,%rsp
    289a:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    28a1:	00 00 
    28a3:	48 89 44 24 08       	mov    %rax,0x8(%rsp)
    28a8:	31 c0                	xor    %eax,%eax
    28aa:	48 8d 4c 24 04       	lea    0x4(%rsp),%rcx
    28af:	48 89 e2             	mov    %rsp,%rdx
    28b2:	48 8d 35 8c 24 00 00 	lea    0x248c(%rip),%rsi        # 4d45 <array.0+0xb65>
    28b9:	e8 72 fa ff ff       	call   2330 <__isoc99_sscanf@plt>
    28be:	83 f8 02             	cmp    $0x2,%eax
    28c1:	75 0d                	jne    28d0 <phase_4+0x3e>
    28c3:	83 3c 24 01          	cmpl   $0x1,(%rsp)
    28c7:	7e 07                	jle    28d0 <phase_4+0x3e>
    28c9:	83 7c 24 04 01       	cmpl   $0x1,0x4(%rsp)
    28ce:	7f 05                	jg     28d5 <phase_4+0x43>
    28d0:	e8 5c 08 00 00       	call   3131 <explode_bomb>
    28d5:	be 09 00 00 00       	mov    $0x9,%esi
    28da:	8b 3c 24             	mov    (%rsp),%edi
    28dd:	e8 6b ff ff ff       	call   284d <func4>
    28e2:	39 44 24 04          	cmp    %eax,0x4(%rsp)
    28e6:	75 15                	jne    28fd <phase_4+0x6b>
    28e8:	48 8b 44 24 08       	mov    0x8(%rsp),%rax
    28ed:	64 48 2b 04 25 28 00 	sub    %fs:0x28,%rax
    28f4:	00 00 
    28f6:	75 0c                	jne    2904 <phase_4+0x72>
    28f8:	48 83 c4 18          	add    $0x18,%rsp
    28fc:	c3                   	ret    
    28fd:	e8 2f 08 00 00       	call   3131 <explode_bomb>
    2902:	eb e4                	jmp    28e8 <phase_4+0x56>
    2904:	e8 77 f9 ff ff       	call   2280 <__stack_chk_fail@plt>

0000000000002909 <phase_5>:
    2909:	f3 0f 1e fa          	endbr64 
    290d:	41 55                	push   %r13
    290f:	41 54                	push   %r12
    2911:	55                   	push   %rbp
    2912:	53                   	push   %rbx
    2913:	48 83 ec 08          	sub    $0x8,%rsp
    2917:	49 89 fc             	mov    %rdi,%r12
    291a:	e8 ed 02 00 00       	call   2c0c <string_length>
    291f:	83 f8 06             	cmp    $0x6,%eax
    2922:	75 10                	jne    2934 <phase_5+0x2b>
    2924:	4c 89 e5             	mov    %r12,%rbp
    2927:	49 83 c4 05          	add    $0x5,%r12
    292b:	4c 8d 2d ae 18 00 00 	lea    0x18ae(%rip),%r13        # 41e0 <array.0>
    2932:	eb 10                	jmp    2944 <phase_5+0x3b>
    2934:	e8 f8 07 00 00       	call   3131 <explode_bomb>
    2939:	eb e9                	jmp    2924 <phase_5+0x1b>
    293b:	48 83 c5 01          	add    $0x1,%rbp
    293f:	4c 39 e5             	cmp    %r12,%rbp
    2942:	74 30                	je     2974 <phase_5+0x6b>
    2944:	0f be 7d 01          	movsbl 0x1(%rbp),%edi
    2948:	e8 1b 04 00 00       	call   2d68 <from_char_to_int>
    294d:	89 c3                	mov    %eax,%ebx
    294f:	0f be 7d 00          	movsbl 0x0(%rbp),%edi
    2953:	e8 10 04 00 00       	call   2d68 <from_char_to_int>
    2958:	83 e3 0f             	and    $0xf,%ebx
    295b:	83 e0 0f             	and    $0xf,%eax
    295e:	41 8b 44 85 00       	mov    0x0(%r13,%rax,4),%eax
    2963:	83 c0 01             	add    $0x1,%eax
    2966:	41 39 44 9d 00       	cmp    %eax,0x0(%r13,%rbx,4)
    296b:	74 ce                	je     293b <phase_5+0x32>
    296d:	e8 bf 07 00 00       	call   3131 <explode_bomb>
    2972:	eb c7                	jmp    293b <phase_5+0x32>
    2974:	48 83 c4 08          	add    $0x8,%rsp
    2978:	5b                   	pop    %rbx
    2979:	5d                   	pop    %rbp
    297a:	41 5c                	pop    %r12
    297c:	41 5d                	pop    %r13
    297e:	c3                   	ret    

000000000000297f <phase_6>:
    297f:	f3 0f 1e fa          	endbr64 
    2983:	41 56                	push   %r14
    2985:	41 55                	push   %r13
    2987:	41 54                	push   %r12
    2989:	55                   	push   %rbp
    298a:	53                   	push   %rbx
    298b:	48 83 ec 60          	sub    $0x60,%rsp
    298f:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    2996:	00 00 
    2998:	48 89 44 24 58       	mov    %rax,0x58(%rsp)
    299d:	31 c0                	xor    %eax,%eax
    299f:	49 89 e5             	mov    %rsp,%r13
    29a2:	4c 89 ee             	mov    %r13,%rsi
    29a5:	e8 c9 07 00 00       	call   3173 <read_six_numbers>
    29aa:	41 be 01 00 00 00    	mov    $0x1,%r14d
    29b0:	49 89 e4             	mov    %rsp,%r12
    29b3:	eb 28                	jmp    29dd <phase_6+0x5e>
    29b5:	e8 77 07 00 00       	call   3131 <explode_bomb>
    29ba:	eb 30                	jmp    29ec <phase_6+0x6d>
    29bc:	48 83 c3 01          	add    $0x1,%rbx
    29c0:	83 fb 05             	cmp    $0x5,%ebx
    29c3:	7f 10                	jg     29d5 <phase_6+0x56>
    29c5:	41 8b 04 9c          	mov    (%r12,%rbx,4),%eax
    29c9:	39 45 00             	cmp    %eax,0x0(%rbp)
    29cc:	75 ee                	jne    29bc <phase_6+0x3d>
    29ce:	e8 5e 07 00 00       	call   3131 <explode_bomb>
    29d3:	eb e7                	jmp    29bc <phase_6+0x3d>
    29d5:	49 83 c6 01          	add    $0x1,%r14
    29d9:	49 83 c5 04          	add    $0x4,%r13
    29dd:	4c 89 ed             	mov    %r13,%rbp
    29e0:	41 8b 45 00          	mov    0x0(%r13),%eax
    29e4:	83 e8 01             	sub    $0x1,%eax
    29e7:	83 f8 05             	cmp    $0x5,%eax
    29ea:	77 c9                	ja     29b5 <phase_6+0x36>
    29ec:	41 83 fe 05          	cmp    $0x5,%r14d
    29f0:	7f 05                	jg     29f7 <phase_6+0x78>
    29f2:	4c 89 f3             	mov    %r14,%rbx
    29f5:	eb ce                	jmp    29c5 <phase_6+0x46>
    29f7:	be 00 00 00 00       	mov    $0x0,%esi
    29fc:	8b 0c b4             	mov    (%rsp,%rsi,4),%ecx
    29ff:	b8 01 00 00 00       	mov    $0x1,%eax
    2a04:	48 8d 15 25 48 00 00 	lea    0x4825(%rip),%rdx        # 7230 <node1>
    2a0b:	83 f9 01             	cmp    $0x1,%ecx
    2a0e:	7e 0b                	jle    2a1b <phase_6+0x9c>
    2a10:	48 8b 52 08          	mov    0x8(%rdx),%rdx
    2a14:	83 c0 01             	add    $0x1,%eax
    2a17:	39 c8                	cmp    %ecx,%eax
    2a19:	75 f5                	jne    2a10 <phase_6+0x91>
    2a1b:	48 89 54 f4 20       	mov    %rdx,0x20(%rsp,%rsi,8)
    2a20:	48 83 c6 01          	add    $0x1,%rsi
    2a24:	48 83 fe 06          	cmp    $0x6,%rsi
    2a28:	75 d2                	jne    29fc <phase_6+0x7d>
    2a2a:	48 8b 5c 24 20       	mov    0x20(%rsp),%rbx
    2a2f:	48 8b 44 24 28       	mov    0x28(%rsp),%rax
    2a34:	48 89 43 08          	mov    %rax,0x8(%rbx)
    2a38:	48 8b 54 24 30       	mov    0x30(%rsp),%rdx
    2a3d:	48 89 50 08          	mov    %rdx,0x8(%rax)
    2a41:	48 8b 44 24 38       	mov    0x38(%rsp),%rax
    2a46:	48 89 42 08          	mov    %rax,0x8(%rdx)
    2a4a:	48 8b 54 24 40       	mov    0x40(%rsp),%rdx
    2a4f:	48 89 50 08          	mov    %rdx,0x8(%rax)
    2a53:	48 8b 44 24 48       	mov    0x48(%rsp),%rax
    2a58:	48 89 42 08          	mov    %rax,0x8(%rdx)
    2a5c:	48 c7 40 08 00 00 00 	movq   $0x0,0x8(%rax)
    2a63:	00 
    2a64:	bd 00 00 00 00       	mov    $0x0,%ebp
    2a69:	eb 16                	jmp    2a81 <phase_6+0x102>
    2a6b:	48 8b 43 08          	mov    0x8(%rbx),%rax
    2a6f:	8b 00                	mov    (%rax),%eax
    2a71:	39 03                	cmp    %eax,(%rbx)
    2a73:	7f 23                	jg     2a98 <phase_6+0x119>
    2a75:	48 8b 5b 08          	mov    0x8(%rbx),%rbx
    2a79:	83 c5 01             	add    $0x1,%ebp
    2a7c:	83 fd 05             	cmp    $0x5,%ebp
    2a7f:	74 1e                	je     2a9f <phase_6+0x120>
    2a81:	40 f6 c5 01          	test   $0x1,%bpl
    2a85:	75 e4                	jne    2a6b <phase_6+0xec>
    2a87:	48 8b 43 08          	mov    0x8(%rbx),%rax
    2a8b:	8b 00                	mov    (%rax),%eax
    2a8d:	39 03                	cmp    %eax,(%rbx)
    2a8f:	7d e4                	jge    2a75 <phase_6+0xf6>
    2a91:	e8 9b 06 00 00       	call   3131 <explode_bomb>
    2a96:	eb dd                	jmp    2a75 <phase_6+0xf6>
    2a98:	e8 94 06 00 00       	call   3131 <explode_bomb>
    2a9d:	eb d6                	jmp    2a75 <phase_6+0xf6>
    2a9f:	48 8b 44 24 58       	mov    0x58(%rsp),%rax
    2aa4:	64 48 2b 04 25 28 00 	sub    %fs:0x28,%rax
    2aab:	00 00 
    2aad:	75 0d                	jne    2abc <phase_6+0x13d>
    2aaf:	48 83 c4 60          	add    $0x60,%rsp
    2ab3:	5b                   	pop    %rbx
    2ab4:	5d                   	pop    %rbp
    2ab5:	41 5c                	pop    %r12
    2ab7:	41 5d                	pop    %r13
    2ab9:	41 5e                	pop    %r14
    2abb:	c3                   	ret    
    2abc:	e8 bf f7 ff ff       	call   2280 <__stack_chk_fail@plt>

0000000000002ac1 <fun7>:
    2ac1:	f3 0f 1e fa          	endbr64 
    2ac5:	48 85 ff             	test   %rdi,%rdi
    2ac8:	74 40                	je     2b0a <fun7+0x49>
    2aca:	41 54                	push   %r12
    2acc:	55                   	push   %rbp
    2acd:	53                   	push   %rbx
    2ace:	48 89 fb             	mov    %rdi,%rbx
    2ad1:	89 f5                	mov    %esi,%ebp
    2ad3:	b8 00 00 00 00       	mov    $0x0,%eax
    2ad8:	39 37                	cmp    %esi,(%rdi)
    2ada:	74 22                	je     2afe <fun7+0x3d>
    2adc:	48 8b 7f 08          	mov    0x8(%rdi),%rdi
    2ae0:	e8 dc ff ff ff       	call   2ac1 <fun7>
    2ae5:	41 89 c4             	mov    %eax,%r12d
    2ae8:	48 8b 7b 10          	mov    0x10(%rbx),%rdi
    2aec:	89 ee                	mov    %ebp,%esi
    2aee:	e8 ce ff ff ff       	call   2ac1 <fun7>
    2af3:	45 85 e4             	test   %r12d,%r12d
    2af6:	79 0b                	jns    2b03 <fun7+0x42>
    2af8:	85 c0                	test   %eax,%eax
    2afa:	78 14                	js     2b10 <fun7+0x4f>
    2afc:	01 c0                	add    %eax,%eax
    2afe:	5b                   	pop    %rbx
    2aff:	5d                   	pop    %rbp
    2b00:	41 5c                	pop    %r12
    2b02:	c3                   	ret    
    2b03:	43 8d 44 24 01       	lea    0x1(%r12,%r12,1),%eax
    2b08:	eb f4                	jmp    2afe <fun7+0x3d>
    2b0a:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
    2b0f:	c3                   	ret    
    2b10:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
    2b15:	eb e7                	jmp    2afe <fun7+0x3d>

0000000000002b17 <secret_phase>:
    2b17:	f3 0f 1e fa          	endbr64 
    2b1b:	53                   	push   %rbx
    2b1c:	e8 97 06 00 00       	call   31b8 <read_line>
    2b21:	48 89 c7             	mov    %rax,%rdi
    2b24:	ba 0a 00 00 00       	mov    $0xa,%edx
    2b29:	be 00 00 00 00       	mov    $0x0,%esi
    2b2e:	e8 dd f7 ff ff       	call   2310 <strtol@plt>
    2b33:	89 c3                	mov    %eax,%ebx
    2b35:	83 e8 32             	sub    $0x32,%eax
    2b38:	3d b6 03 00 00       	cmp    $0x3b6,%eax
    2b3d:	77 30                	ja     2b6f <secret_phase+0x58>
    2b3f:	89 de                	mov    %ebx,%esi
    2b41:	48 8d 3d 08 46 00 00 	lea    0x4608(%rip),%rdi        # 7150 <n1>
    2b48:	e8 74 ff ff ff       	call   2ac1 <fun7>
    2b4d:	83 f8 06             	cmp    $0x6,%eax
    2b50:	75 24                	jne    2b76 <secret_phase+0x5f>
    2b52:	48 8d 3d 27 16 00 00 	lea    0x1627(%rip),%rdi        # 4180 <_IO_stdin_used+0x180>
    2b59:	e8 f2 f6 ff ff       	call   2250 <puts@plt>
    2b5e:	b8 00 00 00 00       	mov    $0x0,%eax
    2b63:	e8 2e 02 00 00       	call   2d96 <print_special>
    2b68:	e8 85 07 00 00       	call   32f2 <phase_defused>
    2b6d:	5b                   	pop    %rbx
    2b6e:	c3                   	ret    
    2b6f:	e8 bd 05 00 00       	call   3131 <explode_bomb>
    2b74:	eb c9                	jmp    2b3f <secret_phase+0x28>
    2b76:	e8 b6 05 00 00       	call   3131 <explode_bomb>
    2b7b:	eb d5                	jmp    2b52 <secret_phase+0x3b>

0000000000002b7d <sig_handler>:
    2b7d:	f3 0f 1e fa          	endbr64 
    2b81:	50                   	push   %rax
    2b82:	58                   	pop    %rax
    2b83:	48 83 ec 08          	sub    $0x8,%rsp
    2b87:	48 8d 3d 92 16 00 00 	lea    0x1692(%rip),%rdi        # 4220 <array.0+0x40>
    2b8e:	e8 bd f6 ff ff       	call   2250 <puts@plt>
    2b93:	bf 03 00 00 00       	mov    $0x3,%edi
    2b98:	e8 03 f8 ff ff       	call   23a0 <sleep@plt>
    2b9d:	48 8d 35 1d 21 00 00 	lea    0x211d(%rip),%rsi        # 4cc1 <array.0+0xae1>
    2ba4:	bf 01 00 00 00       	mov    $0x1,%edi
    2ba9:	b8 00 00 00 00       	mov    $0x0,%eax
    2bae:	e8 8d f7 ff ff       	call   2340 <__printf_chk@plt>
    2bb3:	48 8b 3d a6 4e 00 00 	mov    0x4ea6(%rip),%rdi        # 7a60 <stdout@GLIBC_2.2.5>
    2bba:	e8 61 f7 ff ff       	call   2320 <fflush@plt>
    2bbf:	bf 01 00 00 00       	mov    $0x1,%edi
    2bc4:	e8 d7 f7 ff ff       	call   23a0 <sleep@plt>
    2bc9:	48 8d 3d f9 20 00 00 	lea    0x20f9(%rip),%rdi        # 4cc9 <array.0+0xae9>
    2bd0:	e8 7b f6 ff ff       	call   2250 <puts@plt>
    2bd5:	bf 10 00 00 00       	mov    $0x10,%edi
    2bda:	e8 91 f7 ff ff       	call   2370 <exit@plt>

0000000000002bdf <invalid_phase>:
    2bdf:	f3 0f 1e fa          	endbr64 
    2be3:	50                   	push   %rax
    2be4:	58                   	pop    %rax
    2be5:	48 83 ec 08          	sub    $0x8,%rsp
    2be9:	48 89 fa             	mov    %rdi,%rdx
    2bec:	48 8d 35 de 20 00 00 	lea    0x20de(%rip),%rsi        # 4cd1 <array.0+0xaf1>
    2bf3:	bf 01 00 00 00       	mov    $0x1,%edi
    2bf8:	b8 00 00 00 00       	mov    $0x0,%eax
    2bfd:	e8 3e f7 ff ff       	call   2340 <__printf_chk@plt>
    2c02:	bf 08 00 00 00       	mov    $0x8,%edi
    2c07:	e8 64 f7 ff ff       	call   2370 <exit@plt>

0000000000002c0c <string_length>:
    2c0c:	f3 0f 1e fa          	endbr64 
    2c10:	80 3f 00             	cmpb   $0x0,(%rdi)
    2c13:	74 12                	je     2c27 <string_length+0x1b>
    2c15:	b8 00 00 00 00       	mov    $0x0,%eax
    2c1a:	48 83 c7 01          	add    $0x1,%rdi
    2c1e:	83 c0 01             	add    $0x1,%eax
    2c21:	80 3f 00             	cmpb   $0x0,(%rdi)
    2c24:	75 f4                	jne    2c1a <string_length+0xe>
    2c26:	c3                   	ret    
    2c27:	b8 00 00 00 00       	mov    $0x0,%eax
    2c2c:	c3                   	ret    

0000000000002c2d <check_division_equal>:
    2c2d:	f3 0f 1e fa          	endbr64 
    2c31:	89 f8                	mov    %edi,%eax
    2c33:	89 d1                	mov    %edx,%ecx
    2c35:	99                   	cltd   
    2c36:	f7 fe                	idiv   %esi
    2c38:	39 c8                	cmp    %ecx,%eax
    2c3a:	0f 94 c0             	sete   %al
    2c3d:	0f b6 c0             	movzbl %al,%eax
    2c40:	c3                   	ret    

0000000000002c41 <check_multiplication_equal>:
    2c41:	f3 0f 1e fa          	endbr64 
    2c45:	0f af fe             	imul   %esi,%edi
    2c48:	39 d7                	cmp    %edx,%edi
    2c4a:	0f 94 c0             	sete   %al
    2c4d:	0f b6 c0             	movzbl %al,%eax
    2c50:	c3                   	ret    

0000000000002c51 <check_substraction_equal>:
    2c51:	f3 0f 1e fa          	endbr64 
    2c55:	29 f7                	sub    %esi,%edi
    2c57:	39 d7                	cmp    %edx,%edi
    2c59:	0f 94 c0             	sete   %al
    2c5c:	0f b6 c0             	movzbl %al,%eax
    2c5f:	c3                   	ret    

0000000000002c60 <check_modulus_equal>:
    2c60:	f3 0f 1e fa          	endbr64 
    2c64:	89 f8                	mov    %edi,%eax
    2c66:	89 d1                	mov    %edx,%ecx
    2c68:	99                   	cltd   
    2c69:	f7 fe                	idiv   %esi
    2c6b:	39 ca                	cmp    %ecx,%edx
    2c6d:	0f 94 c0             	sete   %al
    2c70:	0f b6 c0             	movzbl %al,%eax
    2c73:	c3                   	ret    

0000000000002c74 <check_power_equal>:
    2c74:	f3 0f 1e fa          	endbr64 
    2c78:	8d 46 ff             	lea    -0x1(%rsi),%eax
    2c7b:	83 fe 01             	cmp    $0x1,%esi
    2c7e:	7e 13                	jle    2c93 <check_power_equal+0x1f>
    2c80:	89 f9                	mov    %edi,%ecx
    2c82:	0f af cf             	imul   %edi,%ecx
    2c85:	83 e8 01             	sub    $0x1,%eax
    2c88:	75 f8                	jne    2c82 <check_power_equal+0xe>
    2c8a:	39 ca                	cmp    %ecx,%edx
    2c8c:	0f 94 c0             	sete   %al
    2c8f:	0f b6 c0             	movzbl %al,%eax
    2c92:	c3                   	ret    
    2c93:	89 f9                	mov    %edi,%ecx
    2c95:	eb f3                	jmp    2c8a <check_power_equal+0x16>

0000000000002c97 <reverse_string>:
    2c97:	f3 0f 1e fa          	endbr64 
    2c9b:	53                   	push   %rbx
    2c9c:	48 89 fb             	mov    %rdi,%rbx
    2c9f:	48 85 ff             	test   %rdi,%rdi
    2ca2:	74 31                	je     2cd5 <reverse_string+0x3e>
    2ca4:	80 3f 00             	cmpb   $0x0,(%rdi)
    2ca7:	74 2c                	je     2cd5 <reverse_string+0x3e>
    2ca9:	e8 c2 f5 ff ff       	call   2270 <strlen@plt>
    2cae:	48 8d 4c 03 ff       	lea    -0x1(%rbx,%rax,1),%rcx
    2cb3:	48 39 cb             	cmp    %rcx,%rbx
    2cb6:	73 1d                	jae    2cd5 <reverse_string+0x3e>
    2cb8:	48 89 da             	mov    %rbx,%rdx
    2cbb:	0f b6 02             	movzbl (%rdx),%eax
    2cbe:	32 01                	xor    (%rcx),%al
    2cc0:	88 02                	mov    %al,(%rdx)
    2cc2:	32 01                	xor    (%rcx),%al
    2cc4:	88 01                	mov    %al,(%rcx)
    2cc6:	30 02                	xor    %al,(%rdx)
    2cc8:	48 83 c2 01          	add    $0x1,%rdx
    2ccc:	48 83 e9 01          	sub    $0x1,%rcx
    2cd0:	48 39 ca             	cmp    %rcx,%rdx
    2cd3:	72 e6                	jb     2cbb <reverse_string+0x24>
    2cd5:	48 89 d8             	mov    %rbx,%rax
    2cd8:	5b                   	pop    %rbx
    2cd9:	c3                   	ret    

0000000000002cda <strings_not_equal>:
    2cda:	f3 0f 1e fa          	endbr64 
    2cde:	41 54                	push   %r12
    2ce0:	55                   	push   %rbp
    2ce1:	53                   	push   %rbx
    2ce2:	48 89 fb             	mov    %rdi,%rbx
    2ce5:	48 89 f5             	mov    %rsi,%rbp
    2ce8:	e8 1f ff ff ff       	call   2c0c <string_length>
    2ced:	41 89 c4             	mov    %eax,%r12d
    2cf0:	48 89 ef             	mov    %rbp,%rdi
    2cf3:	e8 14 ff ff ff       	call   2c0c <string_length>
    2cf8:	89 c2                	mov    %eax,%edx
    2cfa:	b8 01 00 00 00       	mov    $0x1,%eax
    2cff:	41 39 d4             	cmp    %edx,%r12d
    2d02:	75 31                	jne    2d35 <strings_not_equal+0x5b>
    2d04:	0f b6 13             	movzbl (%rbx),%edx
    2d07:	84 d2                	test   %dl,%dl
    2d09:	74 1e                	je     2d29 <strings_not_equal+0x4f>
    2d0b:	b8 00 00 00 00       	mov    $0x0,%eax
    2d10:	38 54 05 00          	cmp    %dl,0x0(%rbp,%rax,1)
    2d14:	75 1a                	jne    2d30 <strings_not_equal+0x56>
    2d16:	48 83 c0 01          	add    $0x1,%rax
    2d1a:	0f b6 14 03          	movzbl (%rbx,%rax,1),%edx
    2d1e:	84 d2                	test   %dl,%dl
    2d20:	75 ee                	jne    2d10 <strings_not_equal+0x36>
    2d22:	b8 00 00 00 00       	mov    $0x0,%eax
    2d27:	eb 0c                	jmp    2d35 <strings_not_equal+0x5b>
    2d29:	b8 00 00 00 00       	mov    $0x0,%eax
    2d2e:	eb 05                	jmp    2d35 <strings_not_equal+0x5b>
    2d30:	b8 01 00 00 00       	mov    $0x1,%eax
    2d35:	5b                   	pop    %rbx
    2d36:	5d                   	pop    %rbp
    2d37:	41 5c                	pop    %r12
    2d39:	c3                   	ret    

0000000000002d3a <strings_cat>:
    2d3a:	f3 0f 1e fa          	endbr64 
    2d3e:	80 3f 00             	cmpb   $0x0,(%rdi)
    2d41:	74 09                	je     2d4c <strings_cat+0x12>
    2d43:	48 83 c7 01          	add    $0x1,%rdi
    2d47:	80 3f 00             	cmpb   $0x0,(%rdi)
    2d4a:	75 f7                	jne    2d43 <strings_cat+0x9>
    2d4c:	0f b6 16             	movzbl (%rsi),%edx
    2d4f:	84 d2                	test   %dl,%dl
    2d51:	74 14                	je     2d67 <strings_cat+0x2d>
    2d53:	b8 00 00 00 00       	mov    $0x0,%eax
    2d58:	88 14 07             	mov    %dl,(%rdi,%rax,1)
    2d5b:	48 83 c0 01          	add    $0x1,%rax
    2d5f:	0f b6 14 06          	movzbl (%rsi,%rax,1),%edx
    2d63:	84 d2                	test   %dl,%dl
    2d65:	75 f1                	jne    2d58 <strings_cat+0x1e>
    2d67:	c3                   	ret    

0000000000002d68 <from_char_to_int>:
    2d68:	f3 0f 1e fa          	endbr64 
    2d6c:	40 0f be c7          	movsbl %dil,%eax
    2d70:	8d 57 9f             	lea    -0x61(%rdi),%edx
    2d73:	80 fa 19             	cmp    $0x19,%dl
    2d76:	77 04                	ja     2d7c <from_char_to_int+0x14>
    2d78:	83 e8 04             	sub    $0x4,%eax
    2d7b:	c3                   	ret    
    2d7c:	8d 57 bf             	lea    -0x41(%rdi),%edx
    2d7f:	80 fa 19             	cmp    $0x19,%dl
    2d82:	77 04                	ja     2d88 <from_char_to_int+0x20>
    2d84:	83 e8 06             	sub    $0x6,%eax
    2d87:	c3                   	ret    
    2d88:	83 ef 30             	sub    $0x30,%edi
    2d8b:	8d 50 fd             	lea    -0x3(%rax),%edx
    2d8e:	40 80 ff 0a          	cmp    $0xa,%dil
    2d92:	0f 42 c2             	cmovb  %edx,%eax
    2d95:	c3                   	ret    

0000000000002d96 <print_special>:
    2d96:	f3 0f 1e fa          	endbr64 
    2d9a:	48 83 ec 08          	sub    $0x8,%rsp
    2d9e:	48 8d 3d b3 14 00 00 	lea    0x14b3(%rip),%rdi        # 4258 <array.0+0x78>
    2da5:	e8 a6 f4 ff ff       	call   2250 <puts@plt>
    2daa:	48 8d 3d f7 14 00 00 	lea    0x14f7(%rip),%rdi        # 42a8 <array.0+0xc8>
    2db1:	e8 9a f4 ff ff       	call   2250 <puts@plt>
    2db6:	48 8d 3d 33 15 00 00 	lea    0x1533(%rip),%rdi        # 42f0 <array.0+0x110>
    2dbd:	e8 8e f4 ff ff       	call   2250 <puts@plt>
    2dc2:	48 8d 3d 77 15 00 00 	lea    0x1577(%rip),%rdi        # 4340 <array.0+0x160>
    2dc9:	e8 82 f4 ff ff       	call   2250 <puts@plt>
    2dce:	48 8d 3d bb 15 00 00 	lea    0x15bb(%rip),%rdi        # 4390 <array.0+0x1b0>
    2dd5:	e8 76 f4 ff ff       	call   2250 <puts@plt>
    2dda:	48 8d 3d 0f 16 00 00 	lea    0x160f(%rip),%rdi        # 43f0 <array.0+0x210>
    2de1:	e8 6a f4 ff ff       	call   2250 <puts@plt>
    2de6:	48 8d 3d 6b 16 00 00 	lea    0x166b(%rip),%rdi        # 4458 <array.0+0x278>
    2ded:	e8 5e f4 ff ff       	call   2250 <puts@plt>
    2df2:	48 8d 3d cf 16 00 00 	lea    0x16cf(%rip),%rdi        # 44c8 <array.0+0x2e8>
    2df9:	e8 52 f4 ff ff       	call   2250 <puts@plt>
    2dfe:	48 8d 3d 33 17 00 00 	lea    0x1733(%rip),%rdi        # 4538 <array.0+0x358>
    2e05:	e8 46 f4 ff ff       	call   2250 <puts@plt>
    2e0a:	48 8d 3d af 17 00 00 	lea    0x17af(%rip),%rdi        # 45c0 <array.0+0x3e0>
    2e11:	e8 3a f4 ff ff       	call   2250 <puts@plt>
    2e16:	48 8d 3d 13 18 00 00 	lea    0x1813(%rip),%rdi        # 4630 <array.0+0x450>
    2e1d:	e8 2e f4 ff ff       	call   2250 <puts@plt>
    2e22:	48 8d 3d 87 18 00 00 	lea    0x1887(%rip),%rdi        # 46b0 <array.0+0x4d0>
    2e29:	e8 22 f4 ff ff       	call   2250 <puts@plt>
    2e2e:	48 8d 3d fb 18 00 00 	lea    0x18fb(%rip),%rdi        # 4730 <array.0+0x550>
    2e35:	e8 16 f4 ff ff       	call   2250 <puts@plt>
    2e3a:	48 8d 3d 6f 19 00 00 	lea    0x196f(%rip),%rdi        # 47b0 <array.0+0x5d0>
    2e41:	e8 0a f4 ff ff       	call   2250 <puts@plt>
    2e46:	48 8d 3d db 19 00 00 	lea    0x19db(%rip),%rdi        # 4828 <array.0+0x648>
    2e4d:	e8 fe f3 ff ff       	call   2250 <puts@plt>
    2e52:	48 8d 3d 37 1a 00 00 	lea    0x1a37(%rip),%rdi        # 4890 <array.0+0x6b0>
    2e59:	e8 f2 f3 ff ff       	call   2250 <puts@plt>
    2e5e:	48 8d 3d 93 1a 00 00 	lea    0x1a93(%rip),%rdi        # 48f8 <array.0+0x718>
    2e65:	e8 e6 f3 ff ff       	call   2250 <puts@plt>
    2e6a:	48 8d 3d ef 1a 00 00 	lea    0x1aef(%rip),%rdi        # 4960 <array.0+0x780>
    2e71:	e8 da f3 ff ff       	call   2250 <puts@plt>
    2e76:	48 8d 3d 5b 1b 00 00 	lea    0x1b5b(%rip),%rdi        # 49d8 <array.0+0x7f8>
    2e7d:	e8 ce f3 ff ff       	call   2250 <puts@plt>
    2e82:	48 8d 3d cf 1b 00 00 	lea    0x1bcf(%rip),%rdi        # 4a58 <array.0+0x878>
    2e89:	e8 c2 f3 ff ff       	call   2250 <puts@plt>
    2e8e:	48 8d 3d 43 1c 00 00 	lea    0x1c43(%rip),%rdi        # 4ad8 <array.0+0x8f8>
    2e95:	e8 b6 f3 ff ff       	call   2250 <puts@plt>
    2e9a:	48 83 c4 08          	add    $0x8,%rsp
    2e9e:	c3                   	ret    

0000000000002e9f <initialize_bomb>:
    2e9f:	f3 0f 1e fa          	endbr64 
    2ea3:	55                   	push   %rbp
    2ea4:	53                   	push   %rbx
    2ea5:	48 81 ec 00 10 00 00 	sub    $0x1000,%rsp
    2eac:	48 83 0c 24 00       	orq    $0x0,(%rsp)
    2eb1:	48 81 ec 00 10 00 00 	sub    $0x1000,%rsp
    2eb8:	48 83 0c 24 00       	orq    $0x0,(%rsp)
    2ebd:	48 83 ec 58          	sub    $0x58,%rsp
    2ec1:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    2ec8:	00 00 
    2eca:	48 89 84 24 48 20 00 	mov    %rax,0x2048(%rsp)
    2ed1:	00 
    2ed2:	31 c0                	xor    %eax,%eax
    2ed4:	48 8d 35 a2 fc ff ff 	lea    -0x35e(%rip),%rsi        # 2b7d <sig_handler>
    2edb:	bf 02 00 00 00       	mov    $0x2,%edi
    2ee0:	e8 fb f3 ff ff       	call   22e0 <signal@plt>
    2ee5:	48 89 e7             	mov    %rsp,%rdi
    2ee8:	be 40 00 00 00       	mov    $0x40,%esi
    2eed:	e8 6e f4 ff ff       	call   2360 <gethostname@plt>
    2ef2:	85 c0                	test   %eax,%eax
    2ef4:	75 45                	jne    2f3b <initialize_bomb+0x9c>
    2ef6:	48 8b 3d 83 43 00 00 	mov    0x4383(%rip),%rdi        # 7280 <host_table>
    2efd:	48 8d 1d 84 43 00 00 	lea    0x4384(%rip),%rbx        # 7288 <host_table+0x8>
    2f04:	48 89 e5             	mov    %rsp,%rbp
    2f07:	48 85 ff             	test   %rdi,%rdi
    2f0a:	74 19                	je     2f25 <initialize_bomb+0x86>
    2f0c:	48 89 ee             	mov    %rbp,%rsi
    2f0f:	e8 0c f3 ff ff       	call   2220 <strcasecmp@plt>
    2f14:	85 c0                	test   %eax,%eax
    2f16:	74 5e                	je     2f76 <initialize_bomb+0xd7>
    2f18:	48 83 c3 08          	add    $0x8,%rbx
    2f1c:	48 8b 7b f8          	mov    -0x8(%rbx),%rdi
    2f20:	48 85 ff             	test   %rdi,%rdi
    2f23:	75 e7                	jne    2f0c <initialize_bomb+0x6d>
    2f25:	48 8d 3d 64 1c 00 00 	lea    0x1c64(%rip),%rdi        # 4b90 <array.0+0x9b0>
    2f2c:	e8 1f f3 ff ff       	call   2250 <puts@plt>
    2f31:	bf 08 00 00 00       	mov    $0x8,%edi
    2f36:	e8 35 f4 ff ff       	call   2370 <exit@plt>
    2f3b:	48 8d 3d 16 1c 00 00 	lea    0x1c16(%rip),%rdi        # 4b58 <array.0+0x978>
    2f42:	e8 09 f3 ff ff       	call   2250 <puts@plt>
    2f47:	bf 08 00 00 00       	mov    $0x8,%edi
    2f4c:	e8 1f f4 ff ff       	call   2370 <exit@plt>
    2f51:	48 8d 54 24 40       	lea    0x40(%rsp),%rdx
    2f56:	48 8d 35 85 1d 00 00 	lea    0x1d85(%rip),%rsi        # 4ce2 <array.0+0xb02>
    2f5d:	bf 01 00 00 00       	mov    $0x1,%edi
    2f62:	b8 00 00 00 00       	mov    $0x0,%eax
    2f67:	e8 d4 f3 ff ff       	call   2340 <__printf_chk@plt>
    2f6c:	bf 08 00 00 00       	mov    $0x8,%edi
    2f71:	e8 fa f3 ff ff       	call   2370 <exit@plt>
    2f76:	48 8d 7c 24 40       	lea    0x40(%rsp),%rdi
    2f7b:	e8 76 0d 00 00       	call   3cf6 <init_driver>
    2f80:	85 c0                	test   %eax,%eax
    2f82:	78 cd                	js     2f51 <initialize_bomb+0xb2>
    2f84:	48 8b 84 24 48 20 00 	mov    0x2048(%rsp),%rax
    2f8b:	00 
    2f8c:	64 48 2b 04 25 28 00 	sub    %fs:0x28,%rax
    2f93:	00 00 
    2f95:	75 0a                	jne    2fa1 <initialize_bomb+0x102>
    2f97:	48 81 c4 58 20 00 00 	add    $0x2058,%rsp
    2f9e:	5b                   	pop    %rbx
    2f9f:	5d                   	pop    %rbp
    2fa0:	c3                   	ret    
    2fa1:	e8 da f2 ff ff       	call   2280 <__stack_chk_fail@plt>

0000000000002fa6 <initialize_bomb_solve>:
    2fa6:	f3 0f 1e fa          	endbr64 
    2faa:	c3                   	ret    

0000000000002fab <blank_line>:
    2fab:	f3 0f 1e fa          	endbr64 
    2faf:	55                   	push   %rbp
    2fb0:	53                   	push   %rbx
    2fb1:	48 83 ec 08          	sub    $0x8,%rsp
    2fb5:	48 89 fd             	mov    %rdi,%rbp
    2fb8:	0f b6 5d 00          	movzbl 0x0(%rbp),%ebx
    2fbc:	84 db                	test   %bl,%bl
    2fbe:	74 1e                	je     2fde <blank_line+0x33>
    2fc0:	e8 eb f3 ff ff       	call   23b0 <__ctype_b_loc@plt>
    2fc5:	48 83 c5 01          	add    $0x1,%rbp
    2fc9:	48 0f be db          	movsbq %bl,%rbx
    2fcd:	48 8b 00             	mov    (%rax),%rax
    2fd0:	f6 44 58 01 20       	testb  $0x20,0x1(%rax,%rbx,2)
    2fd5:	75 e1                	jne    2fb8 <blank_line+0xd>
    2fd7:	b8 00 00 00 00       	mov    $0x0,%eax
    2fdc:	eb 05                	jmp    2fe3 <blank_line+0x38>
    2fde:	b8 01 00 00 00       	mov    $0x1,%eax
    2fe3:	48 83 c4 08          	add    $0x8,%rsp
    2fe7:	5b                   	pop    %rbx
    2fe8:	5d                   	pop    %rbp
    2fe9:	c3                   	ret    

0000000000002fea <skip>:
    2fea:	f3 0f 1e fa          	endbr64 
    2fee:	55                   	push   %rbp
    2fef:	53                   	push   %rbx
    2ff0:	48 83 ec 08          	sub    $0x8,%rsp
    2ff4:	48 8d 2d 25 4b 00 00 	lea    0x4b25(%rip),%rbp        # 7b20 <input_strings>
    2ffb:	48 63 05 02 4b 00 00 	movslq 0x4b02(%rip),%rax        # 7b04 <num_input_strings>
    3002:	48 8d 04 80          	lea    (%rax,%rax,4),%rax
    3006:	48 8d 04 80          	lea    (%rax,%rax,4),%rax
    300a:	48 8d 7c 85 00       	lea    0x0(%rbp,%rax,4),%rdi
    300f:	48 8b 15 7a 4a 00 00 	mov    0x4a7a(%rip),%rdx        # 7a90 <infile>
    3016:	be 64 00 00 00       	mov    $0x64,%esi
    301b:	e8 a0 f2 ff ff       	call   22c0 <fgets@plt>
    3020:	48 89 c3             	mov    %rax,%rbx
    3023:	48 85 c0             	test   %rax,%rax
    3026:	74 0c                	je     3034 <skip+0x4a>
    3028:	48 89 c7             	mov    %rax,%rdi
    302b:	e8 7b ff ff ff       	call   2fab <blank_line>
    3030:	85 c0                	test   %eax,%eax
    3032:	75 c7                	jne    2ffb <skip+0x11>
    3034:	48 89 d8             	mov    %rbx,%rax
    3037:	48 83 c4 08          	add    $0x8,%rsp
    303b:	5b                   	pop    %rbx
    303c:	5d                   	pop    %rbp
    303d:	c3                   	ret    

000000000000303e <send_msg>:
    303e:	f3 0f 1e fa          	endbr64 
    3042:	53                   	push   %rbx
    3043:	4c 8d 9c 24 00 c0 ff 	lea    -0x4000(%rsp),%r11
    304a:	ff 
    304b:	48 81 ec 00 10 00 00 	sub    $0x1000,%rsp
    3052:	48 83 0c 24 00       	orq    $0x0,(%rsp)
    3057:	4c 39 dc             	cmp    %r11,%rsp
    305a:	75 ef                	jne    304b <send_msg+0xd>
    305c:	48 83 ec 10          	sub    $0x10,%rsp
    3060:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    3067:	00 00 
    3069:	48 89 84 24 08 40 00 	mov    %rax,0x4008(%rsp)
    3070:	00 
    3071:	31 c0                	xor    %eax,%eax
    3073:	8b 15 8b 4a 00 00    	mov    0x4a8b(%rip),%edx        # 7b04 <num_input_strings>
    3079:	8d 42 ff             	lea    -0x1(%rdx),%eax
    307c:	48 98                	cltq   
    307e:	48 8d 04 80          	lea    (%rax,%rax,4),%rax
    3082:	48 8d 0c 80          	lea    (%rax,%rax,4),%rcx
    3086:	48 8d 05 93 4a 00 00 	lea    0x4a93(%rip),%rax        # 7b20 <input_strings>
    308d:	48 8d 04 88          	lea    (%rax,%rcx,4),%rax
    3091:	85 ff                	test   %edi,%edi
    3093:	4c 8d 0d 62 1c 00 00 	lea    0x1c62(%rip),%r9        # 4cfc <array.0+0xb1c>
    309a:	48 8d 0d 63 1c 00 00 	lea    0x1c63(%rip),%rcx        # 4d04 <array.0+0xb24>
    30a1:	4c 0f 44 c9          	cmove  %rcx,%r9
    30a5:	48 89 e3             	mov    %rsp,%rbx
    30a8:	50                   	push   %rax
    30a9:	52                   	push   %rdx
    30aa:	44 8b 05 8f 40 00 00 	mov    0x408f(%rip),%r8d        # 7140 <bomb_id>
    30b1:	48 8d 0d 55 1c 00 00 	lea    0x1c55(%rip),%rcx        # 4d0d <array.0+0xb2d>
    30b8:	ba 00 20 00 00       	mov    $0x2000,%edx
    30bd:	be 01 00 00 00       	mov    $0x1,%esi
    30c2:	48 89 df             	mov    %rbx,%rdi
    30c5:	b8 00 00 00 00       	mov    $0x0,%eax
    30ca:	e8 f1 f2 ff ff       	call   23c0 <__sprintf_chk@plt>
    30cf:	4c 8d 84 24 10 20 00 	lea    0x2010(%rsp),%r8
    30d6:	00 
    30d7:	b9 00 00 00 00       	mov    $0x0,%ecx
    30dc:	48 89 da             	mov    %rbx,%rdx
    30df:	48 8d 35 3a 40 00 00 	lea    0x403a(%rip),%rsi        # 7120 <user_password>
    30e6:	48 8d 3d 4b 40 00 00 	lea    0x404b(%rip),%rdi        # 7138 <userid>
    30ed:	e8 f9 0d 00 00       	call   3eeb <driver_post>
    30f2:	48 89 dc             	mov    %rbx,%rsp
    30f5:	85 c0                	test   %eax,%eax
    30f7:	78 1c                	js     3115 <send_msg+0xd7>
    30f9:	48 8b 84 24 08 40 00 	mov    0x4008(%rsp),%rax
    3100:	00 
    3101:	64 48 2b 04 25 28 00 	sub    %fs:0x28,%rax
    3108:	00 00 
    310a:	75 20                	jne    312c <send_msg+0xee>
    310c:	48 81 c4 10 40 00 00 	add    $0x4010,%rsp
    3113:	5b                   	pop    %rbx
    3114:	c3                   	ret    
    3115:	48 8d bc 24 00 20 00 	lea    0x2000(%rsp),%rdi
    311c:	00 
    311d:	e8 2e f1 ff ff       	call   2250 <puts@plt>
    3122:	bf 00 00 00 00       	mov    $0x0,%edi
    3127:	e8 44 f2 ff ff       	call   2370 <exit@plt>
    312c:	e8 4f f1 ff ff       	call   2280 <__stack_chk_fail@plt>

0000000000003131 <explode_bomb>:
    3131:	f3 0f 1e fa          	endbr64 
    3135:	50                   	push   %rax
    3136:	58                   	pop    %rax
    3137:	48 83 ec 08          	sub    $0x8,%rsp
    313b:	48 8d 3d d7 1b 00 00 	lea    0x1bd7(%rip),%rdi        # 4d19 <array.0+0xb39>
    3142:	e8 09 f1 ff ff       	call   2250 <puts@plt>
    3147:	48 8d 3d d4 1b 00 00 	lea    0x1bd4(%rip),%rdi        # 4d22 <array.0+0xb42>
    314e:	e8 fd f0 ff ff       	call   2250 <puts@plt>
    3153:	bf 00 00 00 00       	mov    $0x0,%edi
    3158:	e8 e1 fe ff ff       	call   303e <send_msg>
    315d:	48 8d 3d 64 1a 00 00 	lea    0x1a64(%rip),%rdi        # 4bc8 <array.0+0x9e8>
    3164:	e8 e7 f0 ff ff       	call   2250 <puts@plt>
    3169:	bf 08 00 00 00       	mov    $0x8,%edi
    316e:	e8 fd f1 ff ff       	call   2370 <exit@plt>

0000000000003173 <read_six_numbers>:
    3173:	f3 0f 1e fa          	endbr64 
    3177:	48 83 ec 08          	sub    $0x8,%rsp
    317b:	48 89 f2             	mov    %rsi,%rdx
    317e:	48 8d 4e 04          	lea    0x4(%rsi),%rcx
    3182:	48 8d 46 14          	lea    0x14(%rsi),%rax
    3186:	50                   	push   %rax
    3187:	48 8d 46 10          	lea    0x10(%rsi),%rax
    318b:	50                   	push   %rax
    318c:	4c 8d 4e 0c          	lea    0xc(%rsi),%r9
    3190:	4c 8d 46 08          	lea    0x8(%rsi),%r8
    3194:	48 8d 35 9e 1b 00 00 	lea    0x1b9e(%rip),%rsi        # 4d39 <array.0+0xb59>
    319b:	b8 00 00 00 00       	mov    $0x0,%eax
    31a0:	e8 8b f1 ff ff       	call   2330 <__isoc99_sscanf@plt>
    31a5:	48 83 c4 10          	add    $0x10,%rsp
    31a9:	83 f8 05             	cmp    $0x5,%eax
    31ac:	7e 05                	jle    31b3 <read_six_numbers+0x40>
    31ae:	48 83 c4 08          	add    $0x8,%rsp
    31b2:	c3                   	ret    
    31b3:	e8 79 ff ff ff       	call   3131 <explode_bomb>

00000000000031b8 <read_line>:
    31b8:	f3 0f 1e fa          	endbr64 
    31bc:	55                   	push   %rbp
    31bd:	53                   	push   %rbx
    31be:	48 83 ec 08          	sub    $0x8,%rsp
    31c2:	b8 00 00 00 00       	mov    $0x0,%eax
    31c7:	e8 1e fe ff ff       	call   2fea <skip>
    31cc:	48 85 c0             	test   %rax,%rax
    31cf:	74 5f                	je     3230 <read_line+0x78>
    31d1:	8b 1d 2d 49 00 00    	mov    0x492d(%rip),%ebx        # 7b04 <num_input_strings>
    31d7:	48 63 c3             	movslq %ebx,%rax
    31da:	48 8d 04 80          	lea    (%rax,%rax,4),%rax
    31de:	48 8d 14 80          	lea    (%rax,%rax,4),%rdx
    31e2:	48 8d 05 37 49 00 00 	lea    0x4937(%rip),%rax        # 7b20 <input_strings>
    31e9:	48 8d 2c 90          	lea    (%rax,%rdx,4),%rbp
    31ed:	48 89 ef             	mov    %rbp,%rdi
    31f0:	e8 7b f0 ff ff       	call   2270 <strlen@plt>
    31f5:	83 f8 62             	cmp    $0x62,%eax
    31f8:	0f 8f aa 00 00 00    	jg     32a8 <read_line+0xf0>
    31fe:	83 e8 01             	sub    $0x1,%eax
    3201:	48 98                	cltq   
    3203:	48 63 d3             	movslq %ebx,%rdx
    3206:	48 8d 14 92          	lea    (%rdx,%rdx,4),%rdx
    320a:	48 8d 0c 92          	lea    (%rdx,%rdx,4),%rcx
    320e:	48 8d 15 0b 49 00 00 	lea    0x490b(%rip),%rdx        # 7b20 <input_strings>
    3215:	48 8d 14 8a          	lea    (%rdx,%rcx,4),%rdx
    3219:	c6 04 02 00          	movb   $0x0,(%rdx,%rax,1)
    321d:	83 c3 01             	add    $0x1,%ebx
    3220:	89 1d de 48 00 00    	mov    %ebx,0x48de(%rip)        # 7b04 <num_input_strings>
    3226:	48 89 e8             	mov    %rbp,%rax
    3229:	48 83 c4 08          	add    $0x8,%rsp
    322d:	5b                   	pop    %rbx
    322e:	5d                   	pop    %rbp
    322f:	c3                   	ret    
    3230:	48 8b 05 39 48 00 00 	mov    0x4839(%rip),%rax        # 7a70 <stdin@GLIBC_2.2.5>
    3237:	48 39 05 52 48 00 00 	cmp    %rax,0x4852(%rip)        # 7a90 <infile>
    323e:	74 1b                	je     325b <read_line+0xa3>
    3240:	48 8d 3d 22 1b 00 00 	lea    0x1b22(%rip),%rdi        # 4d69 <array.0+0xb89>
    3247:	e8 c4 ef ff ff       	call   2210 <getenv@plt>
    324c:	48 85 c0             	test   %rax,%rax
    324f:	74 20                	je     3271 <read_line+0xb9>
    3251:	bf 00 00 00 00       	mov    $0x0,%edi
    3256:	e8 15 f1 ff ff       	call   2370 <exit@plt>
    325b:	48 8d 3d e9 1a 00 00 	lea    0x1ae9(%rip),%rdi        # 4d4b <array.0+0xb6b>
    3262:	e8 e9 ef ff ff       	call   2250 <puts@plt>
    3267:	bf 08 00 00 00       	mov    $0x8,%edi
    326c:	e8 ff f0 ff ff       	call   2370 <exit@plt>
    3271:	48 8b 05 f8 47 00 00 	mov    0x47f8(%rip),%rax        # 7a70 <stdin@GLIBC_2.2.5>
    3278:	48 89 05 11 48 00 00 	mov    %rax,0x4811(%rip)        # 7a90 <infile>
    327f:	b8 00 00 00 00       	mov    $0x0,%eax
    3284:	e8 61 fd ff ff       	call   2fea <skip>
    3289:	48 85 c0             	test   %rax,%rax
    328c:	0f 85 3f ff ff ff    	jne    31d1 <read_line+0x19>
    3292:	48 8d 3d b2 1a 00 00 	lea    0x1ab2(%rip),%rdi        # 4d4b <array.0+0xb6b>
    3299:	e8 b2 ef ff ff       	call   2250 <puts@plt>
    329e:	bf 00 00 00 00       	mov    $0x0,%edi
    32a3:	e8 c8 f0 ff ff       	call   2370 <exit@plt>
    32a8:	48 8d 3d c5 1a 00 00 	lea    0x1ac5(%rip),%rdi        # 4d74 <array.0+0xb94>
    32af:	e8 9c ef ff ff       	call   2250 <puts@plt>
    32b4:	8b 05 4a 48 00 00    	mov    0x484a(%rip),%eax        # 7b04 <num_input_strings>
    32ba:	8d 50 01             	lea    0x1(%rax),%edx
    32bd:	89 15 41 48 00 00    	mov    %edx,0x4841(%rip)        # 7b04 <num_input_strings>
    32c3:	48 98                	cltq   
    32c5:	48 6b c0 64          	imul   $0x64,%rax,%rax
    32c9:	48 8d 15 50 48 00 00 	lea    0x4850(%rip),%rdx        # 7b20 <input_strings>
    32d0:	48 be 2a 2a 2a 74 72 	movabs $0x636e7572742a2a2a,%rsi
    32d7:	75 6e 63 
    32da:	48 bf 61 74 65 64 2a 	movabs $0x2a2a2a64657461,%rdi
    32e1:	2a 2a 00 
    32e4:	48 89 34 02          	mov    %rsi,(%rdx,%rax,1)
    32e8:	48 89 7c 02 08       	mov    %rdi,0x8(%rdx,%rax,1)
    32ed:	e8 3f fe ff ff       	call   3131 <explode_bomb>

00000000000032f2 <phase_defused>:
    32f2:	f3 0f 1e fa          	endbr64 
    32f6:	48 81 ec 88 00 00 00 	sub    $0x88,%rsp
    32fd:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    3304:	00 00 
    3306:	48 89 44 24 78       	mov    %rax,0x78(%rsp)
    330b:	31 c0                	xor    %eax,%eax
    330d:	bf 01 00 00 00       	mov    $0x1,%edi
    3312:	e8 27 fd ff ff       	call   303e <send_msg>
    3317:	83 3d e6 47 00 00 06 	cmpl   $0x6,0x47e6(%rip)        # 7b04 <num_input_strings>
    331e:	74 1c                	je     333c <phase_defused+0x4a>
    3320:	48 8b 44 24 78       	mov    0x78(%rsp),%rax
    3325:	64 48 2b 04 25 28 00 	sub    %fs:0x28,%rax
    332c:	00 00 
    332e:	0f 85 87 00 00 00    	jne    33bb <phase_defused+0xc9>
    3334:	48 81 c4 88 00 00 00 	add    $0x88,%rsp
    333b:	c3                   	ret    
    333c:	48 8d 4c 24 0c       	lea    0xc(%rsp),%rcx
    3341:	48 8d 54 24 08       	lea    0x8(%rsp),%rdx
    3346:	4c 8d 44 24 10       	lea    0x10(%rsp),%r8
    334b:	48 8d 35 3d 1a 00 00 	lea    0x1a3d(%rip),%rsi        # 4d8f <array.0+0xbaf>
    3352:	48 8d 3d f3 48 00 00 	lea    0x48f3(%rip),%rdi        # 7c4c <input_strings+0x12c>
    3359:	b8 00 00 00 00       	mov    $0x0,%eax
    335e:	e8 cd ef ff ff       	call   2330 <__isoc99_sscanf@plt>
    3363:	83 f8 03             	cmp    $0x3,%eax
    3366:	74 1a                	je     3382 <phase_defused+0x90>
    3368:	48 8d 3d e1 18 00 00 	lea    0x18e1(%rip),%rdi        # 4c50 <array.0+0xa70>
    336f:	e8 dc ee ff ff       	call   2250 <puts@plt>
    3374:	48 8d 3d 05 19 00 00 	lea    0x1905(%rip),%rdi        # 4c80 <array.0+0xaa0>
    337b:	e8 d0 ee ff ff       	call   2250 <puts@plt>
    3380:	eb 9e                	jmp    3320 <phase_defused+0x2e>
    3382:	48 8d 7c 24 10       	lea    0x10(%rsp),%rdi
    3387:	48 8d 35 0a 1a 00 00 	lea    0x1a0a(%rip),%rsi        # 4d98 <array.0+0xbb8>
    338e:	e8 47 f9 ff ff       	call   2cda <strings_not_equal>
    3393:	85 c0                	test   %eax,%eax
    3395:	75 d1                	jne    3368 <phase_defused+0x76>
    3397:	48 8d 3d 52 18 00 00 	lea    0x1852(%rip),%rdi        # 4bf0 <array.0+0xa10>
    339e:	e8 ad ee ff ff       	call   2250 <puts@plt>
    33a3:	48 8d 3d 6e 18 00 00 	lea    0x186e(%rip),%rdi        # 4c18 <array.0+0xa38>
    33aa:	e8 a1 ee ff ff       	call   2250 <puts@plt>
    33af:	b8 00 00 00 00       	mov    $0x0,%eax
    33b4:	e8 5e f7 ff ff       	call   2b17 <secret_phase>
    33b9:	eb ad                	jmp    3368 <phase_defused+0x76>
    33bb:	e8 c0 ee ff ff       	call   2280 <__stack_chk_fail@plt>

00000000000033c0 <sigalrm_handler>:
    33c0:	f3 0f 1e fa          	endbr64 
    33c4:	50                   	push   %rax
    33c5:	58                   	pop    %rax
    33c6:	48 83 ec 08          	sub    $0x8,%rsp
    33ca:	b9 00 00 00 00       	mov    $0x0,%ecx
    33cf:	48 8d 15 da 1c 00 00 	lea    0x1cda(%rip),%rdx        # 50b0 <array.0+0xed0>
    33d6:	be 01 00 00 00       	mov    $0x1,%esi
    33db:	48 8b 3d 9e 46 00 00 	mov    0x469e(%rip),%rdi        # 7a80 <stderr@GLIBC_2.2.5>
    33e2:	b8 00 00 00 00       	mov    $0x0,%eax
    33e7:	e8 a4 ef ff ff       	call   2390 <__fprintf_chk@plt>
    33ec:	bf 01 00 00 00       	mov    $0x1,%edi
    33f1:	e8 7a ef ff ff       	call   2370 <exit@plt>

00000000000033f6 <rio_readlineb>:
    33f6:	41 56                	push   %r14
    33f8:	41 55                	push   %r13
    33fa:	41 54                	push   %r12
    33fc:	55                   	push   %rbp
    33fd:	53                   	push   %rbx
    33fe:	49 89 f4             	mov    %rsi,%r12
    3401:	48 83 fa 01          	cmp    $0x1,%rdx
    3405:	0f 86 92 00 00 00    	jbe    349d <rio_readlineb+0xa7>
    340b:	48 89 fb             	mov    %rdi,%rbx
    340e:	4c 8d 74 16 ff       	lea    -0x1(%rsi,%rdx,1),%r14
    3413:	41 bd 01 00 00 00    	mov    $0x1,%r13d
    3419:	48 8d 6f 10          	lea    0x10(%rdi),%rbp
    341d:	eb 56                	jmp    3475 <rio_readlineb+0x7f>
    341f:	e8 0c ee ff ff       	call   2230 <__errno_location@plt>
    3424:	83 38 04             	cmpl   $0x4,(%rax)
    3427:	75 55                	jne    347e <rio_readlineb+0x88>
    3429:	ba 00 20 00 00       	mov    $0x2000,%edx
    342e:	48 89 ee             	mov    %rbp,%rsi
    3431:	8b 3b                	mov    (%rbx),%edi
    3433:	e8 78 ee ff ff       	call   22b0 <read@plt>
    3438:	89 c2                	mov    %eax,%edx
    343a:	89 43 04             	mov    %eax,0x4(%rbx)
    343d:	85 c0                	test   %eax,%eax
    343f:	78 de                	js     341f <rio_readlineb+0x29>
    3441:	85 c0                	test   %eax,%eax
    3443:	74 42                	je     3487 <rio_readlineb+0x91>
    3445:	48 89 6b 08          	mov    %rbp,0x8(%rbx)
    3449:	48 8b 43 08          	mov    0x8(%rbx),%rax
    344d:	0f b6 08             	movzbl (%rax),%ecx
    3450:	48 83 c0 01          	add    $0x1,%rax
    3454:	48 89 43 08          	mov    %rax,0x8(%rbx)
    3458:	83 ea 01             	sub    $0x1,%edx
    345b:	89 53 04             	mov    %edx,0x4(%rbx)
    345e:	49 83 c4 01          	add    $0x1,%r12
    3462:	41 88 4c 24 ff       	mov    %cl,-0x1(%r12)
    3467:	80 f9 0a             	cmp    $0xa,%cl
    346a:	74 3c                	je     34a8 <rio_readlineb+0xb2>
    346c:	41 83 c5 01          	add    $0x1,%r13d
    3470:	4d 39 f4             	cmp    %r14,%r12
    3473:	74 30                	je     34a5 <rio_readlineb+0xaf>
    3475:	8b 53 04             	mov    0x4(%rbx),%edx
    3478:	85 d2                	test   %edx,%edx
    347a:	7e ad                	jle    3429 <rio_readlineb+0x33>
    347c:	eb cb                	jmp    3449 <rio_readlineb+0x53>
    347e:	48 c7 c0 ff ff ff ff 	mov    $0xffffffffffffffff,%rax
    3485:	eb 05                	jmp    348c <rio_readlineb+0x96>
    3487:	b8 00 00 00 00       	mov    $0x0,%eax
    348c:	85 c0                	test   %eax,%eax
    348e:	75 29                	jne    34b9 <rio_readlineb+0xc3>
    3490:	b8 00 00 00 00       	mov    $0x0,%eax
    3495:	41 83 fd 01          	cmp    $0x1,%r13d
    3499:	75 0d                	jne    34a8 <rio_readlineb+0xb2>
    349b:	eb 13                	jmp    34b0 <rio_readlineb+0xba>
    349d:	41 bd 01 00 00 00    	mov    $0x1,%r13d
    34a3:	eb 03                	jmp    34a8 <rio_readlineb+0xb2>
    34a5:	4d 89 f4             	mov    %r14,%r12
    34a8:	41 c6 04 24 00       	movb   $0x0,(%r12)
    34ad:	49 63 c5             	movslq %r13d,%rax
    34b0:	5b                   	pop    %rbx
    34b1:	5d                   	pop    %rbp
    34b2:	41 5c                	pop    %r12
    34b4:	41 5d                	pop    %r13
    34b6:	41 5e                	pop    %r14
    34b8:	c3                   	ret    
    34b9:	48 c7 c0 ff ff ff ff 	mov    $0xffffffffffffffff,%rax
    34c0:	eb ee                	jmp    34b0 <rio_readlineb+0xba>

00000000000034c2 <submitr>:
    34c2:	f3 0f 1e fa          	endbr64 
    34c6:	41 57                	push   %r15
    34c8:	41 56                	push   %r14
    34ca:	41 55                	push   %r13
    34cc:	41 54                	push   %r12
    34ce:	55                   	push   %rbp
    34cf:	53                   	push   %rbx
    34d0:	4c 8d 9c 24 00 60 ff 	lea    -0xa000(%rsp),%r11
    34d7:	ff 
    34d8:	48 81 ec 00 10 00 00 	sub    $0x1000,%rsp
    34df:	48 83 0c 24 00       	orq    $0x0,(%rsp)
    34e4:	4c 39 dc             	cmp    %r11,%rsp
    34e7:	75 ef                	jne    34d8 <submitr+0x16>
    34e9:	48 83 ec 78          	sub    $0x78,%rsp
    34ed:	49 89 fd             	mov    %rdi,%r13
    34f0:	89 f5                	mov    %esi,%ebp
    34f2:	48 89 54 24 08       	mov    %rdx,0x8(%rsp)
    34f7:	48 89 4c 24 10       	mov    %rcx,0x10(%rsp)
    34fc:	4c 89 44 24 20       	mov    %r8,0x20(%rsp)
    3501:	4c 89 4c 24 18       	mov    %r9,0x18(%rsp)
    3506:	48 8b 9c 24 b0 a0 00 	mov    0xa0b0(%rsp),%rbx
    350d:	00 
    350e:	4c 8b bc 24 b8 a0 00 	mov    0xa0b8(%rsp),%r15
    3515:	00 
    3516:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    351d:	00 00 
    351f:	48 89 84 24 68 a0 00 	mov    %rax,0xa068(%rsp)
    3526:	00 
    3527:	31 c0                	xor    %eax,%eax
    3529:	c7 44 24 3c 00 00 00 	movl   $0x0,0x3c(%rsp)
    3530:	00 
    3531:	ba 00 00 00 00       	mov    $0x0,%edx
    3536:	be 01 00 00 00       	mov    $0x1,%esi
    353b:	bf 02 00 00 00       	mov    $0x2,%edi
    3540:	e8 8b ee ff ff       	call   23d0 <socket@plt>
    3545:	85 c0                	test   %eax,%eax
    3547:	0f 88 12 01 00 00    	js     365f <submitr+0x19d>
    354d:	41 89 c4             	mov    %eax,%r12d
    3550:	4c 89 ef             	mov    %r13,%rdi
    3553:	e8 98 ed ff ff       	call   22f0 <gethostbyname@plt>
    3558:	48 85 c0             	test   %rax,%rax
    355b:	0f 84 4e 01 00 00    	je     36af <submitr+0x1ed>
    3561:	4c 8d 6c 24 40       	lea    0x40(%rsp),%r13
    3566:	48 c7 44 24 40 00 00 	movq   $0x0,0x40(%rsp)
    356d:	00 00 
    356f:	48 c7 44 24 48 00 00 	movq   $0x0,0x48(%rsp)
    3576:	00 00 
    3578:	66 c7 44 24 40 02 00 	movw   $0x2,0x40(%rsp)
    357f:	48 63 50 14          	movslq 0x14(%rax),%rdx
    3583:	48 8b 40 18          	mov    0x18(%rax),%rax
    3587:	48 8d 7c 24 44       	lea    0x44(%rsp),%rdi
    358c:	b9 0c 00 00 00       	mov    $0xc,%ecx
    3591:	48 8b 30             	mov    (%rax),%rsi
    3594:	e8 67 ed ff ff       	call   2300 <__memmove_chk@plt>
    3599:	66 c1 c5 08          	rol    $0x8,%bp
    359d:	66 89 6c 24 42       	mov    %bp,0x42(%rsp)
    35a2:	ba 10 00 00 00       	mov    $0x10,%edx
    35a7:	4c 89 ee             	mov    %r13,%rsi
    35aa:	44 89 e7             	mov    %r12d,%edi
    35ad:	e8 ce ed ff ff       	call   2380 <connect@plt>
    35b2:	85 c0                	test   %eax,%eax
    35b4:	0f 88 60 01 00 00    	js     371a <submitr+0x258>
    35ba:	48 89 df             	mov    %rbx,%rdi
    35bd:	e8 ae ec ff ff       	call   2270 <strlen@plt>
    35c2:	48 89 c5             	mov    %rax,%rbp
    35c5:	48 8b 7c 24 08       	mov    0x8(%rsp),%rdi
    35ca:	e8 a1 ec ff ff       	call   2270 <strlen@plt>
    35cf:	49 89 c6             	mov    %rax,%r14
    35d2:	48 8b 7c 24 10       	mov    0x10(%rsp),%rdi
    35d7:	e8 94 ec ff ff       	call   2270 <strlen@plt>
    35dc:	49 89 c5             	mov    %rax,%r13
    35df:	48 8b 7c 24 18       	mov    0x18(%rsp),%rdi
    35e4:	e8 87 ec ff ff       	call   2270 <strlen@plt>
    35e9:	48 89 c2             	mov    %rax,%rdx
    35ec:	4b 8d 84 2e 80 00 00 	lea    0x80(%r14,%r13,1),%rax
    35f3:	00 
    35f4:	48 01 d0             	add    %rdx,%rax
    35f7:	48 8d 54 6d 00       	lea    0x0(%rbp,%rbp,2),%rdx
    35fc:	48 01 d0             	add    %rdx,%rax
    35ff:	48 3d 00 20 00 00    	cmp    $0x2000,%rax
    3605:	0f 87 6c 01 00 00    	ja     3777 <submitr+0x2b5>
    360b:	48 8d 94 24 60 40 00 	lea    0x4060(%rsp),%rdx
    3612:	00 
    3613:	b9 00 04 00 00       	mov    $0x400,%ecx
    3618:	b8 00 00 00 00       	mov    $0x0,%eax
    361d:	48 89 d7             	mov    %rdx,%rdi
    3620:	f3 48 ab             	rep stos %rax,%es:(%rdi)
    3623:	48 89 df             	mov    %rbx,%rdi
    3626:	e8 45 ec ff ff       	call   2270 <strlen@plt>
    362b:	85 c0                	test   %eax,%eax
    362d:	0f 84 07 05 00 00    	je     3b3a <submitr+0x678>
    3633:	8d 40 ff             	lea    -0x1(%rax),%eax
    3636:	4c 8d 6c 03 01       	lea    0x1(%rbx,%rax,1),%r13
    363b:	48 8d ac 24 60 40 00 	lea    0x4060(%rsp),%rbp
    3642:	00 
    3643:	48 8d 84 24 60 80 00 	lea    0x8060(%rsp),%rax
    364a:	00 
    364b:	48 89 44 24 28       	mov    %rax,0x28(%rsp)
    3650:	49 be d9 ff 00 00 00 	movabs $0x2000000000ffd9,%r14
    3657:	00 20 00 
    365a:	e9 a6 01 00 00       	jmp    3805 <submitr+0x343>
    365f:	48 b8 45 72 72 6f 72 	movabs $0x43203a726f727245,%rax
    3666:	3a 20 43 
    3669:	48 ba 6c 69 65 6e 74 	movabs $0x6e7520746e65696c,%rdx
    3670:	20 75 6e 
    3673:	49 89 07             	mov    %rax,(%r15)
    3676:	49 89 57 08          	mov    %rdx,0x8(%r15)
    367a:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
    3681:	74 6f 20 
    3684:	48 ba 63 72 65 61 74 	movabs $0x7320657461657263,%rdx
    368b:	65 20 73 
    368e:	49 89 47 10          	mov    %rax,0x10(%r15)
    3692:	49 89 57 18          	mov    %rdx,0x18(%r15)
    3696:	41 c7 47 20 6f 63 6b 	movl   $0x656b636f,0x20(%r15)
    369d:	65 
    369e:	66 41 c7 47 24 74 00 	movw   $0x74,0x24(%r15)
    36a5:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
    36aa:	e9 03 03 00 00       	jmp    39b2 <submitr+0x4f0>
    36af:	48 b8 45 72 72 6f 72 	movabs $0x44203a726f727245,%rax
    36b6:	3a 20 44 
    36b9:	48 ba 4e 53 20 69 73 	movabs $0x6e7520736920534e,%rdx
    36c0:	20 75 6e 
    36c3:	49 89 07             	mov    %rax,(%r15)
    36c6:	49 89 57 08          	mov    %rdx,0x8(%r15)
    36ca:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
    36d1:	74 6f 20 
    36d4:	48 ba 72 65 73 6f 6c 	movabs $0x2065766c6f736572,%rdx
    36db:	76 65 20 
    36de:	49 89 47 10          	mov    %rax,0x10(%r15)
    36e2:	49 89 57 18          	mov    %rdx,0x18(%r15)
    36e6:	48 b8 73 65 72 76 65 	movabs $0x6120726576726573,%rax
    36ed:	72 20 61 
    36f0:	49 89 47 20          	mov    %rax,0x20(%r15)
    36f4:	41 c7 47 28 64 64 72 	movl   $0x65726464,0x28(%r15)
    36fb:	65 
    36fc:	66 41 c7 47 2c 73 73 	movw   $0x7373,0x2c(%r15)
    3703:	41 c6 47 2e 00       	movb   $0x0,0x2e(%r15)
    3708:	44 89 e7             	mov    %r12d,%edi
    370b:	e8 90 eb ff ff       	call   22a0 <close@plt>
    3710:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
    3715:	e9 98 02 00 00       	jmp    39b2 <submitr+0x4f0>
    371a:	48 b8 45 72 72 6f 72 	movabs $0x55203a726f727245,%rax
    3721:	3a 20 55 
    3724:	48 ba 6e 61 62 6c 65 	movabs $0x6f7420656c62616e,%rdx
    372b:	20 74 6f 
    372e:	49 89 07             	mov    %rax,(%r15)
    3731:	49 89 57 08          	mov    %rdx,0x8(%r15)
    3735:	48 b8 20 63 6f 6e 6e 	movabs $0x7463656e6e6f6320,%rax
    373c:	65 63 74 
    373f:	48 ba 20 74 6f 20 74 	movabs $0x20656874206f7420,%rdx
    3746:	68 65 20 
    3749:	49 89 47 10          	mov    %rax,0x10(%r15)
    374d:	49 89 57 18          	mov    %rdx,0x18(%r15)
    3751:	41 c7 47 20 73 65 72 	movl   $0x76726573,0x20(%r15)
    3758:	76 
    3759:	66 41 c7 47 24 65 72 	movw   $0x7265,0x24(%r15)
    3760:	41 c6 47 26 00       	movb   $0x0,0x26(%r15)
    3765:	44 89 e7             	mov    %r12d,%edi
    3768:	e8 33 eb ff ff       	call   22a0 <close@plt>
    376d:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
    3772:	e9 3b 02 00 00       	jmp    39b2 <submitr+0x4f0>
    3777:	48 b8 45 72 72 6f 72 	movabs $0x52203a726f727245,%rax
    377e:	3a 20 52 
    3781:	48 ba 65 73 75 6c 74 	movabs $0x747320746c757365,%rdx
    3788:	20 73 74 
    378b:	49 89 07             	mov    %rax,(%r15)
    378e:	49 89 57 08          	mov    %rdx,0x8(%r15)
    3792:	48 b8 72 69 6e 67 20 	movabs $0x6f6f7420676e6972,%rax
    3799:	74 6f 6f 
    379c:	48 ba 20 6c 61 72 67 	movabs $0x202e656772616c20,%rdx
    37a3:	65 2e 20 
    37a6:	49 89 47 10          	mov    %rax,0x10(%r15)
    37aa:	49 89 57 18          	mov    %rdx,0x18(%r15)
    37ae:	48 b8 49 6e 63 72 65 	movabs $0x6573616572636e49,%rax
    37b5:	61 73 65 
    37b8:	48 ba 20 53 55 42 4d 	movabs $0x5254494d42555320,%rdx
    37bf:	49 54 52 
    37c2:	49 89 47 20          	mov    %rax,0x20(%r15)
    37c6:	49 89 57 28          	mov    %rdx,0x28(%r15)
    37ca:	48 b8 5f 4d 41 58 42 	movabs $0x46554258414d5f,%rax
    37d1:	55 46 00 
    37d4:	49 89 47 30          	mov    %rax,0x30(%r15)
    37d8:	44 89 e7             	mov    %r12d,%edi
    37db:	e8 c0 ea ff ff       	call   22a0 <close@plt>
    37e0:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
    37e5:	e9 c8 01 00 00       	jmp    39b2 <submitr+0x4f0>
    37ea:	49 0f a3 c6          	bt     %rax,%r14
    37ee:	73 21                	jae    3811 <submitr+0x34f>
    37f0:	44 88 45 00          	mov    %r8b,0x0(%rbp)
    37f4:	48 8d 6d 01          	lea    0x1(%rbp),%rbp
    37f8:	48 83 c3 01          	add    $0x1,%rbx
    37fc:	4c 39 eb             	cmp    %r13,%rbx
    37ff:	0f 84 35 03 00 00    	je     3b3a <submitr+0x678>
    3805:	44 0f b6 03          	movzbl (%rbx),%r8d
    3809:	41 8d 40 d6          	lea    -0x2a(%r8),%eax
    380d:	3c 35                	cmp    $0x35,%al
    380f:	76 d9                	jbe    37ea <submitr+0x328>
    3811:	44 89 c0             	mov    %r8d,%eax
    3814:	83 e0 df             	and    $0xffffffdf,%eax
    3817:	83 e8 41             	sub    $0x41,%eax
    381a:	3c 19                	cmp    $0x19,%al
    381c:	76 d2                	jbe    37f0 <submitr+0x32e>
    381e:	41 80 f8 20          	cmp    $0x20,%r8b
    3822:	74 60                	je     3884 <submitr+0x3c2>
    3824:	41 8d 40 e0          	lea    -0x20(%r8),%eax
    3828:	3c 5f                	cmp    $0x5f,%al
    382a:	76 0a                	jbe    3836 <submitr+0x374>
    382c:	41 80 f8 09          	cmp    $0x9,%r8b
    3830:	0f 85 77 02 00 00    	jne    3aad <submitr+0x5eb>
    3836:	45 0f b6 c0          	movzbl %r8b,%r8d
    383a:	48 8d 0d 45 19 00 00 	lea    0x1945(%rip),%rcx        # 5186 <array.0+0xfa6>
    3841:	ba 08 00 00 00       	mov    $0x8,%edx
    3846:	be 01 00 00 00       	mov    $0x1,%esi
    384b:	48 8b 7c 24 28       	mov    0x28(%rsp),%rdi
    3850:	b8 00 00 00 00       	mov    $0x0,%eax
    3855:	e8 66 eb ff ff       	call   23c0 <__sprintf_chk@plt>
    385a:	0f b6 84 24 60 80 00 	movzbl 0x8060(%rsp),%eax
    3861:	00 
    3862:	88 45 00             	mov    %al,0x0(%rbp)
    3865:	0f b6 84 24 61 80 00 	movzbl 0x8061(%rsp),%eax
    386c:	00 
    386d:	88 45 01             	mov    %al,0x1(%rbp)
    3870:	0f b6 84 24 62 80 00 	movzbl 0x8062(%rsp),%eax
    3877:	00 
    3878:	88 45 02             	mov    %al,0x2(%rbp)
    387b:	48 8d 6d 03          	lea    0x3(%rbp),%rbp
    387f:	e9 74 ff ff ff       	jmp    37f8 <submitr+0x336>
    3884:	c6 45 00 2b          	movb   $0x2b,0x0(%rbp)
    3888:	48 8d 6d 01          	lea    0x1(%rbp),%rbp
    388c:	e9 67 ff ff ff       	jmp    37f8 <submitr+0x336>
    3891:	48 01 c5             	add    %rax,%rbp
    3894:	48 29 c3             	sub    %rax,%rbx
    3897:	0f 84 08 03 00 00    	je     3ba5 <submitr+0x6e3>
    389d:	48 89 da             	mov    %rbx,%rdx
    38a0:	48 89 ee             	mov    %rbp,%rsi
    38a3:	44 89 e7             	mov    %r12d,%edi
    38a6:	e8 b5 e9 ff ff       	call   2260 <write@plt>
    38ab:	48 85 c0             	test   %rax,%rax
    38ae:	7f e1                	jg     3891 <submitr+0x3cf>
    38b0:	e8 7b e9 ff ff       	call   2230 <__errno_location@plt>
    38b5:	83 38 04             	cmpl   $0x4,(%rax)
    38b8:	0f 85 90 01 00 00    	jne    3a4e <submitr+0x58c>
    38be:	4c 89 e8             	mov    %r13,%rax
    38c1:	eb ce                	jmp    3891 <submitr+0x3cf>
    38c3:	48 b8 45 72 72 6f 72 	movabs $0x43203a726f727245,%rax
    38ca:	3a 20 43 
    38cd:	48 ba 6c 69 65 6e 74 	movabs $0x6e7520746e65696c,%rdx
    38d4:	20 75 6e 
    38d7:	49 89 07             	mov    %rax,(%r15)
    38da:	49 89 57 08          	mov    %rdx,0x8(%r15)
    38de:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
    38e5:	74 6f 20 
    38e8:	48 ba 72 65 61 64 20 	movabs $0x7269662064616572,%rdx
    38ef:	66 69 72 
    38f2:	49 89 47 10          	mov    %rax,0x10(%r15)
    38f6:	49 89 57 18          	mov    %rdx,0x18(%r15)
    38fa:	48 b8 73 74 20 68 65 	movabs $0x6564616568207473,%rax
    3901:	61 64 65 
    3904:	48 ba 72 20 66 72 6f 	movabs $0x73206d6f72662072,%rdx
    390b:	6d 20 73 
    390e:	49 89 47 20          	mov    %rax,0x20(%r15)
    3912:	49 89 57 28          	mov    %rdx,0x28(%r15)
    3916:	41 c7 47 30 65 72 76 	movl   $0x65767265,0x30(%r15)
    391d:	65 
    391e:	66 41 c7 47 34 72 00 	movw   $0x72,0x34(%r15)
    3925:	44 89 e7             	mov    %r12d,%edi
    3928:	e8 73 e9 ff ff       	call   22a0 <close@plt>
    392d:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
    3932:	eb 7e                	jmp    39b2 <submitr+0x4f0>
    3934:	4c 8d 8c 24 60 80 00 	lea    0x8060(%rsp),%r9
    393b:	00 
    393c:	48 8d 0d 95 17 00 00 	lea    0x1795(%rip),%rcx        # 50d8 <array.0+0xef8>
    3943:	48 c7 c2 ff ff ff ff 	mov    $0xffffffffffffffff,%rdx
    394a:	be 01 00 00 00       	mov    $0x1,%esi
    394f:	4c 89 ff             	mov    %r15,%rdi
    3952:	b8 00 00 00 00       	mov    $0x0,%eax
    3957:	e8 64 ea ff ff       	call   23c0 <__sprintf_chk@plt>
    395c:	44 89 e7             	mov    %r12d,%edi
    395f:	e8 3c e9 ff ff       	call   22a0 <close@plt>
    3964:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
    3969:	eb 47                	jmp    39b2 <submitr+0x4f0>
    396b:	48 8d b4 24 60 20 00 	lea    0x2060(%rsp),%rsi
    3972:	00 
    3973:	48 8d 7c 24 50       	lea    0x50(%rsp),%rdi
    3978:	ba 00 20 00 00       	mov    $0x2000,%edx
    397d:	e8 74 fa ff ff       	call   33f6 <rio_readlineb>
    3982:	48 85 c0             	test   %rax,%rax
    3985:	7e 54                	jle    39db <submitr+0x519>
    3987:	48 8d b4 24 60 20 00 	lea    0x2060(%rsp),%rsi
    398e:	00 
    398f:	4c 89 ff             	mov    %r15,%rdi
    3992:	e8 a9 e8 ff ff       	call   2240 <strcpy@plt>
    3997:	44 89 e7             	mov    %r12d,%edi
    399a:	e8 01 e9 ff ff       	call   22a0 <close@plt>
    399f:	48 8d 35 fb 17 00 00 	lea    0x17fb(%rip),%rsi        # 51a1 <array.0+0xfc1>
    39a6:	4c 89 ff             	mov    %r15,%rdi
    39a9:	e8 22 e9 ff ff       	call   22d0 <strcmp@plt>
    39ae:	f7 d8                	neg    %eax
    39b0:	19 c0                	sbb    %eax,%eax
    39b2:	48 8b 94 24 68 a0 00 	mov    0xa068(%rsp),%rdx
    39b9:	00 
    39ba:	64 48 2b 14 25 28 00 	sub    %fs:0x28,%rdx
    39c1:	00 00 
    39c3:	0f 85 f8 02 00 00    	jne    3cc1 <submitr+0x7ff>
    39c9:	48 81 c4 78 a0 00 00 	add    $0xa078,%rsp
    39d0:	5b                   	pop    %rbx
    39d1:	5d                   	pop    %rbp
    39d2:	41 5c                	pop    %r12
    39d4:	41 5d                	pop    %r13
    39d6:	41 5e                	pop    %r14
    39d8:	41 5f                	pop    %r15
    39da:	c3                   	ret    
    39db:	48 b8 45 72 72 6f 72 	movabs $0x43203a726f727245,%rax
    39e2:	3a 20 43 
    39e5:	48 ba 6c 69 65 6e 74 	movabs $0x6e7520746e65696c,%rdx
    39ec:	20 75 6e 
    39ef:	49 89 07             	mov    %rax,(%r15)
    39f2:	49 89 57 08          	mov    %rdx,0x8(%r15)
    39f6:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
    39fd:	74 6f 20 
    3a00:	48 ba 72 65 61 64 20 	movabs $0x6174732064616572,%rdx
    3a07:	73 74 61 
    3a0a:	49 89 47 10          	mov    %rax,0x10(%r15)
    3a0e:	49 89 57 18          	mov    %rdx,0x18(%r15)
    3a12:	48 b8 74 75 73 20 6d 	movabs $0x7373656d20737574,%rax
    3a19:	65 73 73 
    3a1c:	48 ba 61 67 65 20 66 	movabs $0x6d6f726620656761,%rdx
    3a23:	72 6f 6d 
    3a26:	49 89 47 20          	mov    %rax,0x20(%r15)
    3a2a:	49 89 57 28          	mov    %rdx,0x28(%r15)
    3a2e:	48 b8 20 73 65 72 76 	movabs $0x72657672657320,%rax
    3a35:	65 72 00 
    3a38:	49 89 47 30          	mov    %rax,0x30(%r15)
    3a3c:	44 89 e7             	mov    %r12d,%edi
    3a3f:	e8 5c e8 ff ff       	call   22a0 <close@plt>
    3a44:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
    3a49:	e9 64 ff ff ff       	jmp    39b2 <submitr+0x4f0>
    3a4e:	48 b8 45 72 72 6f 72 	movabs $0x43203a726f727245,%rax
    3a55:	3a 20 43 
    3a58:	48 ba 6c 69 65 6e 74 	movabs $0x6e7520746e65696c,%rdx
    3a5f:	20 75 6e 
    3a62:	49 89 07             	mov    %rax,(%r15)
    3a65:	49 89 57 08          	mov    %rdx,0x8(%r15)
    3a69:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
    3a70:	74 6f 20 
    3a73:	48 ba 77 72 69 74 65 	movabs $0x6f74206574697277,%rdx
    3a7a:	20 74 6f 
    3a7d:	49 89 47 10          	mov    %rax,0x10(%r15)
    3a81:	49 89 57 18          	mov    %rdx,0x18(%r15)
    3a85:	48 b8 20 74 68 65 20 	movabs $0x7265732065687420,%rax
    3a8c:	73 65 72 
    3a8f:	49 89 47 20          	mov    %rax,0x20(%r15)
    3a93:	41 c7 47 28 76 65 72 	movl   $0x726576,0x28(%r15)
    3a9a:	00 
    3a9b:	44 89 e7             	mov    %r12d,%edi
    3a9e:	e8 fd e7 ff ff       	call   22a0 <close@plt>
    3aa3:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
    3aa8:	e9 05 ff ff ff       	jmp    39b2 <submitr+0x4f0>
    3aad:	48 b8 45 72 72 6f 72 	movabs $0x52203a726f727245,%rax
    3ab4:	3a 20 52 
    3ab7:	48 ba 65 73 75 6c 74 	movabs $0x747320746c757365,%rdx
    3abe:	20 73 74 
    3ac1:	49 89 07             	mov    %rax,(%r15)
    3ac4:	49 89 57 08          	mov    %rdx,0x8(%r15)
    3ac8:	48 b8 72 69 6e 67 20 	movabs $0x6e6f6320676e6972,%rax
    3acf:	63 6f 6e 
    3ad2:	48 ba 74 61 69 6e 73 	movabs $0x6e6120736e696174,%rdx
    3ad9:	20 61 6e 
    3adc:	49 89 47 10          	mov    %rax,0x10(%r15)
    3ae0:	49 89 57 18          	mov    %rdx,0x18(%r15)
    3ae4:	48 b8 20 69 6c 6c 65 	movabs $0x6c6167656c6c6920,%rax
    3aeb:	67 61 6c 
    3aee:	48 ba 20 6f 72 20 75 	movabs $0x72706e7520726f20,%rdx
    3af5:	6e 70 72 
    3af8:	49 89 47 20          	mov    %rax,0x20(%r15)
    3afc:	49 89 57 28          	mov    %rdx,0x28(%r15)
    3b00:	48 b8 69 6e 74 61 62 	movabs $0x20656c6261746e69,%rax
    3b07:	6c 65 20 
    3b0a:	48 ba 63 68 61 72 61 	movabs $0x6574636172616863,%rdx
    3b11:	63 74 65 
    3b14:	49 89 47 30          	mov    %rax,0x30(%r15)
    3b18:	49 89 57 38          	mov    %rdx,0x38(%r15)
    3b1c:	66 41 c7 47 40 72 2e 	movw   $0x2e72,0x40(%r15)
    3b23:	41 c6 47 42 00       	movb   $0x0,0x42(%r15)
    3b28:	44 89 e7             	mov    %r12d,%edi
    3b2b:	e8 70 e7 ff ff       	call   22a0 <close@plt>
    3b30:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
    3b35:	e9 78 fe ff ff       	jmp    39b2 <submitr+0x4f0>
    3b3a:	48 8d 9c 24 60 20 00 	lea    0x2060(%rsp),%rbx
    3b41:	00 
    3b42:	48 83 ec 08          	sub    $0x8,%rsp
    3b46:	48 8d 84 24 68 40 00 	lea    0x4068(%rsp),%rax
    3b4d:	00 
    3b4e:	50                   	push   %rax
    3b4f:	ff 74 24 28          	push   0x28(%rsp)
    3b53:	ff 74 24 38          	push   0x38(%rsp)
    3b57:	4c 8b 4c 24 30       	mov    0x30(%rsp),%r9
    3b5c:	4c 8b 44 24 28       	mov    0x28(%rsp),%r8
    3b61:	48 8d 0d a0 15 00 00 	lea    0x15a0(%rip),%rcx        # 5108 <array.0+0xf28>
    3b68:	ba 00 20 00 00       	mov    $0x2000,%edx
    3b6d:	be 01 00 00 00       	mov    $0x1,%esi
    3b72:	48 89 df             	mov    %rbx,%rdi
    3b75:	b8 00 00 00 00       	mov    $0x0,%eax
    3b7a:	e8 41 e8 ff ff       	call   23c0 <__sprintf_chk@plt>
    3b7f:	48 83 c4 20          	add    $0x20,%rsp
    3b83:	48 89 df             	mov    %rbx,%rdi
    3b86:	e8 e5 e6 ff ff       	call   2270 <strlen@plt>
    3b8b:	48 89 c3             	mov    %rax,%rbx
    3b8e:	48 8d ac 24 60 20 00 	lea    0x2060(%rsp),%rbp
    3b95:	00 
    3b96:	41 bd 00 00 00 00    	mov    $0x0,%r13d
    3b9c:	48 85 c0             	test   %rax,%rax
    3b9f:	0f 85 f8 fc ff ff    	jne    389d <submitr+0x3db>
    3ba5:	44 89 64 24 50       	mov    %r12d,0x50(%rsp)
    3baa:	c7 44 24 54 00 00 00 	movl   $0x0,0x54(%rsp)
    3bb1:	00 
    3bb2:	48 8d 7c 24 50       	lea    0x50(%rsp),%rdi
    3bb7:	48 8d 44 24 60       	lea    0x60(%rsp),%rax
    3bbc:	48 89 44 24 58       	mov    %rax,0x58(%rsp)
    3bc1:	48 8d b4 24 60 20 00 	lea    0x2060(%rsp),%rsi
    3bc8:	00 
    3bc9:	ba 00 20 00 00       	mov    $0x2000,%edx
    3bce:	e8 23 f8 ff ff       	call   33f6 <rio_readlineb>
    3bd3:	48 85 c0             	test   %rax,%rax
    3bd6:	0f 8e e7 fc ff ff    	jle    38c3 <submitr+0x401>
    3bdc:	48 8d 4c 24 3c       	lea    0x3c(%rsp),%rcx
    3be1:	48 8d 94 24 60 60 00 	lea    0x6060(%rsp),%rdx
    3be8:	00 
    3be9:	48 8d bc 24 60 20 00 	lea    0x2060(%rsp),%rdi
    3bf0:	00 
    3bf1:	4c 8d 84 24 60 80 00 	lea    0x8060(%rsp),%r8
    3bf8:	00 
    3bf9:	48 8d 35 8d 15 00 00 	lea    0x158d(%rip),%rsi        # 518d <array.0+0xfad>
    3c00:	b8 00 00 00 00       	mov    $0x0,%eax
    3c05:	e8 26 e7 ff ff       	call   2330 <__isoc99_sscanf@plt>
    3c0a:	44 8b 44 24 3c       	mov    0x3c(%rsp),%r8d
    3c0f:	41 81 f8 c8 00 00 00 	cmp    $0xc8,%r8d
    3c16:	0f 85 18 fd ff ff    	jne    3934 <submitr+0x472>
    3c1c:	48 8d 1d 7b 15 00 00 	lea    0x157b(%rip),%rbx        # 519e <array.0+0xfbe>
    3c23:	48 8d bc 24 60 20 00 	lea    0x2060(%rsp),%rdi
    3c2a:	00 
    3c2b:	48 89 de             	mov    %rbx,%rsi
    3c2e:	e8 9d e6 ff ff       	call   22d0 <strcmp@plt>
    3c33:	85 c0                	test   %eax,%eax
    3c35:	0f 84 30 fd ff ff    	je     396b <submitr+0x4a9>
    3c3b:	48 8d b4 24 60 20 00 	lea    0x2060(%rsp),%rsi
    3c42:	00 
    3c43:	48 8d 7c 24 50       	lea    0x50(%rsp),%rdi
    3c48:	ba 00 20 00 00       	mov    $0x2000,%edx
    3c4d:	e8 a4 f7 ff ff       	call   33f6 <rio_readlineb>
    3c52:	48 85 c0             	test   %rax,%rax
    3c55:	7f cc                	jg     3c23 <submitr+0x761>
    3c57:	48 b8 45 72 72 6f 72 	movabs $0x43203a726f727245,%rax
    3c5e:	3a 20 43 
    3c61:	48 ba 6c 69 65 6e 74 	movabs $0x6e7520746e65696c,%rdx
    3c68:	20 75 6e 
    3c6b:	49 89 07             	mov    %rax,(%r15)
    3c6e:	49 89 57 08          	mov    %rdx,0x8(%r15)
    3c72:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
    3c79:	74 6f 20 
    3c7c:	48 ba 72 65 61 64 20 	movabs $0x6165682064616572,%rdx
    3c83:	68 65 61 
    3c86:	49 89 47 10          	mov    %rax,0x10(%r15)
    3c8a:	49 89 57 18          	mov    %rdx,0x18(%r15)
    3c8e:	48 b8 64 65 72 73 20 	movabs $0x6f72662073726564,%rax
    3c95:	66 72 6f 
    3c98:	48 ba 6d 20 73 65 72 	movabs $0x726576726573206d,%rdx
    3c9f:	76 65 72 
    3ca2:	49 89 47 20          	mov    %rax,0x20(%r15)
    3ca6:	49 89 57 28          	mov    %rdx,0x28(%r15)
    3caa:	41 c6 47 30 00       	movb   $0x0,0x30(%r15)
    3caf:	44 89 e7             	mov    %r12d,%edi
    3cb2:	e8 e9 e5 ff ff       	call   22a0 <close@plt>
    3cb7:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
    3cbc:	e9 f1 fc ff ff       	jmp    39b2 <submitr+0x4f0>
    3cc1:	e8 ba e5 ff ff       	call   2280 <__stack_chk_fail@plt>

0000000000003cc6 <init_timeout>:
    3cc6:	f3 0f 1e fa          	endbr64 
    3cca:	85 ff                	test   %edi,%edi
    3ccc:	75 01                	jne    3ccf <init_timeout+0x9>
    3cce:	c3                   	ret    
    3ccf:	53                   	push   %rbx
    3cd0:	89 fb                	mov    %edi,%ebx
    3cd2:	48 8d 35 e7 f6 ff ff 	lea    -0x919(%rip),%rsi        # 33c0 <sigalrm_handler>
    3cd9:	bf 0e 00 00 00       	mov    $0xe,%edi
    3cde:	e8 fd e5 ff ff       	call   22e0 <signal@plt>
    3ce3:	85 db                	test   %ebx,%ebx
    3ce5:	b8 00 00 00 00       	mov    $0x0,%eax
    3cea:	0f 49 c3             	cmovns %ebx,%eax
    3ced:	89 c7                	mov    %eax,%edi
    3cef:	e8 9c e5 ff ff       	call   2290 <alarm@plt>
    3cf4:	5b                   	pop    %rbx
    3cf5:	c3                   	ret    

0000000000003cf6 <init_driver>:
    3cf6:	f3 0f 1e fa          	endbr64 
    3cfa:	41 54                	push   %r12
    3cfc:	55                   	push   %rbp
    3cfd:	53                   	push   %rbx
    3cfe:	48 83 ec 20          	sub    $0x20,%rsp
    3d02:	48 89 fd             	mov    %rdi,%rbp
    3d05:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    3d0c:	00 00 
    3d0e:	48 89 44 24 18       	mov    %rax,0x18(%rsp)
    3d13:	31 c0                	xor    %eax,%eax
    3d15:	be 01 00 00 00       	mov    $0x1,%esi
    3d1a:	bf 0d 00 00 00       	mov    $0xd,%edi
    3d1f:	e8 bc e5 ff ff       	call   22e0 <signal@plt>
    3d24:	be 01 00 00 00       	mov    $0x1,%esi
    3d29:	bf 1d 00 00 00       	mov    $0x1d,%edi
    3d2e:	e8 ad e5 ff ff       	call   22e0 <signal@plt>
    3d33:	be 01 00 00 00       	mov    $0x1,%esi
    3d38:	bf 1d 00 00 00       	mov    $0x1d,%edi
    3d3d:	e8 9e e5 ff ff       	call   22e0 <signal@plt>
    3d42:	ba 00 00 00 00       	mov    $0x0,%edx
    3d47:	be 01 00 00 00       	mov    $0x1,%esi
    3d4c:	bf 02 00 00 00       	mov    $0x2,%edi
    3d51:	e8 7a e6 ff ff       	call   23d0 <socket@plt>
    3d56:	85 c0                	test   %eax,%eax
    3d58:	0f 88 9c 00 00 00    	js     3dfa <init_driver+0x104>
    3d5e:	89 c3                	mov    %eax,%ebx
    3d60:	48 8d 3d 3d 14 00 00 	lea    0x143d(%rip),%rdi        # 51a4 <array.0+0xfc4>
    3d67:	e8 84 e5 ff ff       	call   22f0 <gethostbyname@plt>
    3d6c:	48 85 c0             	test   %rax,%rax
    3d6f:	0f 84 d1 00 00 00    	je     3e46 <init_driver+0x150>
    3d75:	49 89 e4             	mov    %rsp,%r12
    3d78:	48 c7 04 24 00 00 00 	movq   $0x0,(%rsp)
    3d7f:	00 
    3d80:	48 c7 44 24 08 00 00 	movq   $0x0,0x8(%rsp)
    3d87:	00 00 
    3d89:	66 c7 04 24 02 00    	movw   $0x2,(%rsp)
    3d8f:	48 63 50 14          	movslq 0x14(%rax),%rdx
    3d93:	48 8b 40 18          	mov    0x18(%rax),%rax
    3d97:	48 8d 7c 24 04       	lea    0x4(%rsp),%rdi
    3d9c:	b9 0c 00 00 00       	mov    $0xc,%ecx
    3da1:	48 8b 30             	mov    (%rax),%rsi
    3da4:	e8 57 e5 ff ff       	call   2300 <__memmove_chk@plt>
    3da9:	66 c7 44 24 02 3b 6e 	movw   $0x6e3b,0x2(%rsp)
    3db0:	ba 10 00 00 00       	mov    $0x10,%edx
    3db5:	4c 89 e6             	mov    %r12,%rsi
    3db8:	89 df                	mov    %ebx,%edi
    3dba:	e8 c1 e5 ff ff       	call   2380 <connect@plt>
    3dbf:	85 c0                	test   %eax,%eax
    3dc1:	0f 88 e7 00 00 00    	js     3eae <init_driver+0x1b8>
    3dc7:	89 df                	mov    %ebx,%edi
    3dc9:	e8 d2 e4 ff ff       	call   22a0 <close@plt>
    3dce:	66 c7 45 00 4f 4b    	movw   $0x4b4f,0x0(%rbp)
    3dd4:	c6 45 02 00          	movb   $0x0,0x2(%rbp)
    3dd8:	b8 00 00 00 00       	mov    $0x0,%eax
    3ddd:	48 8b 54 24 18       	mov    0x18(%rsp),%rdx
    3de2:	64 48 2b 14 25 28 00 	sub    %fs:0x28,%rdx
    3de9:	00 00 
    3deb:	0f 85 f5 00 00 00    	jne    3ee6 <init_driver+0x1f0>
    3df1:	48 83 c4 20          	add    $0x20,%rsp
    3df5:	5b                   	pop    %rbx
    3df6:	5d                   	pop    %rbp
    3df7:	41 5c                	pop    %r12
    3df9:	c3                   	ret    
    3dfa:	48 b8 45 72 72 6f 72 	movabs $0x43203a726f727245,%rax
    3e01:	3a 20 43 
    3e04:	48 ba 6c 69 65 6e 74 	movabs $0x6e7520746e65696c,%rdx
    3e0b:	20 75 6e 
    3e0e:	48 89 45 00          	mov    %rax,0x0(%rbp)
    3e12:	48 89 55 08          	mov    %rdx,0x8(%rbp)
    3e16:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
    3e1d:	74 6f 20 
    3e20:	48 ba 63 72 65 61 74 	movabs $0x7320657461657263,%rdx
    3e27:	65 20 73 
    3e2a:	48 89 45 10          	mov    %rax,0x10(%rbp)
    3e2e:	48 89 55 18          	mov    %rdx,0x18(%rbp)
    3e32:	c7 45 20 6f 63 6b 65 	movl   $0x656b636f,0x20(%rbp)
    3e39:	66 c7 45 24 74 00    	movw   $0x74,0x24(%rbp)
    3e3f:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
    3e44:	eb 97                	jmp    3ddd <init_driver+0xe7>
    3e46:	48 b8 45 72 72 6f 72 	movabs $0x44203a726f727245,%rax
    3e4d:	3a 20 44 
    3e50:	48 ba 4e 53 20 69 73 	movabs $0x6e7520736920534e,%rdx
    3e57:	20 75 6e 
    3e5a:	48 89 45 00          	mov    %rax,0x0(%rbp)
    3e5e:	48 89 55 08          	mov    %rdx,0x8(%rbp)
    3e62:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
    3e69:	74 6f 20 
    3e6c:	48 ba 72 65 73 6f 6c 	movabs $0x2065766c6f736572,%rdx
    3e73:	76 65 20 
    3e76:	48 89 45 10          	mov    %rax,0x10(%rbp)
    3e7a:	48 89 55 18          	mov    %rdx,0x18(%rbp)
    3e7e:	48 b8 73 65 72 76 65 	movabs $0x6120726576726573,%rax
    3e85:	72 20 61 
    3e88:	48 89 45 20          	mov    %rax,0x20(%rbp)
    3e8c:	c7 45 28 64 64 72 65 	movl   $0x65726464,0x28(%rbp)
    3e93:	66 c7 45 2c 73 73    	movw   $0x7373,0x2c(%rbp)
    3e99:	c6 45 2e 00          	movb   $0x0,0x2e(%rbp)
    3e9d:	89 df                	mov    %ebx,%edi
    3e9f:	e8 fc e3 ff ff       	call   22a0 <close@plt>
    3ea4:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
    3ea9:	e9 2f ff ff ff       	jmp    3ddd <init_driver+0xe7>
    3eae:	4c 8d 05 ef 12 00 00 	lea    0x12ef(%rip),%r8        # 51a4 <array.0+0xfc4>
    3eb5:	48 8d 0d a4 12 00 00 	lea    0x12a4(%rip),%rcx        # 5160 <array.0+0xf80>
    3ebc:	48 c7 c2 ff ff ff ff 	mov    $0xffffffffffffffff,%rdx
    3ec3:	be 01 00 00 00       	mov    $0x1,%esi
    3ec8:	48 89 ef             	mov    %rbp,%rdi
    3ecb:	b8 00 00 00 00       	mov    $0x0,%eax
    3ed0:	e8 eb e4 ff ff       	call   23c0 <__sprintf_chk@plt>
    3ed5:	89 df                	mov    %ebx,%edi
    3ed7:	e8 c4 e3 ff ff       	call   22a0 <close@plt>
    3edc:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
    3ee1:	e9 f7 fe ff ff       	jmp    3ddd <init_driver+0xe7>
    3ee6:	e8 95 e3 ff ff       	call   2280 <__stack_chk_fail@plt>

0000000000003eeb <driver_post>:
    3eeb:	f3 0f 1e fa          	endbr64 
    3eef:	53                   	push   %rbx
    3ef0:	4c 89 c3             	mov    %r8,%rbx
    3ef3:	85 c9                	test   %ecx,%ecx
    3ef5:	75 17                	jne    3f0e <driver_post+0x23>
    3ef7:	48 85 ff             	test   %rdi,%rdi
    3efa:	74 05                	je     3f01 <driver_post+0x16>
    3efc:	80 3f 00             	cmpb   $0x0,(%rdi)
    3eff:	75 33                	jne    3f34 <driver_post+0x49>
    3f01:	66 c7 03 4f 4b       	movw   $0x4b4f,(%rbx)
    3f06:	c6 43 02 00          	movb   $0x0,0x2(%rbx)
    3f0a:	89 c8                	mov    %ecx,%eax
    3f0c:	5b                   	pop    %rbx
    3f0d:	c3                   	ret    
    3f0e:	48 8d 35 a8 12 00 00 	lea    0x12a8(%rip),%rsi        # 51bd <array.0+0xfdd>
    3f15:	bf 01 00 00 00       	mov    $0x1,%edi
    3f1a:	b8 00 00 00 00       	mov    $0x0,%eax
    3f1f:	e8 1c e4 ff ff       	call   2340 <__printf_chk@plt>
    3f24:	66 c7 03 4f 4b       	movw   $0x4b4f,(%rbx)
    3f29:	c6 43 02 00          	movb   $0x0,0x2(%rbx)
    3f2d:	b8 00 00 00 00       	mov    $0x0,%eax
    3f32:	eb d8                	jmp    3f0c <driver_post+0x21>
    3f34:	41 50                	push   %r8
    3f36:	52                   	push   %rdx
    3f37:	4c 8d 0d 96 12 00 00 	lea    0x1296(%rip),%r9        # 51d4 <array.0+0xff4>
    3f3e:	49 89 f0             	mov    %rsi,%r8
    3f41:	48 89 f9             	mov    %rdi,%rcx
    3f44:	48 8d 15 8d 12 00 00 	lea    0x128d(%rip),%rdx        # 51d8 <array.0+0xff8>
    3f4b:	be 6e 3b 00 00       	mov    $0x3b6e,%esi
    3f50:	48 8d 3d 4d 12 00 00 	lea    0x124d(%rip),%rdi        # 51a4 <array.0+0xfc4>
    3f57:	e8 66 f5 ff ff       	call   34c2 <submitr>
    3f5c:	48 83 c4 10          	add    $0x10,%rsp
    3f60:	eb aa                	jmp    3f0c <driver_post+0x21>

Disassembly of section .fini:

0000000000003f64 <_fini>:
    3f64:	f3 0f 1e fa          	endbr64 
    3f68:	48 83 ec 08          	sub    $0x8,%rsp
    3f6c:	48 83 c4 08          	add    $0x8,%rsp
    3f70:	c3                   	ret    
