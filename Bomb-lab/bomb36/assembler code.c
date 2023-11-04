// function name does not appear here!!

bomb:     file format elf64-x86-64


Disassembly of section .init:

0000000000400b38 <_init>:
  400b38:	48 83 ec 08          	sub    $0x8,%rsp
  400b3c:	48 8b 05 b5 34 20 00 	mov    0x2034b5(%rip),%rax        # 603ff8 <__gmon_start__>
  400b43:	48 85 c0             	test   %rax,%rax
  400b46:	74 05                	je     400b4d <_init+0x15>
  400b48:	e8 23 01 00 00       	callq  400c70 <__gmon_start__@plt>
  400b4d:	48 83 c4 08          	add    $0x8,%rsp
  400b51:	c3                   	retq   

Disassembly of section .text:

0000000000400d40 <_start>:
  400d40:	31 ed                	xor    %ebp,%ebp
  400d42:	49 89 d1             	mov    %rdx,%r9
  400d45:	5e                   	pop    %rsi
  400d46:	48 89 e2             	mov    %rsp,%rdx
  400d49:	48 83 e4 f0          	and    $0xfffffffffffffff0,%rsp
  400d4d:	50                   	push   %rax
  400d4e:	54                   	push   %rsp
  400d4f:	49 c7 c0 c0 25 40 00 	mov    $0x4025c0,%r8
  400d56:	48 c7 c1 50 25 40 00 	mov    $0x402550,%rcx
  400d5d:	48 c7 c7 12 0e 40 00 	mov    $0x400e12,%rdi
  400d64:	e8 b7 fe ff ff       	callq  400c20 <__libc_start_main@plt>
  400d69:	f4                   	hlt    
  400d6a:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)

0000000000400d70 <deregister_tm_clones>:
  400d70:	b8 80 47 60 00       	mov    $0x604780,%eax
  400d75:	48 3d 80 47 60 00    	cmp    $0x604780,%rax
  400d7b:	74 13                	je     400d90 <deregister_tm_clones+0x20>
  400d7d:	b8 00 00 00 00       	mov    $0x0,%eax
  400d82:	48 85 c0             	test   %rax,%rax
  400d85:	74 09                	je     400d90 <deregister_tm_clones+0x20>
  400d87:	bf 80 47 60 00       	mov    $0x604780,%edi
  400d8c:	ff e0                	jmpq   *%rax
  400d8e:	66 90                	xchg   %ax,%ax
  400d90:	c3                   	retq   
  400d91:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)
  400d96:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
  400d9d:	00 00 00 

0000000000400da0 <register_tm_clones>:
  400da0:	be 80 47 60 00       	mov    $0x604780,%esi
  400da5:	48 81 ee 80 47 60 00 	sub    $0x604780,%rsi
  400dac:	48 89 f0             	mov    %rsi,%rax
  400daf:	48 c1 ee 3f          	shr    $0x3f,%rsi
  400db3:	48 c1 f8 03          	sar    $0x3,%rax
  400db7:	48 01 c6             	add    %rax,%rsi
  400dba:	48 d1 fe             	sar    %rsi
  400dbd:	74 11                	je     400dd0 <register_tm_clones+0x30>
  400dbf:	b8 00 00 00 00       	mov    $0x0,%eax
  400dc4:	48 85 c0             	test   %rax,%rax
  400dc7:	74 07                	je     400dd0 <register_tm_clones+0x30>
  400dc9:	bf 80 47 60 00       	mov    $0x604780,%edi
  400dce:	ff e0                	jmpq   *%rax
  400dd0:	c3                   	retq   
  400dd1:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)
  400dd6:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
  400ddd:	00 00 00 


0000000000400e10 <frame_dummy>:
  400e10:	eb 8e                	jmp    400da0 <register_tm_clones>

0000000000400e12 <main>:
  400e12:	55                   	push   %rbp
  400e13:	53                   	push   %rbx
  400e14:	48 83 ec 08          	sub    $0x8,%rsp
  400e18:	89 fb                	mov    %edi,%ebx
  400e1a:	83 ff 01             	cmp    $0x1,%edi
  400e1d:	0f 84 e5 00 00 00    	je     400f08 <main+0xf6>
  400e23:	48 89 f5             	mov    %rsi,%rbp
  400e26:	83 ff 02             	cmp    $0x2,%edi
  400e29:	0f 85 08 01 00 00    	jne    400f37 <main+0x125>
  400e2f:	48 8b 7e 08          	mov    0x8(%rsi),%rdi
  400e33:	be e4 25 40 00       	mov    $0x4025e4,%esi
  400e38:	e8 83 fe ff ff       	callq  400cc0 <fopen@plt>
  400e3d:	48 89 05 5c 39 20 00 	mov    %rax,0x20395c(%rip)        # 6047a0 <infile>
  400e44:	48 85 c0             	test   %rax,%rax
  400e47:	0f 84 ce 00 00 00    	je     400f1b <main+0x109>
  400e4d:	e8 93 05 00 00       	callq  4013e5 <initialize_bomb>
  400e52:	89 df                	mov    %ebx,%edi
  400e54:	b8 00 00 00 00       	mov    $0x0,%eax
  400e59:	e8 3c 06 00 00       	callq  40149a <welcome_message>
  400e5e:	e8 ef 0a 00 00       	callq  401952 <read_line>
  400e63:	48 89 c7             	mov    %rax,%rdi
  400e66:	e8 e8 00 00 00       	callq  400f53 <phase_1>
  400e6b:	e8 e3 07 00 00       	callq  401653 <phase_defused>
  400e70:	bf 20 26 40 00       	mov    $0x402620,%edi
  400e75:	e8 36 fd ff ff       	callq  400bb0 <puts@plt>
  400e7a:	e8 d3 0a 00 00       	callq  401952 <read_line>
  400e7f:	48 89 c7             	mov    %rax,%rdi
  400e82:	e8 eb 00 00 00       	callq  400f72 <phase_2>
  400e87:	e8 c7 07 00 00       	callq  401653 <phase_defused>
  400e8c:	bf 60 26 40 00       	mov    $0x402660,%edi
  400e91:	e8 1a fd ff ff       	callq  400bb0 <puts@plt>
  400e96:	e8 b7 0a 00 00       	callq  401952 <read_line>
  400e9b:	48 89 c7             	mov    %rax,%rdi
  400e9e:	e8 73 01 00 00       	callq  401016 <phase_3>
  400ea3:	e8 ab 07 00 00       	callq  401653 <phase_defused>
  400ea8:	bf 88 26 40 00       	mov    $0x402688,%edi
  400ead:	e8 fe fc ff ff       	callq  400bb0 <puts@plt>
  400eb2:	e8 9b 0a 00 00       	callq  401952 <read_line>
  400eb7:	48 89 c7             	mov    %rax,%rdi
  400eba:	e8 ff 01 00 00       	callq  4010be <phase_4>
  400ebf:	e8 8f 07 00 00       	callq  401653 <phase_defused>
  400ec4:	bf b0 26 40 00       	mov    $0x4026b0,%edi
  400ec9:	e8 e2 fc ff ff       	callq  400bb0 <puts@plt>
  400ece:	e8 7f 0a 00 00       	callq  401952 <read_line>
  400ed3:	48 89 c7             	mov    %rax,%rdi
  400ed6:	e8 3a 02 00 00       	callq  401115 <phase_5>
  400edb:	e8 73 07 00 00       	callq  401653 <phase_defused>
  400ee0:	bf e8 26 40 00       	mov    $0x4026e8,%edi
  400ee5:	e8 c6 fc ff ff       	callq  400bb0 <puts@plt>
  400eea:	e8 63 0a 00 00       	callq  401952 <read_line>
  400eef:	48 89 c7             	mov    %rax,%rdi
  400ef2:	e8 63 02 00 00       	callq  40115a <phase_6>
  400ef7:	e8 57 07 00 00       	callq  401653 <phase_defused>
  400efc:	b8 00 00 00 00       	mov    $0x0,%eax
  400f01:	48 83 c4 08          	add    $0x8,%rsp
  400f05:	5b                   	pop    %rbx
  400f06:	5d                   	pop    %rbp
  400f07:	c3                   	retq   
  400f08:	48 8b 05 79 38 20 00 	mov    0x203879(%rip),%rax        # 604788 <stdin@@GLIBC_2.2.5>
  400f0f:	48 89 05 8a 38 20 00 	mov    %rax,0x20388a(%rip)        # 6047a0 <infile>
  400f16:	e9 32 ff ff ff       	jmpq   400e4d <main+0x3b>
  400f1b:	48 8b 55 08          	mov    0x8(%rbp),%rdx
  400f1f:	48 8b 75 00          	mov    0x0(%rbp),%rsi
  400f23:	bf e6 25 40 00       	mov    $0x4025e6,%edi
  400f28:	e8 b3 fc ff ff       	callq  400be0 <printf@plt>
  400f2d:	bf 08 00 00 00       	mov    $0x8,%edi
  400f32:	e8 b9 fd ff ff       	callq  400cf0 <exit@plt>
  400f37:	48 8b 36             	mov    (%rsi),%rsi
  400f3a:	bf 03 26 40 00       	mov    $0x402603,%edi
  400f3f:	b8 00 00 00 00       	mov    $0x0,%eax
  400f44:	e8 97 fc ff ff       	callq  400be0 <printf@plt>
  400f49:	bf 08 00 00 00       	mov    $0x8,%edi
  400f4e:	e8 9d fd ff ff       	callq  400cf0 <exit@plt>

0000000000400f53 <phase_1>:
  400f53:	53                   	push   %rbx // save current value of rbx 
  400f54:	48 89 fb             	mov    %rdi,%rbx // rbx = input
  400f57:	80 7f 01 00          	cmpb   $0x0,0x1(%rdi) //compare 2nd(1) byte of inp with 0
  400f5b:	75 07                	jne    400f64 <phase_1+0x11>//if it's not equal 0, explode
  400f5d:	80 3b 77             	cmpb   $0x77,(%rbx) // compare 1st byte of inp with 0x77
  400f60:	75 09                	jne    400f6b <phase_1+0x18>// if it's equal to 0, explode
  400f62:	5b                   	pop    %rbx//useless
  400f63:	c3                   	retq   
  400f64:	e8 25 07 00 00       	callq  40168e <explode_bomb>
  400f69:	eb f2                	jmp    400f5d <phase_1+0xa>
  400f6b:	e8 1e 07 00 00       	callq  40168e <explode_bomb>
  400f70:	eb f0                	jmp    400f62 <phase_1+0xf>

0000000000400f72 <phase_2>:
  400f72:	41 54                	push   %r12
  400f74:	55                   	push   %rbp
  400f75:	53                   	push   %rbx
  400f76:	48 83 ec 20          	sub    $0x20,%rsp //rsp point to first on the stack before
  400f7a:	48 89 e6             	mov    %rsp,%rsi // rsi = rsp
  400f7d:	e8 91 09 00 00       	callq  401913 <read_six_numbers>
  400f82:	8b 04 24             	mov    (%rsp),%eax
  400f85:	0b 44 24 04          	or     0x4(%rsp),%eax // 0x05 or (1st arg) != 0 -> 101 has one of these bit
  400f89:	74 0a                	je     400f95 <phase_2+0x23>// if previous comparison = 0, it expl
  400f8b:	48 89 e3             	mov    %rsp,%rbx // rbx is set to 1st arg
  400f8e:	4c 8d 64 24 10       	lea    0x10(%rsp),%r12 //r12 = x5
  400f93:	eb 19                	jmp    400fae <phase_2+0x3c>
  400f95:	e8 f4 06 00 00       	callq  40168e <explode_bomb>
  400f9a:	eb ef                	jmp    400f8b <phase_2+0x19>
  400f9c:	8b 45 08             	mov    0x8(%rbp),%eax // rbp=x1; eax= x3
  400f9f:	89 05 6b 38 20 00    	mov    %eax,0x20386b(%rip)        # 604810 <trap>
  400fa5:	48 83 c3 04          	add    $0x4,%rbx // [rbx+1] (x1 -> x2)
  400fa9:	4c 39 e3             	cmp    %r12,%rbx // x5 == (x2)[rbx+1]// until rbx point to x5
  400fac:	74 14                	je     400fc2 <phase_2+0x50> // j if rbx = r12
  400fae:	48 89 dd             	mov    %rbx,%rbp // rbp = x1
  400fb1:	8b 43 04             	mov    0x4(%rbx),%eax // eax = x2
  400fb4:	03 03                	add    (%rbx),%eax // eax = x1+x2
  400fb6:	39 43 08             	cmp    %eax,0x8(%rbx) // x1+x2 == x3?
  400fb9:	74 e1                	je     400f9c <phase_2+0x2a>
  400fbb:	e8 ce 06 00 00       	callq  40168e <explode_bomb>
  400fc0:	eb da                	jmp    400f9c <phase_2+0x2a>
  400fc2:	48 83 c4 20          	add    $0x20,%rsp
  400fc6:	5b                   	pop    %rbx
  400fc7:	5d                   	pop    %rbp
  400fc8:	41 5c                	pop    %r12
  400fca:	c3                   	retq   

0000000000400fcb <func_switch>:
  400fcb:	83 ff 07             	cmp    $0x7,%edi
  400fce:	77 2d                	ja     400ffd <func_switch+0x32>
  400fd0:	89 ff                	mov    %edi,%edi
  400fd2:	ff 24 fd 20 27 40 00 	jmpq   *0x402720(,%rdi,8) // x1*8+... switch case!!
  400fd9:	b8 4a 01 00 00       	mov    $0x14a,%eax
  400fde:	c3                   	retq   
  400fdf:	b8 83 01 00 00       	mov    $0x183,%eax
  400fe4:	c3                   	retq   
  400fe5:	b8 a0 00 00 00       	mov    $0xa0,%eax
  400fea:	c3                   	retq   
  400feb:	b8 8c 03 00 00       	mov    $0x38c,%eax // x1 == 5, return 38c
  400ff0:	c3                   	retq   
  400ff1:	b8 7b 02 00 00       	mov    $0x27b,%eax
  400ff6:	c3                   	retq   
  400ff7:	b8 e9 01 00 00       	mov    $0x1e9,%eax
  400ffc:	c3                   	retq   
  400ffd:	48 83 ec 08          	sub    $0x8,%rsp
  401001:	e8 88 06 00 00       	callq  40168e <explode_bomb>
  401006:	b8 00 00 00 00       	mov    $0x0,%eax
  40100b:	48 83 c4 08          	add    $0x8,%rsp
  40100f:	c3                   	retq   
  401010:	b8 e6 02 00 00       	mov    $0x2e6,%eax
  401015:	c3                   	retq   

0000000000401016 <phase_3>:
  401016:	53                   	push   %rbx
  401017:	48 83 ec 10          	sub    $0x10,%rsp
  40101b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%rsp)
  401022:	00 
  401023:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%rsp)
  40102a:	00 
  40102b:	48 8d 4c 24 08       	lea    0x8(%rsp),%rcx
  401030:	48 8d 54 24 0c       	lea    0xc(%rsp),%rdx
  401035:	be 71 2e 40 00       	mov    $0x402e71,%esi // input pattern is store in this address
  40103a:	b8 00 00 00 00       	mov    $0x0,%eax
  40103f:	e8 5c fc ff ff       	callq  400ca0 <__isoc99_sscanf@plt>
  401044:	83 f8 01             	cmp    $0x1,%eax
  401047:	7e 0a                	jle    401053 <phase_3+0x3d> // from here to above are useless! read 2 int
  401049:	8b 44 24 08          	mov    0x8(%rsp),%eax // eax = x2
  40104d:	39 44 24 0c          	cmp    %eax,0xc(%rsp) // 
  401051:	75 05                	jne    401058 <phase_3+0x42> // x1 != x2
  401053:	e8 36 06 00 00       	callq  40168e <explode_bomb>
  401058:	8b 7c 24 0c          	mov    0xc(%rsp),%edi // edi = x1
  40105c:	e8 6a ff ff ff       	callq  400fcb <func_switch> // edi must <= 7
  401061:	89 c3                	mov    %eax,%ebx// ebx = 5
  401063:	8b 7c 24 08          	mov    0x8(%rsp),%edi
  401067:	e8 5f ff ff ff       	callq  400fcb <func_switch>
  40106c:	39 c3                	cmp    %eax,%ebx // 
  40106e:	75 06                	jne    401076 <phase_3+0x60>
  401070:	48 83 c4 10          	add    $0x10,%rsp
  401074:	5b                   	pop    %rbx
  401075:	c3                   	retq   
  401076:	e8 13 06 00 00       	callq  40168e <explode_bomb>
  40107b:	eb f3                	jmp    401070 <phase_3+0x5a>

000000000040107d <func4>:// edi = x1, esi=0, edx=e
  40107d:	48 83 ec 08          	sub    $0x8,%rsp
  401081:	89 f0                	mov    %esi,%eax // eax = arg2
  401083:	89 d1                	mov    %edx,%ecx
  401085:	29 f1                	sub    %esi,%ecx // ecx = arg3 - arg2
  401087:	89 ce                	mov    %ecx,%esi // esi = arg3 - arg2
  401089:	c1 ee 1f             	shr    $0x1f,%esi // esi = signbit of esi
  40108c:	01 ce                	add    %ecx,%esi // esi = ecx + ecx signbit
  40108e:	d1 fe                	sar    %esi      // esi = esi >> 0
  401090:	01 c6                	add    %eax,%esi // esi = arg2 + (ecx + ecx signbit) >> 0
  401092:	39 fe                	cmp    %edi,%esi 
  401094:	7f 0c                	jg     4010a2 <func4+0x25> // esi > edi? jump| esi 7
  401096:	b8 00 00 00 00       	mov    $0x0,%eax
  40109b:	7c 13                	jl     4010b0 <func4+0x33>
  40109d:	48 83 c4 08          	add   $0x8,%rsp
  4010a1:	c3                   	retq   
  4010a2:	8d 56 ff             	lea    -0x1(%rsi),%edx // edx = rsi - 1
  4010a5:	89 c6                	mov    %eax,%esi //esi = arg2
  4010a7:	e8 d1 ff ff ff       	callq  40107d <func4>
  4010ac:	01 c0                	add    %eax,%eax
  4010ae:	eb ed                	jmp    40109d <func4+0x20>
  -----
  4010b0:	83 c6 01             	add    $0x1,%esi
  4010b3:	e8 c5 ff ff ff       	callq  40107d <func4>
  4010b8:	8d 44 00 01          	lea    0x1(%rax,%rax,1),%eax //rax + rax + 1 ( need rax=3), need rax = 1
  4010bc:	eb df                	jmp    40109d <func4+0x20>

00000000004010be <phase_4>:
  4010be:	48 83 ec 18          	sub    $0x18,%rsp
  4010c2:	48 8d 4c 24 08       	lea    0x8(%rsp),%rcx
  4010c7:	48 8d 54 24 0c       	lea    0xc(%rsp),%rdx
  4010cc:	be 71 2e 40 00       	mov    $0x402e71,%esi // break here to find string!
  4010d1:	b8 00 00 00 00       	mov    $0x0,%eax
  4010d6:	e8 c5 fb ff ff       	callq  400ca0 <__isoc99_sscanf@plt>
  4010db:	83 f8 02             	cmp    $0x2,%eax
  4010de:	75 07                	jne    4010e7 <phase_4+0x29> // ABOVE here just for read 2 int
  4010e0:	83 7c 24 0c 0e       	cmpl   $0xe,0xc(%rsp)
  4010e5:	76 05                	jbe    4010ec <phase_4+0x2e> // x1 must <= 0xe or 14
  4010e7:	e8 a2 05 00 00       	callq  40168e <explode_bomb>
  4010ec:	ba 0e 00 00 00       	mov    $0xe,%edx // edx = e
  4010f1:	be 00 00 00 00       	mov    $0x0,%esi // esi = 0
  4010f6:	8b 7c 24 0c          	mov    0xc(%rsp),%edi // edi = x1
  4010fa:	e8 7e ff ff ff       	callq  40107d <func4>
  4010ff:	83 f8 07             	cmp    $0x7,%eax // res must = 7
  401102:	75 07                	jne    40110b <phase_4+0x4d>
  401104:	83 7c 24 08 07       	cmpl   $0x7,0x8(%rsp) // 7 == x2 ! NOT SURE
  401109:	74 05                	je     401110 <phase_4+0x52>
  40110b:	e8 7e 05 00 00       	callq  40168e <explode_bomb>
  401110:	48 83 c4 18          	add    $0x18,%rsp
  401114:	c3                   	retq   
// in func, I knew that x1 must be > 7 since it help go to the other branch, too much headache so 7<x<14, BF hehe

0000000000401115 <phase_5>:
  401115:	53                   	push   %rbx
  401116:	48 89 fb             	mov    %rdi,%rbx
  401119:	e8 52 02 00 00       	callq  401370 <string_length>
  40111e:	83 f8 06             	cmp    $0x6,%eax // must be 6 characters!!
  401121:	75 29                	jne    40114c <phase_5+0x37>
  401123:	48 89 d8             	mov    %rbx,%rax // rax = s
  401126:	48 8d 7b 06          	lea    0x6(%rbx),%rdi // rdi = [rbx+6]
  40112a:	b9 00 00 00 00       	mov    $0x0,%ecx
  40112f:	0f b6 10             	movzbl (%rax),%edx // i= edx = s[1,2]
  401132:	83 e2 0f             	and    $0xf,%edx //  i & f (take lower bit!)
  401135:	03 0c 95 60 27 40 00 	add    0x402760(,%rdx,4),%ecx  // --- ecx += something relate to s[i]
  40113c:	48 83 c0 01          	add    $0x1,%rax // rax[i++]
  401140:	48 39 f8             	cmp    %rdi,%rax //   must = rdi which is empty
  401143:	75 ea                	jne    40112f <phase_5+0x1a> // loop through until rax iterate through string
  401145:	83 f9 3f             	cmp    $0x3f,%ecx // ecx must = 3f = sum all at the table such that s[]
  401148:	75 09                	jne    401153 <phase_5+0x3e>
  40114a:	5b                   	pop    %rbx
  40114b:	c3                   	retq   
  40114c:	e8 3d 05 00 00       	callq  40168e <explode_bomb>
  401151:	eb d0                	jmp    401123 <phase_5+0xe>
  401153:	e8 36 05 00 00       	callq  40168e <explode_bomb>
  401158:	eb f0                	jmp    40114a <phase_5+0x35>

000000000040115a <phase_6>:
  40115a:	41 55                	push   %r13
  40115c:	41 54                	push   %r12
  40115e:	55                   	push   %rbp
  40115f:	53                   	push   %rbx
  401160:	48 83 ec 58          	sub    $0x58,%rsp
  401164:	48 8d 74 24 30       	lea    0x30(%rsp),%rsi
  401169:	e8 a5 07 00 00       	callq  401913 <read_six_numbers>
  40116e:	4c 8d 64 24 30       	lea    0x30(%rsp),%r12 // r12 = x1
  401173:	41 bd 01 00 00 00    	mov    $0x1,%r13d    // r13 = 1 -> i
  401179:	eb 28                	jmp    4011a3 <phase_6+0x49>
  40117b:	e8 0e 05 00 00       	callq  40168e <explode_bomb>
  401180:	eb 30                	jmp    4011b2 <phase_6+0x58>

  401182:	48 83 c3 01          	add    $0x1,%rbx // rbx += 1
  401186:	83 fb 05             	cmp    $0x5,%ebx 
  401189:	7f 10                	jg     40119b <phase_6+0x41> // j if rbx > 5
  40118b:	8b 44 9c 30          	mov    0x30(%rsp,%rbx,4),%eax // eax = s[rbx] [6,7,8]
  40118f:	39 45 00             	cmp    %eax,0x0(%rbp) // rbp -> [1st]
  401192:	75 ee            *   	jne    401182 <phase_6+0x28> //!!! xi  must != xj
  //---- loop above till rbx > 5 ; eax = 6,7,8,9,10, 11
  401194:	e8 f5 04 00 00       	callq  40168e <explode_bomb> // IOW, all x unique

  401199:	eb e7                	jmp    401182 <phase_6+0x28>

  40119b:	49 83 c5 01          	add    $0x1,%r13 // r13 += 1; i++
  40119f:	49 83 c4 04          	add    $0x4,%r12 // r12 = [x2]
  4011a3:	4c 89 e5             	mov    %r12,%rbp // rbp = [x2]
  4011a6:	41 8b 04 24          	mov    (%r12),%eax // eax = x2,x3
  4011aa:	83 e8 01             	sub    $0x1,%eax // eax = x2 - 1; x3-1
  4011ad:	83 f8 05             	cmp    $0x5,%eax // eax -1 >5?
  4011b0:	77 c9            *   	ja     40117b <phase_6+0x21> // 1 <= eax <= 5
  
  4011b2:	41 83 fd 05          	cmp    $0x5,%r13d
  4011b6:	7f 05                	jg     4011bd <phase_6+0x63> // i loops 1 -> 5
  4011b8:	4c 89 eb             	mov    %r13,%rbx // rbx = r13 = i
  4011bb:	eb ce                	jmp    40118b <phase_6+0x31>
  // x1 = 6!
  4011bd:	be 00 00 00 00       	mov    $0x0,%esi // esi = 0 -> 5

  4011c2:	8b 4c b4 30          	mov    0x30(%rsp,%rsi,4),%ecx // ecx=x1
  4011c6:	b8 01 00 00 00       	mov    $0x1,%eax // eax = 1 = i
  4011cb:	ba f0 42 60 00       	mov    $0x6042f0,%edx //edx = node_1
  4011d0:	83 f9 01             	cmp    $0x1,%ecx
  4011d3:	7e 0b                	jle    4011e0 <phase_6+0x86> // x1 <= 1 -> jump

  4011d5:	48 8b 52 08          	mov    0x8(%rdx),%rdx // rdx = jump to next node
  4011d9:	83 c0 01             	add    $0x1,%eax //eax +1 or i+1
  4011dc:	39 c8                	cmp    %ecx,%eax // x1 == i?
  4011de:	75 f5                	jne    4011d5 <phase_6+0x7b> // i 
 // i = 1 -> number such that i = x1 = 6, rsi = 0, 
  4011e0:	48 89 14 f4          	mov    %rdx,(%rsp,%rsi,8)

  4011e4:	48 83 c6 01          	add    $0x1,%rsi
  4011e8:	48 83 fe 06          	cmp    $0x6,%rsi
  4011ec:	75 d4                	jne    4011c2 <phase_6+0x68> //loop until rsi=6
  // last: assign the node address of matching input into rsp

  4011ee:	48 8b 1c 24          	mov    (%rsp),%rbx
  4011f2:	48 8b 44 24 08       	mov    0x8(%rsp),%rax // rax= s[1]
  4011f7:	48 89 43 08          	mov    %rax,0x8(%rbx) // 
  4011fb:	48 8b 54 24 10       	mov    0x10(%rsp),%rdx
  401200:	48 89 50 08          	mov    %rdx,0x8(%rax)
  401204:	48 8b 44 24 18       	mov    0x18(%rsp),%rax
  401209:	48 89 42 08          	mov    %rax,0x8(%rdx)
  40120d:	48 8b 54 24 20       	mov    0x20(%rsp),%rdx
  401212:	48 89 50 08          	mov    %rdx,0x8(%rax)
  401216:	48 8b 44 24 28       	mov    0x28(%rsp),%rax
  40121b:	48 89 42 08          	mov    %rax,0x8(%rdx)
  40121f:	48 c7 40 08 00 00 00 	movq   $0x0,0x8(%rax)
  401226:	00 
  // above code short the list follow the order in rsp!
  // only node.next match new order!

  401227:	bd 05 00 00 00       	mov    $0x5,%ebp
  40122c:	eb 09                	jmp    401237 <phase_6+0xdd>

  40122e:	48 8b 5b 08          	mov    0x8(%rbx),%rbx // rbx += 8
  401232:	83 ed 01             	sub    $0x1,%ebp
  
  401235:	74 11                	je     401248 <phase_6+0xee> 

  401237:	48 8b 43 08          	mov    0x8(%rbx),%rax
  40123b:	8b 00                	mov    (%rax),%eax //rax = rbx.next.val

  40123d:	39 03                	cmp    %eax,(%rbx) // rbx >= rbx.next
  40123f:	7d ed                	jge    40122e <phase_6+0xd4> // [rbx] >= eax MUST, only 2 value > node6, which is 1 and 2

  401241:	e8 48 04 00 00       	callq  40168e <explode_bomb>
  401246:	eb e6                	jmp    40122e <phase_6+0xd4>

  401248:	83 3d c1 35 20 00 21 	cmpl   $0x21,0x2035c1(%rip)        # 604810 <trap>
  40124f:	74 0b                	je     40125c <phase_6+0x102> // prev must != 0x21, turns out it's secret phase entrance
  401251:	48 83 c4 58          	add    $0x58,%rsp
  401255:	5b                   	pop    %rbx
  401256:	5d                   	pop    %rbp
  401257:	41 5c                	pop    %r12
  401259:	41 5d                	pop    %r13
  40125b:	c3                   	retq   
  40125c:	e8 2d 04 00 00       	callq  40168e <explode_bomb>
  401261:	eb ee                	jmp    401251 <phase_6+0xf7>

0000000000401263 <fun7>: // rdi = 0x604110, rsi = inp
  401263:	48 85 ff             	test   %rdi,%rdi // rdi == 0?
  401266:	74 32                	je     40129a <fun7+0x37> // run it such that rdi != 0 

  40126c:	8b 17                	mov    (%rdi),%edx // edi = 24, 
  40126e:	39 f2                	cmp    %esi,%edx   // edx ?? inp
  401270:	7f 0c                	jg     40127e <fun7+0x1b> // jump if val > inp
  401272:	b8 00 00 00 00       	mov    $0x0,%eax
  401277:	75 12                	jne    40128b <fun7+0x28>

  40127d:	c3                   	retq   // the retq WE WANT

  // (rdi) > esi? (value) > inp (arg2)? ;;;;  if inp > val -> left ptr
  40127e:	48 8b 7f 08          	mov    0x8(%rdi),%rdi // rdi = rdi + 8 (left ptr)
  401282:	e8 dc ff ff ff       	callq  401263 <fun7> // travel to left ptr
  401287:	01 c0                	add    %eax,%eax
  401289:	eb ee                	jmp    401279 <fun7+0x16>

  //rdi != 0  \\\ if inp != val
  40128b:	48 8b 7f 10          	mov    0x10(%rdi),%rdi // rdi = rdi+16 (right ptr)
  40128f:	e8 cf ff ff ff       	callq  401263 <fun7> // go to right ptr

  401294:	8d 44 00 01          	lea    0x1(%rax,%rax,1),%eax
  401298:	eb df                	jmp    401279 <fun7+0x16>

  // failed eax = -1
  40129a:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  40129f:	c3                   	retq   
  // a binary tree

00000000004012a0 <s3cret_phase>:
  4012a0:	53                   	push   %rbx
  4012a1:	e8 ac 06 00 00       	callq  401952 <read_line>
  4012a6:	48 89 c7             	mov    %rax,%rdi // rdi = input
  4012a9:	ba 0a 00 00 00       	mov    $0xa,%edx // edx = 10
  4012ae:	be 00 00 00 00       	mov    $0x0,%esi
  4012b3:	e8 c8 f9 ff ff     * 	callq  400c80 <strtol@plt>
  4012b8:	48 89 c3             	mov    %rax,%rbx // rbx = inp as long
  4012bb:	8d 40 ff             	lea    -0x1(%rax),%eax // rax = inp -1
  4012be:	3d e8 03 00 00       	cmp    $0x3e8,%eax // rax== inp -1 == 3e8?
  4012c3:	77 2c                	ja     4012f1 <s3cret_phase+0x51> // inp < 3e9 = 1001
  4012c5:	89 de                	mov    %ebx,%esi // esi = inp
  4012c7:	bf 10 41 60 00       	mov    $0x604110,%edi // edi = 0x604110
  4012cc:	e8 92 ff ff ff       	callq  401263 <fun7>
  4012d1:	83 f8 03             	cmp    $0x3,%eax // after fun7, it must ret 3
  4012d4:	75 22                	jne    4012f8 <s3cret_phase+0x58>
  4012d6:	bf a0 27 40 00       	mov    $0x4027a0,%edi
  4012db:	e8 d0 f8 ff ff       	callq  400bb0 <puts@plt>
  4012e0:	bf c8 27 40 00       	mov    $0x4027c8,%edi
  4012e5:	e8 c6 f8 ff ff       	callq  400bb0 <puts@plt>
  4012ea:	e8 64 03 00 00       	callq  401653 <phase_defused>
  4012ef:	5b                   	pop    %rbx
  4012f0:	c3                   	retq   
  4012f1:	e8 98 03 00 00       	callq  40168e <explode_bomb>
  4012f6:	eb cd                	jmp    4012c5 <s3cret_phase+0x25>
  4012f8:	e8 91 03 00 00       	callq  40168e <explode_bomb>
  4012fd:	eb d7                	jmp    4012d6 <s3cret_phase+0x36>

00000000004012ff <sig_handler>:
  4012ff:	48 83 ec 08          	sub    $0x8,%rsp
  401303:	bf f0 27 40 00       	mov    $0x4027f0,%edi
  401308:	e8 a3 f8 ff ff       	callq  400bb0 <puts@plt>
  40130d:	bf 03 00 00 00       	mov    $0x3,%edi
  401312:	e8 f9 f9 ff ff       	callq  400d10 <sleep@plt>
  401317:	bf 93 2d 40 00       	mov    $0x402d93,%edi
  40131c:	b8 00 00 00 00       	mov    $0x0,%eax
  401321:	e8 ba f8 ff ff       	callq  400be0 <printf@plt>
  401326:	48 8b 3d 53 34 20 00 	mov    0x203453(%rip),%rdi        # 604780 <stdout@@GLIBC_2.2.5>
  40132d:	e8 5e f9 ff ff       	callq  400c90 <fflush@plt>
  401332:	bf 01 00 00 00       	mov    $0x1,%edi
  401337:	e8 d4 f9 ff ff       	callq  400d10 <sleep@plt>
  40133c:	bf 9b 2d 40 00       	mov    $0x402d9b,%edi
  401341:	e8 6a f8 ff ff       	callq  400bb0 <puts@plt>
  401346:	bf 10 00 00 00       	mov    $0x10,%edi
  40134b:	e8 a0 f9 ff ff       	callq  400cf0 <exit@plt>

0000000000401350 <invalid_phase>:
  401350:	48 83 ec 08          	sub    $0x8,%rsp
  401354:	48 89 fe             	mov    %rdi,%rsi
  401357:	bf a3 2d 40 00       	mov    $0x402da3,%edi
  40135c:	b8 00 00 00 00       	mov    $0x0,%eax
  401361:	e8 7a f8 ff ff       	callq  400be0 <printf@plt>
  401366:	bf 08 00 00 00       	mov    $0x8,%edi
  40136b:	e8 80 f9 ff ff       	callq  400cf0 <exit@plt>

0000000000401370 <string_length>:
  401370:	b8 00 00 00 00       	mov    $0x0,%eax
  401375:	80 3f 00             	cmpb   $0x0,(%rdi)
  401378:	74 0e                	je     401388 <string_length+0x18>
  40137a:	48 83 c7 01          	add    $0x1,%rdi
  40137e:	83 c0 01             	add    $0x1,%eax
  401381:	3d 10 27 00 00       	cmp    $0x2710,%eax
  401386:	75 ed                	jne    401375 <string_length+0x5>
  401388:	c3                   	retq   

0000000000401389 <strings_not_equal>:
  401389:	41 54                	push   %r12
  40138b:	55                   	push   %rbp
  40138c:	53                   	push   %rbx
  40138d:	48 89 fb             	mov    %rdi,%rbx
  401390:	48 89 f5             	mov    %rsi,%rbp
  401393:	e8 d8 ff ff ff       	callq  401370 <string_length>
  401398:	41 89 c4             	mov    %eax,%r12d
  40139b:	48 89 ef             	mov    %rbp,%rdi
  40139e:	e8 cd ff ff ff       	callq  401370 <string_length>
  4013a3:	89 c2                	mov    %eax,%edx
  4013a5:	b8 01 00 00 00       	mov    $0x1,%eax
  4013aa:	41 39 d4             	cmp    %edx,%r12d
  4013ad:	75 31                	jne    4013e0 <strings_not_equal+0x57>
  4013af:	0f b6 13             	movzbl (%rbx),%edx
  4013b2:	84 d2                	test   %dl,%dl
  4013b4:	74 1e                	je     4013d4 <strings_not_equal+0x4b>
  4013b6:	b8 00 00 00 00       	mov    $0x0,%eax
  4013bb:	38 54 05 00          	cmp    %dl,0x0(%rbp,%rax,1)
  4013bf:	75 1a                	jne    4013db <strings_not_equal+0x52>
  4013c1:	48 83 c0 01          	add    $0x1,%rax
  4013c5:	0f b6 14 03          	movzbl (%rbx,%rax,1),%edx
  4013c9:	84 d2                	test   %dl,%dl
  4013cb:	75 ee                	jne    4013bb <strings_not_equal+0x32>
  4013cd:	b8 00 00 00 00       	mov    $0x0,%eax
  4013d2:	eb 0c                	jmp    4013e0 <strings_not_equal+0x57>
  4013d4:	b8 00 00 00 00       	mov    $0x0,%eax
  4013d9:	eb 05                	jmp    4013e0 <strings_not_equal+0x57>
  4013db:	b8 01 00 00 00       	mov    $0x1,%eax
  4013e0:	5b                   	pop    %rbx
  4013e1:	5d                   	pop    %rbp
  4013e2:	41 5c                	pop    %r12
  4013e4:	c3                   	retq   

00000000004013e5 <initialize_bomb>:
  4013e5:	53                   	push   %rbx
  4013e6:	48 81 ec 40 20 00 00 	sub    $0x2040,%rsp
  4013ed:	be ff 12 40 00       	mov    $0x4012ff,%esi
  4013f2:	bf 02 00 00 00       	mov    $0x2,%edi
  4013f7:	e8 44 f8 ff ff       	callq  400c40 <signal@plt>
  4013fc:	be 40 00 00 00       	mov    $0x40,%esi
  401401:	48 8d bc 24 00 20 00 	lea    0x2000(%rsp),%rdi
  401408:	00 
  401409:	e8 c2 f8 ff ff       	callq  400cd0 <gethostname@plt>
  40140e:	85 c0                	test   %eax,%eax
  401410:	75 43                	jne    401455 <initialize_bomb+0x70>
  401412:	48 8b 3d 67 2f 20 00 	mov    0x202f67(%rip),%rdi        # 604380 <host_table>
  401419:	bb 88 43 60 00       	mov    $0x604388,%ebx
  40141e:	48 85 ff             	test   %rdi,%rdi
  401421:	74 1e                	je     401441 <initialize_bomb+0x5c>
  401423:	48 8d b4 24 00 20 00 	lea    0x2000(%rsp),%rsi
  40142a:	00 
  40142b:	e8 50 f7 ff ff       	callq  400b80 <strcasecmp@plt>
  401430:	85 c0                	test   %eax,%eax
  401432:	74 51                	je     401485 <initialize_bomb+0xa0>
  401434:	48 83 c3 08          	add    $0x8,%rbx
  401438:	48 8b 7b f8          	mov    -0x8(%rbx),%rdi
  40143c:	48 85 ff             	test   %rdi,%rdi
  40143f:	75 e2                	jne    401423 <initialize_bomb+0x3e>
  401441:	bf 60 28 40 00       	mov    $0x402860,%edi
  401446:	e8 65 f7 ff ff       	callq  400bb0 <puts@plt>
  40144b:	bf 08 00 00 00       	mov    $0x8,%edi
  401450:	e8 9b f8 ff ff       	callq  400cf0 <exit@plt>
  401455:	bf 28 28 40 00       	mov    $0x402828,%edi
  40145a:	e8 51 f7 ff ff       	callq  400bb0 <puts@plt>
  40145f:	bf 08 00 00 00       	mov    $0x8,%edi
  401464:	e8 87 f8 ff ff       	callq  400cf0 <exit@plt>
  401469:	48 89 e6             	mov    %rsp,%rsi
  40146c:	bf b4 2d 40 00       	mov    $0x402db4,%edi
  401471:	b8 00 00 00 00       	mov    $0x0,%eax
  401476:	e8 65 f7 ff ff       	callq  400be0 <printf@plt>
  40147b:	bf 08 00 00 00       	mov    $0x8,%edi
  401480:	e8 6b f8 ff ff       	callq  400cf0 <exit@plt>
  401485:	48 89 e7             	mov    %rsp,%rdi
  401488:	e8 ad 0e 00 00       	callq  40233a <init_driver>
  40148d:	85 c0                	test   %eax,%eax
  40148f:	78 d8                	js     401469 <initialize_bomb+0x84>
  401491:	48 81 c4 40 20 00 00 	add    $0x2040,%rsp
  401498:	5b                   	pop    %rbx
  401499:	c3                   	retq   

000000000040149a <welcome_message>:
  40149a:	83 ff 01             	cmp    $0x1,%edi
  40149d:	74 01                	je     4014a0 <welcome_message+0x6>
  40149f:	c3                   	retq   
  4014a0:	48 83 ec 08          	sub    $0x8,%rsp
  4014a4:	bf 98 28 40 00       	mov    $0x402898,%edi
  4014a9:	e8 02 f7 ff ff       	callq  400bb0 <puts@plt>
  4014ae:	bf e0 28 40 00       	mov    $0x4028e0,%edi
  4014b3:	e8 f8 f6 ff ff       	callq  400bb0 <puts@plt>
  4014b8:	bf 28 29 40 00       	mov    $0x402928,%edi
  4014bd:	e8 ee f6 ff ff       	callq  400bb0 <puts@plt>
  4014c2:	bf 70 29 40 00       	mov    $0x402970,%edi
  4014c7:	e8 e4 f6 ff ff       	callq  400bb0 <puts@plt>
  4014cc:	bf 70 29 40 00       	mov    $0x402970,%edi
  4014d1:	e8 da f6 ff ff       	callq  400bb0 <puts@plt>
  4014d6:	bf b8 29 40 00       	mov    $0x4029b8,%edi
  4014db:	e8 d0 f6 ff ff       	callq  400bb0 <puts@plt>
  4014e0:	bf 00 2a 40 00       	mov    $0x402a00,%edi
  4014e5:	e8 c6 f6 ff ff       	callq  400bb0 <puts@plt>
  4014ea:	bf 48 2a 40 00       	mov    $0x402a48,%edi
  4014ef:	e8 bc f6 ff ff       	callq  400bb0 <puts@plt>
  4014f4:	bf 90 2a 40 00       	mov    $0x402a90,%edi
  4014f9:	e8 b2 f6 ff ff       	callq  400bb0 <puts@plt>
  4014fe:	bf d8 2a 40 00       	mov    $0x402ad8,%edi
  401503:	e8 a8 f6 ff ff       	callq  400bb0 <puts@plt>
  401508:	bf 20 2b 40 00       	mov    $0x402b20,%edi
  40150d:	e8 9e f6 ff ff       	callq  400bb0 <puts@plt>
  401512:	bf 68 2b 40 00       	mov    $0x402b68,%edi
  401517:	e8 94 f6 ff ff       	callq  400bb0 <puts@plt>
  40151c:	bf b0 2b 40 00       	mov    $0x402bb0,%edi
  401521:	e8 8a f6 ff ff       	callq  400bb0 <puts@plt>
  401526:	bf f8 2b 40 00       	mov    $0x402bf8,%edi
  40152b:	e8 80 f6 ff ff       	callq  400bb0 <puts@plt>
  401530:	bf 40 2c 40 00       	mov    $0x402c40,%edi
  401535:	e8 76 f6 ff ff       	callq  400bb0 <puts@plt>
  40153a:	bf 88 2c 40 00       	mov    $0x402c88,%edi
  40153f:	e8 6c f6 ff ff       	callq  400bb0 <puts@plt>
  401544:	48 83 c4 08          	add    $0x8,%rsp
  401548:	c3                   	retq   

0000000000401549 <initialize_bomb_solve>:
  401549:	c3                   	retq   

000000000040154a <blank_line>:
  40154a:	55                   	push   %rbp
  40154b:	53                   	push   %rbx
  40154c:	48 83 ec 08          	sub    $0x8,%rsp
  401550:	48 89 fd             	mov    %rdi,%rbp
  401553:	0f b6 5d 00          	movzbl 0x0(%rbp),%ebx
  401557:	84 db                	test   %bl,%bl
  401559:	74 1e                	je     401579 <blank_line+0x2f>
  40155b:	e8 c0 f7 ff ff       	callq  400d20 <__ctype_b_loc@plt>
  401560:	48 83 c5 01          	add    $0x1,%rbp
  401564:	48 0f be db          	movsbq %bl,%rbx
  401568:	48 8b 00             	mov    (%rax),%rax
  40156b:	f6 44 58 01 20       	testb  $0x20,0x1(%rax,%rbx,2)
  401570:	75 e1                	jne    401553 <blank_line+0x9>
  401572:	b8 00 00 00 00       	mov    $0x0,%eax
  401577:	eb 05                	jmp    40157e <blank_line+0x34>
  401579:	b8 01 00 00 00       	mov    $0x1,%eax
  40157e:	48 83 c4 08          	add    $0x8,%rsp
  401582:	5b                   	pop    %rbx
  401583:	5d                   	pop    %rbp
  401584:	c3                   	retq   

0000000000401585 <skip>:
  401585:	53                   	push   %rbx
  401586:	48 63 05 87 32 20 00 	movslq 0x203287(%rip),%rax        # 604814 <num_input_strings>
  40158d:	48 8d 3c 80          	lea    (%rax,%rax,4),%rdi
  401591:	48 c1 e7 04          	shl    $0x4,%rdi
  401595:	48 81 c7 20 48 60 00 	add    $0x604820,%rdi
  40159c:	48 8b 15 fd 31 20 00 	mov    0x2031fd(%rip),%rdx        # 6047a0 <infile>
  4015a3:	be 50 00 00 00       	mov    $0x50,%esi
  4015a8:	e8 83 f6 ff ff       	callq  400c30 <fgets@plt>
  4015ad:	48 89 c3             	mov    %rax,%rbx
  4015b0:	48 85 c0             	test   %rax,%rax
  4015b3:	74 0c                	je     4015c1 <skip+0x3c>
  4015b5:	48 89 c7             	mov    %rax,%rdi
  4015b8:	e8 8d ff ff ff       	callq  40154a <blank_line>
  4015bd:	85 c0                	test   %eax,%eax
  4015bf:	75 c5                	jne    401586 <skip+0x1>
  4015c1:	48 89 d8             	mov    %rbx,%rax
  4015c4:	5b                   	pop    %rbx
  4015c5:	c3                   	retq   

00000000004015c6 <send_msg>:
  4015c6:	48 81 ec 08 40 00 00 	sub    $0x4008,%rsp
  4015cd:	44 8b 05 40 32 20 00 	mov    0x203240(%rip),%r8d        # 604814 <num_input_strings>
  4015d4:	41 8d 40 ff          	lea    -0x1(%r8),%eax
  4015d8:	48 98                	cltq   
  4015da:	48 8d 04 80          	lea    (%rax,%rax,4),%rax
  4015de:	48 c1 e0 04          	shl    $0x4,%rax
  4015e2:	85 ff                	test   %edi,%edi
  4015e4:	b9 ce 2d 40 00       	mov    $0x402dce,%ecx
  4015e9:	ba d6 2d 40 00       	mov    $0x402dd6,%edx
  4015ee:	48 0f 44 ca          	cmove  %rdx,%rcx
  4015f2:	4c 8d 88 20 48 60 00 	lea    0x604820(%rax),%r9
  4015f9:	8b 15 75 2d 20 00    	mov    0x202d75(%rip),%edx        # 604374 <bomb_id>
  4015ff:	be df 2d 40 00       	mov    $0x402ddf,%esi
  401604:	48 8d bc 24 00 20 00 	lea    0x2000(%rsp),%rdi
  40160b:	00 
  40160c:	b8 00 00 00 00       	mov    $0x0,%eax
  401611:	e8 ca f6 ff ff       	callq  400ce0 <sprintf@plt>
  401616:	49 89 e0             	mov    %rsp,%r8
  401619:	b9 00 00 00 00       	mov    $0x0,%ecx
  40161e:	48 8d 94 24 00 20 00 	lea    0x2000(%rsp),%rdx
  401625:	00 
  401626:	be 50 43 60 00       	mov    $0x604350,%esi
  40162b:	bf 68 43 60 00       	mov    $0x604368,%edi
  401630:	e8 ab 0e 00 00       	callq  4024e0 <driver_post>
  401635:	85 c0                	test   %eax,%eax
  401637:	78 08                	js     401641 <send_msg+0x7b>
  401639:	48 81 c4 08 40 00 00 	add    $0x4008,%rsp
  401640:	c3                   	retq   
  401641:	48 89 e7             	mov    %rsp,%rdi
  401644:	e8 67 f5 ff ff       	callq  400bb0 <puts@plt>
  401649:	bf 00 00 00 00       	mov    $0x0,%edi
  40164e:	e8 9d f6 ff ff       	callq  400cf0 <exit@plt>

0000000000401653 <phase_defused>:
  401653:	48 83 ec 08          	sub    $0x8,%rsp
  401657:	bf 01 00 00 00       	mov    $0x1,%edi
  40165c:	e8 65 ff ff ff       	callq  4015c6 <send_msg>
  401661:	83 3d ac 31 20 00 05 	cmpl   $0x5,0x2031ac(%rip)        # 604814 <num_input_strings>
  401668:	7e 09                	jle    401673 <phase_defused+0x20>
  40166a:	83 3d 9f 31 20 00 21 	cmpl   $0x21,0x20319f(%rip)        # 604810 <trap>
  401671:	75 05                	jne    401678 <phase_defused+0x25>
  401673:	48 83 c4 08          	add    $0x8,%rsp
  401677:	c3                   	retq   
  401678:	bf d0 2c 40 00       	mov    $0x402cd0,%edi
  40167d:	e8 2e f5 ff ff       	callq  400bb0 <puts@plt>
  401682:	bf 00 2d 40 00       	mov    $0x402d00,%edi
  401687:	e8 24 f5 ff ff       	callq  400bb0 <puts@plt>
  40168c:	eb e5                	jmp    401673 <phase_defused+0x20>

000000000040168e <explode_bomb>:
  40168e:	48 81 ec d8 00 00 00 	sub    $0xd8,%rsp
  401695:	83 3d 78 31 20 00 06 	cmpl   $0x6,0x203178(%rip)        # 604814 <num_input_strings>
  40169c:	77 17                	ja     4016b5 <explode_bomb+0x27>
  40169e:	8b 05 70 31 20 00    	mov    0x203170(%rip),%eax        # 604814 <num_input_strings>
  4016a4:	ff 24 c5 08 30 40 00 	jmpq   *0x403008(,%rax,8)
  4016ab:	bf eb 2d 40 00       	mov    $0x402deb,%edi
  4016b0:	e8 fb f4 ff ff       	callq  400bb0 <puts@plt>
  4016b5:	48 b8 53 6f 20 79 6f 	movabs $0x6d20756f79206f53,%rax
  4016bc:	75 20 6d 
  4016bf:	48 ba 61 64 65 20 69 	movabs $0x7420746920656461,%rdx
  4016c6:	74 20 74 
  4016c9:	48 89 04 24          	mov    %rax,(%rsp)
  4016cd:	48 89 54 24 08       	mov    %rdx,0x8(%rsp)
  4016d2:	48 b8 6f 20 74 68 65 	movabs $0x337320656874206f,%rax
  4016d9:	20 73 33 
  4016dc:	48 ba 63 72 65 74 20 	movabs $0x6168702074657263,%rdx
  4016e3:	70 68 61 
  4016e6:	48 89 44 24 10       	mov    %rax,0x10(%rsp)
  4016eb:	48 89 54 24 18       	mov    %rdx,0x18(%rsp)
  4016f0:	48 b8 73 65 2e 20 20 	movabs $0x63694e20202e6573,%rax
  4016f7:	4e 69 63 
  4016fa:	48 ba 65 2c 20 62 75 	movabs $0x640a747562202c65,%rdx
  401701:	74 0a 64 
  401704:	48 89 44 24 20       	mov    %rax,0x20(%rsp)
  401709:	48 89 54 24 28       	mov    %rdx,0x28(%rsp)
  40170e:	48 b8 6f 6e 27 74 20 	movabs $0x6c65742074276e6f,%rax
  401715:	74 65 6c 
  401718:	48 ba 6c 20 61 6e 79 	movabs $0x656e6f796e61206c,%rdx
  40171f:	6f 6e 65 
  401722:	48 89 44 24 30       	mov    %rax,0x30(%rsp)
  401727:	48 89 54 24 38       	mov    %rdx,0x38(%rsp)
  40172c:	48 b8 20 61 62 6f 75 	movabs $0x692074756f626120,%rax
  401733:	74 20 69 
  401736:	48 ba 74 20 28 65 73 	movabs $0x6365707365282074,%rdx
  40173d:	70 65 63 
  401740:	48 89 44 24 40       	mov    %rax,0x40(%rsp)
  401745:	48 89 54 24 48       	mov    %rdx,0x48(%rsp)
  40174a:	48 b8 69 61 6c 6c 79 	movabs $0x6e6f20796c6c6169,%rax
  401751:	20 6f 6e 
  401754:	48 ba 20 50 69 61 7a 	movabs $0x29617a7a61695020,%rdx
  40175b:	7a 61 29 
  40175e:	48 89 44 24 50       	mov    %rax,0x50(%rsp)
  401763:	48 89 54 24 58       	mov    %rdx,0x58(%rsp)
  401768:	48 b8 2e 0a 49 66 20 	movabs $0x756f792066490a2e,%rax
  40176f:	79 6f 75 
  401772:	48 ba 20 64 6f 20 79 	movabs $0x20756f79206f6420,%rdx
  401779:	6f 75 20 
  40177c:	48 89 44 24 60       	mov    %rax,0x60(%rsp)
  401781:	48 89 54 24 68       	mov    %rdx,0x68(%rsp)
  401786:	48 b8 77 6f 6e 27 74 	movabs $0x65672074276e6f77,%rax
  40178d:	20 67 65 
  401790:	48 ba 74 20 61 6e 79 	movabs $0x786520796e612074,%rdx
  401797:	20 65 78 
  40179a:	48 89 44 24 70       	mov    %rax,0x70(%rsp)
  40179f:	48 89 54 24 78       	mov    %rdx,0x78(%rsp)
  4017a4:	48 b8 74 72 61 20 63 	movabs $0x6465726320617274,%rax
  4017ab:	72 65 64 
  4017ae:	48 ba 69 74 21 20 61 	movabs $0x77796e6120217469,%rdx
  4017b5:	6e 79 77 
  4017b8:	48 89 84 24 80 00 00 	mov    %rax,0x80(%rsp)
  4017bf:	00 
  4017c0:	48 89 94 24 88 00 00 	mov    %rdx,0x88(%rsp)
  4017c7:	00 
  4017c8:	48 b8 61 79 73 2c 0a 	movabs $0x6e69660a2c737961,%rax
  4017cf:	66 69 6e 
  4017d2:	48 ba 64 69 6e 67 20 	movabs $0x20746920676e6964,%rdx
  4017d9:	69 74 20 
  4017dc:	48 89 84 24 90 00 00 	mov    %rax,0x90(%rsp)
  4017e3:	00 
  4017e4:	48 89 94 24 98 00 00 	mov    %rdx,0x98(%rsp)
  4017eb:	00 
  4017ec:	48 b8 61 6e 64 20 73 	movabs $0x766c6f7320646e61,%rax
  4017f3:	6f 6c 76 
  4017f6:	48 ba 69 6e 67 20 69 	movabs $0x6120746920676e69,%rdx
  4017fd:	74 20 61 
  401800:	48 89 84 24 a0 00 00 	mov    %rax,0xa0(%rsp)
  401807:	00 
  401808:	48 89 94 24 a8 00 00 	mov    %rdx,0xa8(%rsp)
  40180f:	00 
  401810:	48 b8 72 65 20 71 75 	movabs $0x6574697571206572,%rax
  401817:	69 74 65 
  40181a:	48 ba 20 64 69 66 66 	movabs $0x6572656666696420,%rdx
  401821:	65 72 65 
  401824:	48 89 84 24 b0 00 00 	mov    %rax,0xb0(%rsp)
  40182b:	00 
  40182c:	48 89 94 24 b8 00 00 	mov    %rdx,0xb8(%rsp)
  401833:	00 
  401834:	48 b8 6e 74 2e 2e 2e 	movabs $0x2e2e2e746e,%rax
  40183b:	00 00 00 
  40183e:	48 89 84 24 c0 00 00 	mov    %rax,0xc0(%rsp)
  401845:	00 
  401846:	83 3d c7 2f 20 00 06 	cmpl   $0x6,0x202fc7(%rip)        # 604814 <num_input_strings>
  40184d:	75 0d                	jne    40185c <explode_bomb+0x1ce>
  40184f:	83 3d ba 2f 20 00 21 	cmpl   $0x21,0x202fba(%rip)        # 604810 <trap>
  401856:	0f 84 8c 00 00 00    	je     4018e8 <explode_bomb+0x25a>
  40185c:	bf 45 2e 40 00       	mov    $0x402e45,%edi
  401861:	e8 4a f3 ff ff       	callq  400bb0 <puts@plt>
  401866:	bf 4e 2e 40 00       	mov    $0x402e4e,%edi
  40186b:	e8 40 f3 ff ff       	callq  400bb0 <puts@plt>
  401870:	bf 00 00 00 00       	mov    $0x0,%edi
  401875:	e8 4c fd ff ff       	callq  4015c6 <send_msg>
  40187a:	bf 70 2d 40 00       	mov    $0x402d70,%edi
  40187f:	e8 2c f3 ff ff       	callq  400bb0 <puts@plt>
  401884:	bf 08 00 00 00       	mov    $0x8,%edi
  401889:	e8 62 f4 ff ff       	callq  400cf0 <exit@plt>
  40188e:	bf 48 2d 40 00       	mov    $0x402d48,%edi
  401893:	e8 18 f3 ff ff       	callq  400bb0 <puts@plt>
  401898:	e9 18 fe ff ff       	jmpq   4016b5 <explode_bomb+0x27>
  40189d:	bf f0 2d 40 00       	mov    $0x402df0,%edi
  4018a2:	e8 09 f3 ff ff       	callq  400bb0 <puts@plt>
  4018a7:	e9 09 fe ff ff       	jmpq   4016b5 <explode_bomb+0x27>
  4018ac:	bf 05 2e 40 00       	mov    $0x402e05,%edi
  4018b1:	e8 fa f2 ff ff       	callq  400bb0 <puts@plt>
  4018b6:	e9 fa fd ff ff       	jmpq   4016b5 <explode_bomb+0x27>
  4018bb:	bf 1b 2e 40 00       	mov    $0x402e1b,%edi
  4018c0:	e8 eb f2 ff ff       	callq  400bb0 <puts@plt>
  4018c5:	e9 eb fd ff ff       	jmpq   4016b5 <explode_bomb+0x27>
  4018ca:	bf 32 2e 40 00       	mov    $0x402e32,%edi
  4018cf:	e8 dc f2 ff ff       	callq  400bb0 <puts@plt>
  4018d4:	e9 dc fd ff ff       	jmpq   4016b5 <explode_bomb+0x27>
  4018d9:	bf 3b 2e 40 00       	mov    $0x402e3b,%edi
  4018de:	e8 cd f2 ff ff       	callq  400bb0 <puts@plt>
  4018e3:	e9 cd fd ff ff       	jmpq   4016b5 <explode_bomb+0x27>
  4018e8:	48 89 e7             	mov    %rsp,%rdi
  4018eb:	e8 c0 f2 ff ff       	callq  400bb0 <puts@plt>
  4018f0:	e8 5e fd ff ff       	callq  401653 <phase_defused>
  4018f5:	c7 05 11 2f 20 00 00 	movl   $0x0,0x202f11(%rip)        # 604810 <trap>
  4018fc:	00 00 00 
  4018ff:	b8 00 00 00 00       	mov    $0x0,%eax
  401904:	e8 97 f9 ff ff       	callq  4012a0 <s3cret_phase>
  401909:	bf 00 00 00 00       	mov    $0x0,%edi
  40190e:	e8 dd f3 ff ff       	callq  400cf0 <exit@plt>

0000000000401913 <read_six_numbers>:
  401913:	48 83 ec 08          	sub    $0x8,%rsp // inc stack
  401917:	48 89 f2             	mov    %rsi,%rdx // rdx = second arg
  40191a:	48 8d 4e 04          	lea    0x4(%rsi),%rcx // rcx = *(rsi + 4)
  40191e:	48 8d 46 14          	lea    0x14(%rsi),%rax
  401922:	50                   	push   %rax // save (*rsi + 14)
  401923:	48 8d 46 10          	lea    0x10(%rsi),%rax
  401927:	50                   	push   %rax // save *(rsi + 10) to stack
  401928:	4c 8d 4e 0c          	lea    0xc(%rsi),%r9 // r9 = *(rsi + c)
  40192c:	4c 8d 46 08          	lea    0x8(%rsi),%r8 // r8 = *(rsi + 8)
  401930:	be 65 2e 40 00       	mov    $0x402e65,%esi // esi = ...
  401935:	b8 00 00 00 00       	mov    $0x0,%eax // set flag 0
  40193a:	e8 61 f3 ff ff       	callq  400ca0 <__isoc99_sscanf@plt>
  40193f:	48 83 c4 10          	add    $0x10,%rsp // stack decrease 2
  401943:	83 f8 05             	cmp    $0x5,%eax
  401946:	7e 05                	jle    40194d <read_six_numbers+0x3a>
  401948:	48 83 c4 08          	add    $0x8,%rsp
  40194c:	c3                   	retq   
  40194d:	e8 3c fd ff ff       	callq  40168e <explode_bomb>

0000000000401952 <read_line>:
  401952:	55                   	push   %rbp
  401953:	53                   	push   %rbx
  401954:	48 83 ec 08          	sub    $0x8,%rsp
  401958:	b8 00 00 00 00       	mov    $0x0,%eax
  40195d:	e8 23 fc ff ff       	callq  401585 <skip>
  401962:	48 85 c0             	test   %rax,%rax
  401965:	74 54                	je     4019bb <read_line+0x69>
  401967:	8b 2d a7 2e 20 00    	mov    0x202ea7(%rip),%ebp        # 604814 <num_input_strings>
  40196d:	48 63 c5             	movslq %ebp,%rax
  401970:	48 8d 1c 80          	lea    (%rax,%rax,4),%rbx
  401974:	48 c1 e3 04          	shl    $0x4,%rbx
  401978:	48 81 c3 20 48 60 00 	add    $0x604820,%rbx
  40197f:	48 89 df             	mov    %rbx,%rdi
  401982:	e8 49 f2 ff ff       	callq  400bd0 <strlen@plt>
  401987:	83 f8 4e             	cmp    $0x4e,%eax
  40198a:	0f 8f 9d 00 00 00    	jg     401a2d <read_line+0xdb>
  401990:	83 e8 01             	sub    $0x1,%eax
  401993:	48 98                	cltq   
  401995:	48 63 d5             	movslq %ebp,%rdx
  401998:	48 8d 14 92          	lea    (%rdx,%rdx,4),%rdx
  40199c:	48 c1 e2 04          	shl    $0x4,%rdx
  4019a0:	c6 84 10 20 48 60 00 	movb   $0x0,0x604820(%rax,%rdx,1)
  4019a7:	00 
  4019a8:	83 c5 01             	add    $0x1,%ebp
  4019ab:	89 2d 63 2e 20 00    	mov    %ebp,0x202e63(%rip)        # 604814 <num_input_strings>
  4019b1:	48 89 d8             	mov    %rbx,%rax
  4019b4:	48 83 c4 08          	add    $0x8,%rsp
  4019b8:	5b                   	pop    %rbx
  4019b9:	5d                   	pop    %rbp
  4019ba:	c3                   	retq   
  4019bb:	48 8b 05 c6 2d 20 00 	mov    0x202dc6(%rip),%rax        # 604788 <stdin@@GLIBC_2.2.5>
  4019c2:	48 39 05 d7 2d 20 00 	cmp    %rax,0x202dd7(%rip)        # 6047a0 <infile>
  4019c9:	74 19                	je     4019e4 <read_line+0x92>
  4019cb:	bf 95 2e 40 00       	mov    $0x402e95,%edi
  4019d0:	e8 9b f1 ff ff       	callq  400b70 <getenv@plt>
  4019d5:	48 85 c0             	test   %rax,%rax
  4019d8:	74 1e                	je     4019f8 <read_line+0xa6>
  4019da:	bf 00 00 00 00       	mov    $0x0,%edi
  4019df:	e8 0c f3 ff ff       	callq  400cf0 <exit@plt>
  4019e4:	bf 77 2e 40 00       	mov    $0x402e77,%edi
  4019e9:	e8 c2 f1 ff ff       	callq  400bb0 <puts@plt>
  4019ee:	bf 08 00 00 00       	mov    $0x8,%edi
  4019f3:	e8 f8 f2 ff ff       	callq  400cf0 <exit@plt>
  4019f8:	48 8b 05 89 2d 20 00 	mov    0x202d89(%rip),%rax        # 604788 <stdin@@GLIBC_2.2.5>
  4019ff:	48 89 05 9a 2d 20 00 	mov    %rax,0x202d9a(%rip)        # 6047a0 <infile>
  401a06:	b8 00 00 00 00       	mov    $0x0,%eax
  401a0b:	e8 75 fb ff ff       	callq  401585 <skip>
  401a10:	48 85 c0             	test   %rax,%rax
  401a13:	0f 85 4e ff ff ff    	jne    401967 <read_line+0x15>
  401a19:	bf 77 2e 40 00       	mov    $0x402e77,%edi
  401a1e:	e8 8d f1 ff ff       	callq  400bb0 <puts@plt>
  401a23:	bf 00 00 00 00       	mov    $0x0,%edi
  401a28:	e8 c3 f2 ff ff       	callq  400cf0 <exit@plt>
  401a2d:	bf a0 2e 40 00       	mov    $0x402ea0,%edi
  401a32:	e8 79 f1 ff ff       	callq  400bb0 <puts@plt>
  401a37:	8b 05 d7 2d 20 00    	mov    0x202dd7(%rip),%eax        # 604814 <num_input_strings>
  401a3d:	8d 50 01             	lea    0x1(%rax),%edx
  401a40:	89 15 ce 2d 20 00    	mov    %edx,0x202dce(%rip)        # 604814 <num_input_strings>
  401a46:	48 98                	cltq   
  401a48:	48 6b c0 50          	imul   $0x50,%rax,%rax
  401a4c:	48 b9 2a 2a 2a 74 72 	movabs $0x636e7572742a2a2a,%rcx
  401a53:	75 6e 63 
  401a56:	48 bb 61 74 65 64 2a 	movabs $0x2a2a2a64657461,%rbx
  401a5d:	2a 2a 00 
  401a60:	48 89 88 20 48 60 00 	mov    %rcx,0x604820(%rax)
  401a67:	48 89 98 28 48 60 00 	mov    %rbx,0x604828(%rax)
  401a6e:	e8 1b fc ff ff       	callq  40168e <explode_bomb>

0000000000401a73 <sigalrm_handler>:
  401a73:	48 83 ec 08          	sub    $0x8,%rsp
  401a77:	ba 00 00 00 00       	mov    $0x0,%edx
  401a7c:	be 40 30 40 00       	mov    $0x403040,%esi
  401a81:	48 8b 3d 08 2d 20 00 	mov    0x202d08(%rip),%rdi        # 604790 <stderr@@GLIBC_2.2.5>
  401a88:	b8 00 00 00 00       	mov    $0x0,%eax
  401a8d:	e8 ce f1 ff ff       	callq  400c60 <fprintf@plt>
  401a92:	bf 01 00 00 00       	mov    $0x1,%edi
  401a97:	e8 54 f2 ff ff       	callq  400cf0 <exit@plt>

0000000000401a9c <rio_readlineb>:
  401a9c:	41 56                	push   %r14
  401a9e:	41 55                	push   %r13
  401aa0:	41 54                	push   %r12
  401aa2:	55                   	push   %rbp
  401aa3:	53                   	push   %rbx
  401aa4:	49 89 f4             	mov    %rsi,%r12
  401aa7:	48 83 fa 01          	cmp    $0x1,%rdx
  401aab:	0f 86 92 00 00 00    	jbe    401b43 <rio_readlineb+0xa7>
  401ab1:	48 89 fb             	mov    %rdi,%rbx
  401ab4:	4c 8d 74 16 ff       	lea    -0x1(%rsi,%rdx,1),%r14
  401ab9:	41 bd 01 00 00 00    	mov    $0x1,%r13d
  401abf:	48 8d 6f 10          	lea    0x10(%rdi),%rbp
  401ac3:	eb 56                	jmp    401b1b <rio_readlineb+0x7f>
  401ac5:	e8 c6 f0 ff ff       	callq  400b90 <__errno_location@plt>
  401aca:	83 38 04             	cmpl   $0x4,(%rax)
  401acd:	75 55                	jne    401b24 <rio_readlineb+0x88>
  401acf:	ba 00 20 00 00       	mov    $0x2000,%edx
  401ad4:	48 89 ee             	mov    %rbp,%rsi
  401ad7:	8b 3b                	mov    (%rbx),%edi
  401ad9:	e8 32 f1 ff ff       	callq  400c10 <read@plt>
  401ade:	89 c2                	mov    %eax,%edx
  401ae0:	89 43 04             	mov    %eax,0x4(%rbx)
  401ae3:	85 c0                	test   %eax,%eax
  401ae5:	78 de                	js     401ac5 <rio_readlineb+0x29>
  401ae7:	85 c0                	test   %eax,%eax
  401ae9:	74 42                	je     401b2d <rio_readlineb+0x91>
  401aeb:	48 89 6b 08          	mov    %rbp,0x8(%rbx)
  401aef:	48 8b 43 08          	mov    0x8(%rbx),%rax
  401af3:	0f b6 08             	movzbl (%rax),%ecx
  401af6:	48 83 c0 01          	add    $0x1,%rax
  401afa:	48 89 43 08          	mov    %rax,0x8(%rbx)
  401afe:	83 ea 01             	sub    $0x1,%edx
  401b01:	89 53 04             	mov    %edx,0x4(%rbx)
  401b04:	49 83 c4 01          	add    $0x1,%r12
  401b08:	41 88 4c 24 ff       	mov    %cl,-0x1(%r12)
  401b0d:	80 f9 0a             	cmp    $0xa,%cl
  401b10:	74 3c                	je     401b4e <rio_readlineb+0xb2>
  401b12:	41 83 c5 01          	add    $0x1,%r13d
  401b16:	4d 39 f4             	cmp    %r14,%r12
  401b19:	74 30                	je     401b4b <rio_readlineb+0xaf>
  401b1b:	8b 53 04             	mov    0x4(%rbx),%edx
  401b1e:	85 d2                	test   %edx,%edx
  401b20:	7e ad                	jle    401acf <rio_readlineb+0x33>
  401b22:	eb cb                	jmp    401aef <rio_readlineb+0x53>
  401b24:	48 c7 c0 ff ff ff ff 	mov    $0xffffffffffffffff,%rax
  401b2b:	eb 05                	jmp    401b32 <rio_readlineb+0x96>
  401b2d:	b8 00 00 00 00       	mov    $0x0,%eax
  401b32:	85 c0                	test   %eax,%eax
  401b34:	75 29                	jne    401b5f <rio_readlineb+0xc3>
  401b36:	b8 00 00 00 00       	mov    $0x0,%eax
  401b3b:	41 83 fd 01          	cmp    $0x1,%r13d
  401b3f:	75 0d                	jne    401b4e <rio_readlineb+0xb2>
  401b41:	eb 13                	jmp    401b56 <rio_readlineb+0xba>
  401b43:	41 bd 01 00 00 00    	mov    $0x1,%r13d
  401b49:	eb 03                	jmp    401b4e <rio_readlineb+0xb2>
  401b4b:	4d 89 f4             	mov    %r14,%r12
  401b4e:	41 c6 04 24 00       	movb   $0x0,(%r12)
  401b53:	49 63 c5             	movslq %r13d,%rax
  401b56:	5b                   	pop    %rbx
  401b57:	5d                   	pop    %rbp
  401b58:	41 5c                	pop    %r12
  401b5a:	41 5d                	pop    %r13
  401b5c:	41 5e                	pop    %r14
  401b5e:	c3                   	retq   
  401b5f:	48 c7 c0 ff ff ff ff 	mov    $0xffffffffffffffff,%rax
  401b66:	eb ee                	jmp    401b56 <rio_readlineb+0xba>

0000000000401b68 <submitr>:
  401b68:	41 57                	push   %r15
  401b6a:	41 56                	push   %r14
  401b6c:	41 55                	push   %r13
  401b6e:	41 54                	push   %r12
  401b70:	55                   	push   %rbp
  401b71:	53                   	push   %rbx
  401b72:	48 81 ec 68 a0 00 00 	sub    $0xa068,%rsp
  401b79:	49 89 fd             	mov    %rdi,%r13
  401b7c:	89 f5                	mov    %esi,%ebp
  401b7e:	48 89 14 24          	mov    %rdx,(%rsp)
  401b82:	48 89 4c 24 08       	mov    %rcx,0x8(%rsp)
  401b87:	4c 89 44 24 18       	mov    %r8,0x18(%rsp)
  401b8c:	4c 89 4c 24 10       	mov    %r9,0x10(%rsp)
  401b91:	48 8b 9c 24 a0 a0 00 	mov    0xa0a0(%rsp),%rbx
  401b98:	00 
  401b99:	4c 8b bc 24 a8 a0 00 	mov    0xa0a8(%rsp),%r15
  401ba0:	00 
  401ba1:	c7 84 24 3c 20 00 00 	movl   $0x0,0x203c(%rsp)
  401ba8:	00 00 00 00 
  401bac:	ba 00 00 00 00       	mov    $0x0,%edx
  401bb1:	be 01 00 00 00       	mov    $0x1,%esi
  401bb6:	bf 02 00 00 00       	mov    $0x2,%edi
  401bbb:	e8 70 f1 ff ff       	callq  400d30 <socket@plt>
  401bc0:	85 c0                	test   %eax,%eax
  401bc2:	0f 88 0e 01 00 00    	js     401cd6 <submitr+0x16e>
  401bc8:	41 89 c4             	mov    %eax,%r12d
  401bcb:	4c 89 ef             	mov    %r13,%rdi
  401bce:	e8 7d f0 ff ff       	callq  400c50 <gethostbyname@plt>
  401bd3:	48 85 c0             	test   %rax,%rax
  401bd6:	0f 84 4a 01 00 00    	je     401d26 <submitr+0x1be>
  401bdc:	48 c7 84 24 50 a0 00 	movq   $0x0,0xa050(%rsp)
  401be3:	00 00 00 00 00 
  401be8:	48 c7 84 24 58 a0 00 	movq   $0x0,0xa058(%rsp)
  401bef:	00 00 00 00 00 
  401bf4:	66 c7 84 24 50 a0 00 	movw   $0x2,0xa050(%rsp)
  401bfb:	00 02 00 
  401bfe:	48 63 50 14          	movslq 0x14(%rax),%rdx
  401c02:	48 8b 40 18          	mov    0x18(%rax),%rax
  401c06:	48 8b 30             	mov    (%rax),%rsi
  401c09:	48 8d bc 24 54 a0 00 	lea    0xa054(%rsp),%rdi
  401c10:	00 
  401c11:	e8 9a f0 ff ff       	callq  400cb0 <memmove@plt>
  401c16:	66 c1 cd 08          	ror    $0x8,%bp
  401c1a:	66 89 ac 24 52 a0 00 	mov    %bp,0xa052(%rsp)
  401c21:	00 
  401c22:	ba 10 00 00 00       	mov    $0x10,%edx
  401c27:	48 8d b4 24 50 a0 00 	lea    0xa050(%rsp),%rsi
  401c2e:	00 
  401c2f:	44 89 e7             	mov    %r12d,%edi
  401c32:	e8 c9 f0 ff ff       	callq  400d00 <connect@plt>
  401c37:	85 c0                	test   %eax,%eax
  401c39:	0f 88 52 01 00 00    	js     401d91 <submitr+0x229>
  401c3f:	48 89 df             	mov    %rbx,%rdi
  401c42:	e8 89 ef ff ff       	callq  400bd0 <strlen@plt>
  401c47:	48 89 c5             	mov    %rax,%rbp
  401c4a:	48 8b 3c 24          	mov    (%rsp),%rdi
  401c4e:	e8 7d ef ff ff       	callq  400bd0 <strlen@plt>
  401c53:	49 89 c6             	mov    %rax,%r14
  401c56:	48 8b 7c 24 08       	mov    0x8(%rsp),%rdi
  401c5b:	e8 70 ef ff ff       	callq  400bd0 <strlen@plt>
  401c60:	49 89 c5             	mov    %rax,%r13
  401c63:	48 8b 7c 24 10       	mov    0x10(%rsp),%rdi
  401c68:	e8 63 ef ff ff       	callq  400bd0 <strlen@plt>
  401c6d:	48 89 c2             	mov    %rax,%rdx
  401c70:	4b 8d 84 2e 80 00 00 	lea    0x80(%r14,%r13,1),%rax
  401c77:	00 
  401c78:	48 01 d0             	add    %rdx,%rax
  401c7b:	48 8d 54 6d 00       	lea    0x0(%rbp,%rbp,2),%rdx
  401c80:	48 01 d0             	add    %rdx,%rax
  401c83:	48 3d 00 20 00 00    	cmp    $0x2000,%rax
  401c89:	0f 87 5f 01 00 00    	ja     401dee <submitr+0x286>
  401c8f:	48 8d 94 24 40 40 00 	lea    0x4040(%rsp),%rdx
  401c96:	00 
  401c97:	b9 00 04 00 00       	mov    $0x400,%ecx
  401c9c:	b8 00 00 00 00       	mov    $0x0,%eax
  401ca1:	48 89 d7             	mov    %rdx,%rdi
  401ca4:	f3 48 ab             	rep stos %rax,%es:(%rdi)
  401ca7:	48 89 df             	mov    %rbx,%rdi
  401caa:	e8 21 ef ff ff       	callq  400bd0 <strlen@plt>
  401caf:	85 c0                	test   %eax,%eax
  401cb1:	0f 84 4a 05 00 00    	je     402201 <submitr+0x699>
  401cb7:	8d 40 ff             	lea    -0x1(%rax),%eax
  401cba:	4c 8d 6c 03 01       	lea    0x1(%rbx,%rax,1),%r13
  401cbf:	48 8d ac 24 40 40 00 	lea    0x4040(%rsp),%rbp
  401cc6:	00 
  401cc7:	49 be d9 ff 00 00 00 	movabs $0x2000000000ffd9,%r14
  401cce:	00 20 00 
  401cd1:	e9 a5 01 00 00       	jmpq   401e7b <submitr+0x313>
  401cd6:	48 b8 45 72 72 6f 72 	movabs $0x43203a726f727245,%rax
  401cdd:	3a 20 43 
  401ce0:	48 ba 6c 69 65 6e 74 	movabs $0x6e7520746e65696c,%rdx
  401ce7:	20 75 6e 
  401cea:	49 89 07             	mov    %rax,(%r15)
  401ced:	49 89 57 08          	mov    %rdx,0x8(%r15)
  401cf1:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
  401cf8:	74 6f 20 
  401cfb:	48 ba 63 72 65 61 74 	movabs $0x7320657461657263,%rdx
  401d02:	65 20 73 
  401d05:	49 89 47 10          	mov    %rax,0x10(%r15)
  401d09:	49 89 57 18          	mov    %rdx,0x18(%r15)
  401d0d:	41 c7 47 20 6f 63 6b 	movl   $0x656b636f,0x20(%r15)
  401d14:	65 
  401d15:	66 41 c7 47 24 74 00 	movw   $0x74,0x24(%r15)
  401d1c:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  401d21:	e9 03 03 00 00       	jmpq   402029 <submitr+0x4c1>
  401d26:	48 b8 45 72 72 6f 72 	movabs $0x44203a726f727245,%rax
  401d2d:	3a 20 44 
  401d30:	48 ba 4e 53 20 69 73 	movabs $0x6e7520736920534e,%rdx
  401d37:	20 75 6e 
  401d3a:	49 89 07             	mov    %rax,(%r15)
  401d3d:	49 89 57 08          	mov    %rdx,0x8(%r15)
  401d41:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
  401d48:	74 6f 20 
  401d4b:	48 ba 72 65 73 6f 6c 	movabs $0x2065766c6f736572,%rdx
  401d52:	76 65 20 
  401d55:	49 89 47 10          	mov    %rax,0x10(%r15)
  401d59:	49 89 57 18          	mov    %rdx,0x18(%r15)
  401d5d:	48 b8 73 65 72 76 65 	movabs $0x6120726576726573,%rax
  401d64:	72 20 61 
  401d67:	49 89 47 20          	mov    %rax,0x20(%r15)
  401d6b:	41 c7 47 28 64 64 72 	movl   $0x65726464,0x28(%r15)
  401d72:	65 
  401d73:	66 41 c7 47 2c 73 73 	movw   $0x7373,0x2c(%r15)
  401d7a:	41 c6 47 2e 00       	movb   $0x0,0x2e(%r15)
  401d7f:	44 89 e7             	mov    %r12d,%edi
  401d82:	e8 79 ee ff ff       	callq  400c00 <close@plt>
  401d87:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  401d8c:	e9 98 02 00 00       	jmpq   402029 <submitr+0x4c1>
  401d91:	48 b8 45 72 72 6f 72 	movabs $0x55203a726f727245,%rax
  401d98:	3a 20 55 
  401d9b:	48 ba 6e 61 62 6c 65 	movabs $0x6f7420656c62616e,%rdx
  401da2:	20 74 6f 
  401da5:	49 89 07             	mov    %rax,(%r15)
  401da8:	49 89 57 08          	mov    %rdx,0x8(%r15)
  401dac:	48 b8 20 63 6f 6e 6e 	movabs $0x7463656e6e6f6320,%rax
  401db3:	65 63 74 
  401db6:	48 ba 20 74 6f 20 74 	movabs $0x20656874206f7420,%rdx
  401dbd:	68 65 20 
  401dc0:	49 89 47 10          	mov    %rax,0x10(%r15)
  401dc4:	49 89 57 18          	mov    %rdx,0x18(%r15)
  401dc8:	41 c7 47 20 73 65 72 	movl   $0x76726573,0x20(%r15)
  401dcf:	76 
  401dd0:	66 41 c7 47 24 65 72 	movw   $0x7265,0x24(%r15)
  401dd7:	41 c6 47 26 00       	movb   $0x0,0x26(%r15)
  401ddc:	44 89 e7             	mov    %r12d,%edi
  401ddf:	e8 1c ee ff ff       	callq  400c00 <close@plt>
  401de4:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  401de9:	e9 3b 02 00 00       	jmpq   402029 <submitr+0x4c1>
  401dee:	48 b8 45 72 72 6f 72 	movabs $0x52203a726f727245,%rax
  401df5:	3a 20 52 
  401df8:	48 ba 65 73 75 6c 74 	movabs $0x747320746c757365,%rdx
  401dff:	20 73 74 
  401e02:	49 89 07             	mov    %rax,(%r15)
  401e05:	49 89 57 08          	mov    %rdx,0x8(%r15)
  401e09:	48 b8 72 69 6e 67 20 	movabs $0x6f6f7420676e6972,%rax
  401e10:	74 6f 6f 
  401e13:	48 ba 20 6c 61 72 67 	movabs $0x202e656772616c20,%rdx
  401e1a:	65 2e 20 
  401e1d:	49 89 47 10          	mov    %rax,0x10(%r15)
  401e21:	49 89 57 18          	mov    %rdx,0x18(%r15)
  401e25:	48 b8 49 6e 63 72 65 	movabs $0x6573616572636e49,%rax
  401e2c:	61 73 65 
  401e2f:	48 ba 20 53 55 42 4d 	movabs $0x5254494d42555320,%rdx
  401e36:	49 54 52 
  401e39:	49 89 47 20          	mov    %rax,0x20(%r15)
  401e3d:	49 89 57 28          	mov    %rdx,0x28(%r15)
  401e41:	48 b8 5f 4d 41 58 42 	movabs $0x46554258414d5f,%rax
  401e48:	55 46 00 
  401e4b:	49 89 47 30          	mov    %rax,0x30(%r15)
  401e4f:	44 89 e7             	mov    %r12d,%edi
  401e52:	e8 a9 ed ff ff       	callq  400c00 <close@plt>
  401e57:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  401e5c:	e9 c8 01 00 00       	jmpq   402029 <submitr+0x4c1>
  401e61:	49 0f a3 c6          	bt     %rax,%r14
  401e65:	73 1e                	jae    401e85 <submitr+0x31d>
  401e67:	88 55 00             	mov    %dl,0x0(%rbp)
  401e6a:	48 8d 6d 01          	lea    0x1(%rbp),%rbp
  401e6e:	48 83 c3 01          	add    $0x1,%rbx
  401e72:	49 39 dd             	cmp    %rbx,%r13
  401e75:	0f 84 86 03 00 00    	je     402201 <submitr+0x699>
  401e7b:	0f b6 13             	movzbl (%rbx),%edx
  401e7e:	8d 42 d6             	lea    -0x2a(%rdx),%eax
  401e81:	3c 35                	cmp    $0x35,%al
  401e83:	76 dc                	jbe    401e61 <submitr+0x2f9>
  401e85:	89 d0                	mov    %edx,%eax
  401e87:	83 e0 df             	and    $0xffffffdf,%eax
  401e8a:	83 e8 41             	sub    $0x41,%eax
  401e8d:	3c 19                	cmp    $0x19,%al
  401e8f:	76 d6                	jbe    401e67 <submitr+0x2ff>
  401e91:	80 fa 20             	cmp    $0x20,%dl
  401e94:	74 45                	je     401edb <submitr+0x373>
  401e96:	8d 42 e0             	lea    -0x20(%rdx),%eax
  401e99:	3c 5f                	cmp    $0x5f,%al
  401e9b:	76 09                	jbe    401ea6 <submitr+0x33e>
  401e9d:	80 fa 09             	cmp    $0x9,%dl
  401ea0:	0f 85 ce 02 00 00    	jne    402174 <submitr+0x60c>
  401ea6:	0f b6 d2             	movzbl %dl,%edx
  401ea9:	be 18 31 40 00       	mov    $0x403118,%esi
  401eae:	48 8d 7c 24 28       	lea    0x28(%rsp),%rdi
  401eb3:	b8 00 00 00 00       	mov    $0x0,%eax
  401eb8:	e8 23 ee ff ff       	callq  400ce0 <sprintf@plt>
  401ebd:	0f b6 44 24 28       	movzbl 0x28(%rsp),%eax
  401ec2:	88 45 00             	mov    %al,0x0(%rbp)
  401ec5:	0f b6 44 24 29       	movzbl 0x29(%rsp),%eax
  401eca:	88 45 01             	mov    %al,0x1(%rbp)
  401ecd:	0f b6 44 24 2a       	movzbl 0x2a(%rsp),%eax
  401ed2:	88 45 02             	mov    %al,0x2(%rbp)
  401ed5:	48 8d 6d 03          	lea    0x3(%rbp),%rbp
  401ed9:	eb 93                	jmp    401e6e <submitr+0x306>
  401edb:	c6 45 00 2b          	movb   $0x2b,0x0(%rbp)
  401edf:	48 8d 6d 01          	lea    0x1(%rbp),%rbp
  401ee3:	eb 89                	jmp    401e6e <submitr+0x306>
  401ee5:	48 01 c5             	add    %rax,%rbp
  401ee8:	48 29 c3             	sub    %rax,%rbx
  401eeb:	0f 84 73 03 00 00    	je     402264 <submitr+0x6fc>
  401ef1:	48 89 da             	mov    %rbx,%rdx
  401ef4:	48 89 ee             	mov    %rbp,%rsi
  401ef7:	44 89 e7             	mov    %r12d,%edi
  401efa:	e8 c1 ec ff ff       	callq  400bc0 <write@plt>
  401eff:	48 85 c0             	test   %rax,%rax
  401f02:	7f e1                	jg     401ee5 <submitr+0x37d>
  401f04:	e8 87 ec ff ff       	callq  400b90 <__errno_location@plt>
  401f09:	83 38 04             	cmpl   $0x4,(%rax)
  401f0c:	0f 85 03 02 00 00    	jne    402115 <submitr+0x5ad>
  401f12:	4c 89 e8             	mov    %r13,%rax
  401f15:	eb ce                	jmp    401ee5 <submitr+0x37d>
  401f17:	48 b8 45 72 72 6f 72 	movabs $0x43203a726f727245,%rax
  401f1e:	3a 20 43 
  401f21:	48 ba 6c 69 65 6e 74 	movabs $0x6e7520746e65696c,%rdx
  401f28:	20 75 6e 
  401f2b:	49 89 07             	mov    %rax,(%r15)
  401f2e:	49 89 57 08          	mov    %rdx,0x8(%r15)
  401f32:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
  401f39:	74 6f 20 
  401f3c:	48 ba 72 65 61 64 20 	movabs $0x7269662064616572,%rdx
  401f43:	66 69 72 
  401f46:	49 89 47 10          	mov    %rax,0x10(%r15)
  401f4a:	49 89 57 18          	mov    %rdx,0x18(%r15)
  401f4e:	48 b8 73 74 20 68 65 	movabs $0x6564616568207473,%rax
  401f55:	61 64 65 
  401f58:	48 ba 72 20 66 72 6f 	movabs $0x73206d6f72662072,%rdx
  401f5f:	6d 20 73 
  401f62:	49 89 47 20          	mov    %rax,0x20(%r15)
  401f66:	49 89 57 28          	mov    %rdx,0x28(%r15)
  401f6a:	41 c7 47 30 65 72 76 	movl   $0x65767265,0x30(%r15)
  401f71:	65 
  401f72:	66 41 c7 47 34 72 00 	movw   $0x72,0x34(%r15)
  401f79:	44 89 e7             	mov    %r12d,%edi
  401f7c:	e8 7f ec ff ff       	callq  400c00 <close@plt>
  401f81:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  401f86:	e9 9e 00 00 00       	jmpq   402029 <submitr+0x4c1>
  401f8b:	ba 00 20 00 00       	mov    $0x2000,%edx
  401f90:	48 8d b4 24 40 60 00 	lea    0x6040(%rsp),%rsi
  401f97:	00 
  401f98:	48 8d bc 24 40 80 00 	lea    0x8040(%rsp),%rdi
  401f9f:	00 
  401fa0:	e8 f7 fa ff ff       	callq  401a9c <rio_readlineb>
  401fa5:	48 85 c0             	test   %rax,%rax
  401fa8:	0f 8e 8d 00 00 00    	jle    40203b <submitr+0x4d3>
  401fae:	80 bc 24 40 60 00 00 	cmpb   $0xd,0x6040(%rsp)
  401fb5:	0d 
  401fb6:	75 d3                	jne    401f8b <submitr+0x423>
  401fb8:	80 bc 24 41 60 00 00 	cmpb   $0xa,0x6041(%rsp)
  401fbf:	0a 
  401fc0:	75 c9                	jne    401f8b <submitr+0x423>
  401fc2:	80 bc 24 42 60 00 00 	cmpb   $0x0,0x6042(%rsp)
  401fc9:	00 
  401fca:	75 bf                	jne    401f8b <submitr+0x423>
  401fcc:	ba 00 20 00 00       	mov    $0x2000,%edx
  401fd1:	48 8d b4 24 40 60 00 	lea    0x6040(%rsp),%rsi
  401fd8:	00 
  401fd9:	48 8d bc 24 40 80 00 	lea    0x8040(%rsp),%rdi
  401fe0:	00 
  401fe1:	e8 b6 fa ff ff       	callq  401a9c <rio_readlineb>
  401fe6:	48 85 c0             	test   %rax,%rax
  401fe9:	0f 8e b3 00 00 00    	jle    4020a2 <submitr+0x53a>
  401fef:	48 8d b4 24 40 60 00 	lea    0x6040(%rsp),%rsi
  401ff6:	00 
  401ff7:	4c 89 ff             	mov    %r15,%rdi
  401ffa:	e8 a1 eb ff ff       	callq  400ba0 <strcpy@plt>
  401fff:	44 89 e7             	mov    %r12d,%edi
  402002:	e8 f9 eb ff ff       	callq  400c00 <close@plt>
  402007:	41 0f b6 07          	movzbl (%r15),%eax
  40200b:	83 e8 4f             	sub    $0x4f,%eax
  40200e:	75 0f                	jne    40201f <submitr+0x4b7>
  402010:	41 0f b6 47 01       	movzbl 0x1(%r15),%eax
  402015:	83 e8 4b             	sub    $0x4b,%eax
  402018:	75 05                	jne    40201f <submitr+0x4b7>
  40201a:	41 0f b6 47 02       	movzbl 0x2(%r15),%eax
  40201f:	85 c0                	test   %eax,%eax
  402021:	0f 95 c0             	setne  %al
  402024:	0f b6 c0             	movzbl %al,%eax
  402027:	f7 d8                	neg    %eax
  402029:	48 81 c4 68 a0 00 00 	add    $0xa068,%rsp
  402030:	5b                   	pop    %rbx
  402031:	5d                   	pop    %rbp
  402032:	41 5c                	pop    %r12
  402034:	41 5d                	pop    %r13
  402036:	41 5e                	pop    %r14
  402038:	41 5f                	pop    %r15
  40203a:	c3                   	retq   
  40203b:	48 b8 45 72 72 6f 72 	movabs $0x43203a726f727245,%rax
  402042:	3a 20 43 
  402045:	48 ba 6c 69 65 6e 74 	movabs $0x6e7520746e65696c,%rdx
  40204c:	20 75 6e 
  40204f:	49 89 07             	mov    %rax,(%r15)
  402052:	49 89 57 08          	mov    %rdx,0x8(%r15)
  402056:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
  40205d:	74 6f 20 
  402060:	48 ba 72 65 61 64 20 	movabs $0x6165682064616572,%rdx
  402067:	68 65 61 
  40206a:	49 89 47 10          	mov    %rax,0x10(%r15)
  40206e:	49 89 57 18          	mov    %rdx,0x18(%r15)
  402072:	48 b8 64 65 72 73 20 	movabs $0x6f72662073726564,%rax
  402079:	66 72 6f 
  40207c:	48 ba 6d 20 73 65 72 	movabs $0x726576726573206d,%rdx
  402083:	76 65 72 
  402086:	49 89 47 20          	mov    %rax,0x20(%r15)
  40208a:	49 89 57 28          	mov    %rdx,0x28(%r15)
  40208e:	41 c6 47 30 00       	movb   $0x0,0x30(%r15)
  402093:	44 89 e7             	mov    %r12d,%edi
  402096:	e8 65 eb ff ff       	callq  400c00 <close@plt>
  40209b:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  4020a0:	eb 87                	jmp    402029 <submitr+0x4c1>
  4020a2:	48 b8 45 72 72 6f 72 	movabs $0x43203a726f727245,%rax
  4020a9:	3a 20 43 
  4020ac:	48 ba 6c 69 65 6e 74 	movabs $0x6e7520746e65696c,%rdx
  4020b3:	20 75 6e 
  4020b6:	49 89 07             	mov    %rax,(%r15)
  4020b9:	49 89 57 08          	mov    %rdx,0x8(%r15)
  4020bd:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
  4020c4:	74 6f 20 
  4020c7:	48 ba 72 65 61 64 20 	movabs $0x6174732064616572,%rdx
  4020ce:	73 74 61 
  4020d1:	49 89 47 10          	mov    %rax,0x10(%r15)
  4020d5:	49 89 57 18          	mov    %rdx,0x18(%r15)
  4020d9:	48 b8 74 75 73 20 6d 	movabs $0x7373656d20737574,%rax
  4020e0:	65 73 73 
  4020e3:	48 ba 61 67 65 20 66 	movabs $0x6d6f726620656761,%rdx
  4020ea:	72 6f 6d 
  4020ed:	49 89 47 20          	mov    %rax,0x20(%r15)
  4020f1:	49 89 57 28          	mov    %rdx,0x28(%r15)
  4020f5:	48 b8 20 73 65 72 76 	movabs $0x72657672657320,%rax
  4020fc:	65 72 00 
  4020ff:	49 89 47 30          	mov    %rax,0x30(%r15)
  402103:	44 89 e7             	mov    %r12d,%edi
  402106:	e8 f5 ea ff ff       	callq  400c00 <close@plt>
  40210b:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  402110:	e9 14 ff ff ff       	jmpq   402029 <submitr+0x4c1>
  402115:	48 b8 45 72 72 6f 72 	movabs $0x43203a726f727245,%rax
  40211c:	3a 20 43 
  40211f:	48 ba 6c 69 65 6e 74 	movabs $0x6e7520746e65696c,%rdx
  402126:	20 75 6e 
  402129:	49 89 07             	mov    %rax,(%r15)
  40212c:	49 89 57 08          	mov    %rdx,0x8(%r15)
  402130:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
  402137:	74 6f 20 
  40213a:	48 ba 77 72 69 74 65 	movabs $0x6f74206574697277,%rdx
  402141:	20 74 6f 
  402144:	49 89 47 10          	mov    %rax,0x10(%r15)
  402148:	49 89 57 18          	mov    %rdx,0x18(%r15)
  40214c:	48 b8 20 74 68 65 20 	movabs $0x7265732065687420,%rax
  402153:	73 65 72 
  402156:	49 89 47 20          	mov    %rax,0x20(%r15)
  40215a:	41 c7 47 28 76 65 72 	movl   $0x726576,0x28(%r15)
  402161:	00 
  402162:	44 89 e7             	mov    %r12d,%edi
  402165:	e8 96 ea ff ff       	callq  400c00 <close@plt>
  40216a:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  40216f:	e9 b5 fe ff ff       	jmpq   402029 <submitr+0x4c1>
  402174:	48 b8 45 72 72 6f 72 	movabs $0x52203a726f727245,%rax
  40217b:	3a 20 52 
  40217e:	48 ba 65 73 75 6c 74 	movabs $0x747320746c757365,%rdx
  402185:	20 73 74 
  402188:	49 89 07             	mov    %rax,(%r15)
  40218b:	49 89 57 08          	mov    %rdx,0x8(%r15)
  40218f:	48 b8 72 69 6e 67 20 	movabs $0x6e6f6320676e6972,%rax
  402196:	63 6f 6e 
  402199:	48 ba 74 61 69 6e 73 	movabs $0x6e6120736e696174,%rdx
  4021a0:	20 61 6e 
  4021a3:	49 89 47 10          	mov    %rax,0x10(%r15)
  4021a7:	49 89 57 18          	mov    %rdx,0x18(%r15)
  4021ab:	48 b8 20 69 6c 6c 65 	movabs $0x6c6167656c6c6920,%rax
  4021b2:	67 61 6c 
  4021b5:	48 ba 20 6f 72 20 75 	movabs $0x72706e7520726f20,%rdx
  4021bc:	6e 70 72 
  4021bf:	49 89 47 20          	mov    %rax,0x20(%r15)
  4021c3:	49 89 57 28          	mov    %rdx,0x28(%r15)
  4021c7:	48 b8 69 6e 74 61 62 	movabs $0x20656c6261746e69,%rax
  4021ce:	6c 65 20 
  4021d1:	48 ba 63 68 61 72 61 	movabs $0x6574636172616863,%rdx
  4021d8:	63 74 65 
  4021db:	49 89 47 30          	mov    %rax,0x30(%r15)
  4021df:	49 89 57 38          	mov    %rdx,0x38(%r15)
  4021e3:	66 41 c7 47 40 72 2e 	movw   $0x2e72,0x40(%r15)
  4021ea:	41 c6 47 42 00       	movb   $0x0,0x42(%r15)
  4021ef:	44 89 e7             	mov    %r12d,%edi
  4021f2:	e8 09 ea ff ff       	callq  400c00 <close@plt>
  4021f7:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  4021fc:	e9 28 fe ff ff       	jmpq   402029 <submitr+0x4c1>
  402201:	48 83 ec 08          	sub    $0x8,%rsp
  402205:	48 8d 84 24 48 40 00 	lea    0x4048(%rsp),%rax
  40220c:	00 
  40220d:	50                   	push   %rax
  40220e:	4c 8b 4c 24 20       	mov    0x20(%rsp),%r9
  402213:	4c 8b 44 24 28       	mov    0x28(%rsp),%r8
  402218:	48 8b 4c 24 18       	mov    0x18(%rsp),%rcx
  40221d:	48 8b 54 24 10       	mov    0x10(%rsp),%rdx
  402222:	be 98 30 40 00       	mov    $0x403098,%esi
  402227:	48 8d bc 24 50 60 00 	lea    0x6050(%rsp),%rdi
  40222e:	00 
  40222f:	b8 00 00 00 00       	mov    $0x0,%eax
  402234:	e8 a7 ea ff ff       	callq  400ce0 <sprintf@plt>
  402239:	48 8d bc 24 50 60 00 	lea    0x6050(%rsp),%rdi
  402240:	00 
  402241:	e8 8a e9 ff ff       	callq  400bd0 <strlen@plt>
  402246:	48 89 c3             	mov    %rax,%rbx
  402249:	48 83 c4 10          	add    $0x10,%rsp
  40224d:	48 8d ac 24 40 60 00 	lea    0x6040(%rsp),%rbp
  402254:	00 
  402255:	41 bd 00 00 00 00    	mov    $0x0,%r13d
  40225b:	48 85 c0             	test   %rax,%rax
  40225e:	0f 85 8d fc ff ff    	jne    401ef1 <submitr+0x389>
  402264:	44 89 a4 24 40 80 00 	mov    %r12d,0x8040(%rsp)
  40226b:	00 
  40226c:	c7 84 24 44 80 00 00 	movl   $0x0,0x8044(%rsp)
  402273:	00 00 00 00 
  402277:	48 8d 84 24 50 80 00 	lea    0x8050(%rsp),%rax
  40227e:	00 
  40227f:	48 89 84 24 48 80 00 	mov    %rax,0x8048(%rsp)
  402286:	00 
  402287:	ba 00 20 00 00       	mov    $0x2000,%edx
  40228c:	48 8d b4 24 40 60 00 	lea    0x6040(%rsp),%rsi
  402293:	00 
  402294:	48 8d bc 24 40 80 00 	lea    0x8040(%rsp),%rdi
  40229b:	00 
  40229c:	e8 fb f7 ff ff       	callq  401a9c <rio_readlineb>
  4022a1:	48 85 c0             	test   %rax,%rax
  4022a4:	0f 8e 6d fc ff ff    	jle    401f17 <submitr+0x3af>
  4022aa:	4c 8d 44 24 30       	lea    0x30(%rsp),%r8
  4022af:	48 8d 8c 24 3c 20 00 	lea    0x203c(%rsp),%rcx
  4022b6:	00 
  4022b7:	48 8d 94 24 40 20 00 	lea    0x2040(%rsp),%rdx
  4022be:	00 
  4022bf:	be 1f 31 40 00       	mov    $0x40311f,%esi
  4022c4:	48 8d bc 24 40 60 00 	lea    0x6040(%rsp),%rdi
  4022cb:	00 
  4022cc:	b8 00 00 00 00       	mov    $0x0,%eax
  4022d1:	e8 ca e9 ff ff       	callq  400ca0 <__isoc99_sscanf@plt>
  4022d6:	8b 94 24 3c 20 00 00 	mov    0x203c(%rsp),%edx
  4022dd:	81 fa c8 00 00 00    	cmp    $0xc8,%edx
  4022e3:	0f 84 c5 fc ff ff    	je     401fae <submitr+0x446>
  4022e9:	48 8d 4c 24 30       	lea    0x30(%rsp),%rcx
  4022ee:	be 68 30 40 00       	mov    $0x403068,%esi
  4022f3:	4c 89 ff             	mov    %r15,%rdi
  4022f6:	b8 00 00 00 00       	mov    $0x0,%eax
  4022fb:	e8 e0 e9 ff ff       	callq  400ce0 <sprintf@plt>
  402300:	44 89 e7             	mov    %r12d,%edi
  402303:	e8 f8 e8 ff ff       	callq  400c00 <close@plt>
  402308:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  40230d:	e9 17 fd ff ff       	jmpq   402029 <submitr+0x4c1>

0000000000402312 <init_timeout>:
  402312:	85 ff                	test   %edi,%edi
  402314:	75 01                	jne    402317 <init_timeout+0x5>
  402316:	c3                   	retq   
  402317:	53                   	push   %rbx
  402318:	89 fb                	mov    %edi,%ebx
  40231a:	be 73 1a 40 00       	mov    $0x401a73,%esi
  40231f:	bf 0e 00 00 00       	mov    $0xe,%edi
  402324:	e8 17 e9 ff ff       	callq  400c40 <signal@plt>
  402329:	85 db                	test   %ebx,%ebx
  40232b:	bf 00 00 00 00       	mov    $0x0,%edi
  402330:	0f 49 fb             	cmovns %ebx,%edi
  402333:	e8 b8 e8 ff ff       	callq  400bf0 <alarm@plt>
  402338:	5b                   	pop    %rbx
  402339:	c3                   	retq   

000000000040233a <init_driver>:
  40233a:	55                   	push   %rbp
  40233b:	53                   	push   %rbx
  40233c:	48 83 ec 18          	sub    $0x18,%rsp
  402340:	48 89 fd             	mov    %rdi,%rbp
  402343:	be 01 00 00 00       	mov    $0x1,%esi
  402348:	bf 0d 00 00 00       	mov    $0xd,%edi
  40234d:	e8 ee e8 ff ff       	callq  400c40 <signal@plt>
  402352:	be 01 00 00 00       	mov    $0x1,%esi
  402357:	bf 1d 00 00 00       	mov    $0x1d,%edi
  40235c:	e8 df e8 ff ff       	callq  400c40 <signal@plt>
  402361:	be 01 00 00 00       	mov    $0x1,%esi
  402366:	bf 1d 00 00 00       	mov    $0x1d,%edi
  40236b:	e8 d0 e8 ff ff       	callq  400c40 <signal@plt>
  402370:	ba 00 00 00 00       	mov    $0x0,%edx
  402375:	be 01 00 00 00       	mov    $0x1,%esi
  40237a:	bf 02 00 00 00       	mov    $0x2,%edi
  40237f:	e8 ac e9 ff ff       	callq  400d30 <socket@plt>
  402384:	85 c0                	test   %eax,%eax
  402386:	78 7c                	js     402404 <init_driver+0xca>
  402388:	89 c3                	mov    %eax,%ebx
  40238a:	bf 30 31 40 00       	mov    $0x403130,%edi
  40238f:	e8 bc e8 ff ff       	callq  400c50 <gethostbyname@plt>
  402394:	48 85 c0             	test   %rax,%rax
  402397:	0f 84 b3 00 00 00    	je     402450 <init_driver+0x116>
  40239d:	48 c7 04 24 00 00 00 	movq   $0x0,(%rsp)
  4023a4:	00 
  4023a5:	48 c7 44 24 08 00 00 	movq   $0x0,0x8(%rsp)
  4023ac:	00 00 
  4023ae:	66 c7 04 24 02 00    	movw   $0x2,(%rsp)
  4023b4:	48 63 50 14          	movslq 0x14(%rax),%rdx
  4023b8:	48 8b 40 18          	mov    0x18(%rax),%rax
  4023bc:	48 8b 30             	mov    (%rax),%rsi
  4023bf:	48 8d 7c 24 04       	lea    0x4(%rsp),%rdi
  4023c4:	e8 e7 e8 ff ff       	callq  400cb0 <memmove@plt>
  4023c9:	66 c7 44 24 02 3b 6e 	movw   $0x6e3b,0x2(%rsp)
  4023d0:	ba 10 00 00 00       	mov    $0x10,%edx
  4023d5:	48 89 e6             	mov    %rsp,%rsi
  4023d8:	89 df                	mov    %ebx,%edi
  4023da:	e8 21 e9 ff ff       	callq  400d00 <connect@plt>
  4023df:	85 c0                	test   %eax,%eax
  4023e1:	0f 88 d1 00 00 00    	js     4024b8 <init_driver+0x17e>
  4023e7:	89 df                	mov    %ebx,%edi
  4023e9:	e8 12 e8 ff ff       	callq  400c00 <close@plt>
  4023ee:	66 c7 45 00 4f 4b    	movw   $0x4b4f,0x0(%rbp)
  4023f4:	c6 45 02 00          	movb   $0x0,0x2(%rbp)
  4023f8:	b8 00 00 00 00       	mov    $0x0,%eax
  4023fd:	48 83 c4 18          	add    $0x18,%rsp
  402401:	5b                   	pop    %rbx
  402402:	5d                   	pop    %rbp
  402403:	c3                   	retq   
  402404:	48 b8 45 72 72 6f 72 	movabs $0x43203a726f727245,%rax
  40240b:	3a 20 43 
  40240e:	48 ba 6c 69 65 6e 74 	movabs $0x6e7520746e65696c,%rdx
  402415:	20 75 6e 
  402418:	48 89 45 00          	mov    %rax,0x0(%rbp)
  40241c:	48 89 55 08          	mov    %rdx,0x8(%rbp)
  402420:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
  402427:	74 6f 20 
  40242a:	48 ba 63 72 65 61 74 	movabs $0x7320657461657263,%rdx
  402431:	65 20 73 
  402434:	48 89 45 10          	mov    %rax,0x10(%rbp)
  402438:	48 89 55 18          	mov    %rdx,0x18(%rbp)
  40243c:	c7 45 20 6f 63 6b 65 	movl   $0x656b636f,0x20(%rbp)
  402443:	66 c7 45 24 74 00    	movw   $0x74,0x24(%rbp)
  402449:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  40244e:	eb ad                	jmp    4023fd <init_driver+0xc3>
  402450:	48 b8 45 72 72 6f 72 	movabs $0x44203a726f727245,%rax
  402457:	3a 20 44 
  40245a:	48 ba 4e 53 20 69 73 	movabs $0x6e7520736920534e,%rdx
  402461:	20 75 6e 
  402464:	48 89 45 00          	mov    %rax,0x0(%rbp)
  402468:	48 89 55 08          	mov    %rdx,0x8(%rbp)
  40246c:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
  402473:	74 6f 20 
  402476:	48 ba 72 65 73 6f 6c 	movabs $0x2065766c6f736572,%rdx
  40247d:	76 65 20 
  402480:	48 89 45 10          	mov    %rax,0x10(%rbp)
  402484:	48 89 55 18          	mov    %rdx,0x18(%rbp)
  402488:	48 b8 73 65 72 76 65 	movabs $0x6120726576726573,%rax
  40248f:	72 20 61 
  402492:	48 89 45 20          	mov    %rax,0x20(%rbp)
  402496:	c7 45 28 64 64 72 65 	movl   $0x65726464,0x28(%rbp)
  40249d:	66 c7 45 2c 73 73    	movw   $0x7373,0x2c(%rbp)
  4024a3:	c6 45 2e 00          	movb   $0x0,0x2e(%rbp)
  4024a7:	89 df                	mov    %ebx,%edi
  4024a9:	e8 52 e7 ff ff       	callq  400c00 <close@plt>
  4024ae:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  4024b3:	e9 45 ff ff ff       	jmpq   4023fd <init_driver+0xc3>
  4024b8:	ba 30 31 40 00       	mov    $0x403130,%edx
  4024bd:	be f0 30 40 00       	mov    $0x4030f0,%esi
  4024c2:	48 89 ef             	mov    %rbp,%rdi
  4024c5:	b8 00 00 00 00       	mov    $0x0,%eax
  4024ca:	e8 11 e8 ff ff       	callq  400ce0 <sprintf@plt>
  4024cf:	89 df                	mov    %ebx,%edi
  4024d1:	e8 2a e7 ff ff       	callq  400c00 <close@plt>
  4024d6:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  4024db:	e9 1d ff ff ff       	jmpq   4023fd <init_driver+0xc3>

00000000004024e0 <driver_post>:
  4024e0:	53                   	push   %rbx
  4024e1:	4c 89 c3             	mov    %r8,%rbx
  4024e4:	85 c9                	test   %ecx,%ecx
  4024e6:	75 17                	jne    4024ff <driver_post+0x1f>
  4024e8:	48 85 ff             	test   %rdi,%rdi
  4024eb:	74 05                	je     4024f2 <driver_post+0x12>
  4024ed:	80 3f 00             	cmpb   $0x0,(%rdi)
  4024f0:	75 2f                	jne    402521 <driver_post+0x41>
  4024f2:	66 c7 03 4f 4b       	movw   $0x4b4f,(%rbx)
  4024f7:	c6 43 02 00          	movb   $0x0,0x2(%rbx)
  4024fb:	89 c8                	mov    %ecx,%eax
  4024fd:	5b                   	pop    %rbx
  4024fe:	c3                   	retq   
  4024ff:	48 89 d6             	mov    %rdx,%rsi
  402502:	bf 43 31 40 00       	mov    $0x403143,%edi
  402507:	b8 00 00 00 00       	mov    $0x0,%eax
  40250c:	e8 cf e6 ff ff       	callq  400be0 <printf@plt>
  402511:	66 c7 03 4f 4b       	movw   $0x4b4f,(%rbx)
  402516:	c6 43 02 00          	movb   $0x0,0x2(%rbx)
  40251a:	b8 00 00 00 00       	mov    $0x0,%eax
  40251f:	eb dc                	jmp    4024fd <driver_post+0x1d>
  402521:	41 50                	push   %r8
  402523:	52                   	push   %rdx
  402524:	41 b9 5a 31 40 00    	mov    $0x40315a,%r9d
  40252a:	49 89 f0             	mov    %rsi,%r8
  40252d:	48 89 f9             	mov    %rdi,%rcx
  402530:	ba 5e 31 40 00       	mov    $0x40315e,%edx
  402535:	be 6e 3b 00 00       	mov    $0x3b6e,%esi
  40253a:	bf 30 31 40 00       	mov    $0x403130,%edi
  40253f:	e8 24 f6 ff ff       	callq  401b68 <submitr>
  402544:	48 83 c4 10          	add    $0x10,%rsp
  402548:	eb b3                	jmp    4024fd <driver_post+0x1d>
  40254a:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)

Disassembly of section .fini:

00000000004025c4 <_fini>:
  4025c4:	48 83 ec 08          	sub    $0x8,%rsp
  4025c8:	48 83 c4 08          	add    $0x8,%rsp
  4025cc:	c3                   	retq   
