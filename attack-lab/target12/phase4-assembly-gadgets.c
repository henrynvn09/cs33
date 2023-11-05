
000000000040185e <start_farm>:
  40185e:	b8 01 00 00 00       	mov    $0x1,%eax
  401863:	c3                   	retq   

0000000000401864 <addval_152>:
  401864:	8d 87 48 89 c7 90    	lea    -0xc78908fb(%rdi),%eax
                  mov rax rdi
                  # set rdi = rax
  40186a:	c3                   	retq   

000000000040186b <setval_396>:
  40186b:	c7 07 fb 08 89 c7    	movl   $0xc78908fb,(%rdi)
                        movl eax edi
  401871:	c3                   	retq   

0000000000401872 <addval_329>:
  401872:	8d 87 48 89 c7 94    	lea    -0x6b3876b8(%rdi),%eax

  401878:	c3                   	retq   

0000000000401879 <addval_304>:
  401879:	8d 87 58 90 90 90    	lea    -0x6f6f6fa8(%rdi),%eax
                  popq rax
                  # use this to get value inside stack to rax
  40187f:	c3                   	retq   

0000000000401880 <setval_409>:
  401880:	c7 07 9b d8 90 c3    	movl   $0xc390d89b,(%rdi)
    
  401886:	c3                   	retq   

0000000000401887 <addval_164>:
  401887:	8d 87 58 90 90 c3    	lea    -0x3c6f6fa8(%rdi),%eax
                  popq rax
                
  40188d:	c3                   	retq   

000000000040188e <setval_376>:
  40188e:	c7 07 c0 48 89 c7    	movl   $0xc78948c0,(%rdi)

  401894:	c3                   	retq   

0000000000401895 <setval_297>:
  401895:	c7 07 da 18 90 c3    	movl   $0xc39018da,(%rdi)
  40189b:	c3                   	retq   

000000000040189c <mid_farm>:
  40189c:	b8 01 00 00 00       	mov    $0x1,%eax
  4018a1:	c3                   	retq  