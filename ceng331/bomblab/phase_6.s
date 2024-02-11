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