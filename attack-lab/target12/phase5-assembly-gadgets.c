
000000000040185e <start_farm>:
  40185e:	b8 01 00 00 00       	mov    $0x1,%eax
  401863:	c3                   	retq   

0000000000401879 <addval_304>:
  401879:	8d 87 58 90 90 90    	lea    -0x6f6f6fa8(%rdi),%eax
                popq rax
                  # use this to get value inside stack to rax
  40187f:	c3                   	retq   

000000000040188e <setval_376>:
  40188e:	c7 07 c0 48 89 c7    	movl   $0xc78948c0,(%rdi)
                      movl eax edi
                   movl rax rdi

  401894:	c3                   	retq   

00000000004018a2 <add_xy>:
  4018a2:	48 8d 04 37          	lea    (%rdi,%rsi,1),%rax
                        rax = rdx + rsi
  4018a6:	c3                   	retq   

00000000004018ae <setval_232>:
  4018ae:	c7 07 89 ca 38 db    	movl   $0xdb38ca89,(%rdi)
                      nop nop
                movl ecx edx
  4018b4:	c3                   	retq   

00000000004018c2 <setval_227>:
  4018c2:	c7 07 48 89 e0 c3    	movl   $0xc3e08948,(%rdi)
                   movl esp, eax
                movq rsp rax
  4018c8:	c3                   	retq   

00000000004018dd <getval_115>:
  4018dd:	b8 89 c1 90 90       	mov    $0x9090c189,%eax
             movl eax ecx
  4018e2:	c3                   	retq   

000000000040193f <getval_280>:
  40193f:	b8 36 89 d6 90       	mov    $0x90d68936,%eax
                movl edx esi
  401944:	c3                   	retq   
