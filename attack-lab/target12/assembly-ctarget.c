
ctarget:     file format elf64-x86-64


Disassembly of section .init:

0000000000400bc8 <_init>:
  400bc8:	48 83 ec 08          	sub    $0x8,%rsp
  400bcc:	48 8b 05 25 34 20 00 	mov    0x203425(%rip),%rax        # 603ff8 <__gmon_start__>
  400bd3:	48 85 c0             	test   %rax,%rax
  400bd6:	74 05                	je     400bdd <_init+0x15>
  400bd8:	e8 33 01 00 00       	callq  400d10 <__gmon_start__@plt>
  400bdd:	48 83 c4 08          	add    $0x8,%rsp
  400be1:	c3                   	retq   

Disassembly of section .plt:

0000000000400bf0 <.plt>:
  400bf0:	ff 35 12 34 20 00    	pushq  0x203412(%rip)        # 604008 <_GLOBAL_OFFSET_TABLE_+0x8>
  400bf6:	ff 25 14 34 20 00    	jmpq   *0x203414(%rip)        # 604010 <_GLOBAL_OFFSET_TABLE_+0x10>
  400bfc:	0f 1f 40 00          	nopl   0x0(%rax)

0000000000400c00 <strcasecmp@plt>:
  400c00:	ff 25 12 34 20 00    	jmpq   *0x203412(%rip)        # 604018 <strcasecmp@GLIBC_2.2.5>
  400c06:	68 00 00 00 00       	pushq  $0x0
  400c0b:	e9 e0 ff ff ff       	jmpq   400bf0 <.plt>

0000000000400c10 <__errno_location@plt>:
  400c10:	ff 25 0a 34 20 00    	jmpq   *0x20340a(%rip)        # 604020 <__errno_location@GLIBC_2.2.5>
  400c16:	68 01 00 00 00       	pushq  $0x1
  400c1b:	e9 d0 ff ff ff       	jmpq   400bf0 <.plt>

0000000000400c20 <srandom@plt>:
  400c20:	ff 25 02 34 20 00    	jmpq   *0x203402(%rip)        # 604028 <srandom@GLIBC_2.2.5>
  400c26:	68 02 00 00 00       	pushq  $0x2
  400c2b:	e9 c0 ff ff ff       	jmpq   400bf0 <.plt>

0000000000400c30 <strncmp@plt>:
  400c30:	ff 25 fa 33 20 00    	jmpq   *0x2033fa(%rip)        # 604030 <strncmp@GLIBC_2.2.5>
  400c36:	68 03 00 00 00       	pushq  $0x3
  400c3b:	e9 b0 ff ff ff       	jmpq   400bf0 <.plt>

0000000000400c40 <strcpy@plt>:
  400c40:	ff 25 f2 33 20 00    	jmpq   *0x2033f2(%rip)        # 604038 <strcpy@GLIBC_2.2.5>
  400c46:	68 04 00 00 00       	pushq  $0x4
  400c4b:	e9 a0 ff ff ff       	jmpq   400bf0 <.plt>

0000000000400c50 <puts@plt>:
  400c50:	ff 25 ea 33 20 00    	jmpq   *0x2033ea(%rip)        # 604040 <puts@GLIBC_2.2.5>
  400c56:	68 05 00 00 00       	pushq  $0x5
  400c5b:	e9 90 ff ff ff       	jmpq   400bf0 <.plt>

0000000000400c60 <write@plt>:
  400c60:	ff 25 e2 33 20 00    	jmpq   *0x2033e2(%rip)        # 604048 <write@GLIBC_2.2.5>
  400c66:	68 06 00 00 00       	pushq  $0x6
  400c6b:	e9 80 ff ff ff       	jmpq   400bf0 <.plt>

0000000000400c70 <mmap@plt>:
  400c70:	ff 25 da 33 20 00    	jmpq   *0x2033da(%rip)        # 604050 <mmap@GLIBC_2.2.5>
  400c76:	68 07 00 00 00       	pushq  $0x7
  400c7b:	e9 70 ff ff ff       	jmpq   400bf0 <.plt>

0000000000400c80 <printf@plt>:
  400c80:	ff 25 d2 33 20 00    	jmpq   *0x2033d2(%rip)        # 604058 <printf@GLIBC_2.2.5>
  400c86:	68 08 00 00 00       	pushq  $0x8
  400c8b:	e9 60 ff ff ff       	jmpq   400bf0 <.plt>

0000000000400c90 <memset@plt>:
  400c90:	ff 25 ca 33 20 00    	jmpq   *0x2033ca(%rip)        # 604060 <memset@GLIBC_2.2.5>
  400c96:	68 09 00 00 00       	pushq  $0x9
  400c9b:	e9 50 ff ff ff       	jmpq   400bf0 <.plt>

0000000000400ca0 <alarm@plt>:
  400ca0:	ff 25 c2 33 20 00    	jmpq   *0x2033c2(%rip)        # 604068 <alarm@GLIBC_2.2.5>
  400ca6:	68 0a 00 00 00       	pushq  $0xa
  400cab:	e9 40 ff ff ff       	jmpq   400bf0 <.plt>

0000000000400cb0 <close@plt>:
  400cb0:	ff 25 ba 33 20 00    	jmpq   *0x2033ba(%rip)        # 604070 <close@GLIBC_2.2.5>
  400cb6:	68 0b 00 00 00       	pushq  $0xb
  400cbb:	e9 30 ff ff ff       	jmpq   400bf0 <.plt>

0000000000400cc0 <read@plt>:
  400cc0:	ff 25 b2 33 20 00    	jmpq   *0x2033b2(%rip)        # 604078 <read@GLIBC_2.2.5>
  400cc6:	68 0c 00 00 00       	pushq  $0xc
  400ccb:	e9 20 ff ff ff       	jmpq   400bf0 <.plt>

0000000000400cd0 <__libc_start_main@plt>:
  400cd0:	ff 25 aa 33 20 00    	jmpq   *0x2033aa(%rip)        # 604080 <__libc_start_main@GLIBC_2.2.5>
  400cd6:	68 0d 00 00 00       	pushq  $0xd
  400cdb:	e9 10 ff ff ff       	jmpq   400bf0 <.plt>

0000000000400ce0 <signal@plt>:
  400ce0:	ff 25 a2 33 20 00    	jmpq   *0x2033a2(%rip)        # 604088 <signal@GLIBC_2.2.5>
  400ce6:	68 0e 00 00 00       	pushq  $0xe
  400ceb:	e9 00 ff ff ff       	jmpq   400bf0 <.plt>

0000000000400cf0 <gethostbyname@plt>:
  400cf0:	ff 25 9a 33 20 00    	jmpq   *0x20339a(%rip)        # 604090 <gethostbyname@GLIBC_2.2.5>
  400cf6:	68 0f 00 00 00       	pushq  $0xf
  400cfb:	e9 f0 fe ff ff       	jmpq   400bf0 <.plt>

0000000000400d00 <fprintf@plt>:
  400d00:	ff 25 92 33 20 00    	jmpq   *0x203392(%rip)        # 604098 <fprintf@GLIBC_2.2.5>
  400d06:	68 10 00 00 00       	pushq  $0x10
  400d0b:	e9 e0 fe ff ff       	jmpq   400bf0 <.plt>

0000000000400d10 <__gmon_start__@plt>:
  400d10:	ff 25 8a 33 20 00    	jmpq   *0x20338a(%rip)        # 6040a0 <__gmon_start__>
  400d16:	68 11 00 00 00       	pushq  $0x11
  400d1b:	e9 d0 fe ff ff       	jmpq   400bf0 <.plt>

0000000000400d20 <strtol@plt>:
  400d20:	ff 25 82 33 20 00    	jmpq   *0x203382(%rip)        # 6040a8 <strtol@GLIBC_2.2.5>
  400d26:	68 12 00 00 00       	pushq  $0x12
  400d2b:	e9 c0 fe ff ff       	jmpq   400bf0 <.plt>

0000000000400d30 <memcpy@plt>:
  400d30:	ff 25 7a 33 20 00    	jmpq   *0x20337a(%rip)        # 6040b0 <memcpy@GLIBC_2.14>
  400d36:	68 13 00 00 00       	pushq  $0x13
  400d3b:	e9 b0 fe ff ff       	jmpq   400bf0 <.plt>

0000000000400d40 <time@plt>:
  400d40:	ff 25 72 33 20 00    	jmpq   *0x203372(%rip)        # 6040b8 <time@GLIBC_2.2.5>
  400d46:	68 14 00 00 00       	pushq  $0x14
  400d4b:	e9 a0 fe ff ff       	jmpq   400bf0 <.plt>

0000000000400d50 <random@plt>:
  400d50:	ff 25 6a 33 20 00    	jmpq   *0x20336a(%rip)        # 6040c0 <random@GLIBC_2.2.5>
  400d56:	68 15 00 00 00       	pushq  $0x15
  400d5b:	e9 90 fe ff ff       	jmpq   400bf0 <.plt>

0000000000400d60 <_IO_getc@plt>:
  400d60:	ff 25 62 33 20 00    	jmpq   *0x203362(%rip)        # 6040c8 <_IO_getc@GLIBC_2.2.5>
  400d66:	68 16 00 00 00       	pushq  $0x16
  400d6b:	e9 80 fe ff ff       	jmpq   400bf0 <.plt>

0000000000400d70 <__isoc99_sscanf@plt>:
  400d70:	ff 25 5a 33 20 00    	jmpq   *0x20335a(%rip)        # 6040d0 <__isoc99_sscanf@GLIBC_2.7>
  400d76:	68 17 00 00 00       	pushq  $0x17
  400d7b:	e9 70 fe ff ff       	jmpq   400bf0 <.plt>

0000000000400d80 <munmap@plt>:
  400d80:	ff 25 52 33 20 00    	jmpq   *0x203352(%rip)        # 6040d8 <munmap@GLIBC_2.2.5>
  400d86:	68 18 00 00 00       	pushq  $0x18
  400d8b:	e9 60 fe ff ff       	jmpq   400bf0 <.plt>

0000000000400d90 <bcopy@plt>:
  400d90:	ff 25 4a 33 20 00    	jmpq   *0x20334a(%rip)        # 6040e0 <bcopy@GLIBC_2.2.5>
  400d96:	68 19 00 00 00       	pushq  $0x19
  400d9b:	e9 50 fe ff ff       	jmpq   400bf0 <.plt>

0000000000400da0 <fopen@plt>:
  400da0:	ff 25 42 33 20 00    	jmpq   *0x203342(%rip)        # 6040e8 <fopen@GLIBC_2.2.5>
  400da6:	68 1a 00 00 00       	pushq  $0x1a
  400dab:	e9 40 fe ff ff       	jmpq   400bf0 <.plt>

0000000000400db0 <getopt@plt>:
  400db0:	ff 25 3a 33 20 00    	jmpq   *0x20333a(%rip)        # 6040f0 <getopt@GLIBC_2.2.5>
  400db6:	68 1b 00 00 00       	pushq  $0x1b
  400dbb:	e9 30 fe ff ff       	jmpq   400bf0 <.plt>

0000000000400dc0 <strtoul@plt>:
  400dc0:	ff 25 32 33 20 00    	jmpq   *0x203332(%rip)        # 6040f8 <strtoul@GLIBC_2.2.5>
  400dc6:	68 1c 00 00 00       	pushq  $0x1c
  400dcb:	e9 20 fe ff ff       	jmpq   400bf0 <.plt>

0000000000400dd0 <gethostname@plt>:
  400dd0:	ff 25 2a 33 20 00    	jmpq   *0x20332a(%rip)        # 604100 <gethostname@GLIBC_2.2.5>
  400dd6:	68 1d 00 00 00       	pushq  $0x1d
  400ddb:	e9 10 fe ff ff       	jmpq   400bf0 <.plt>

0000000000400de0 <sprintf@plt>:
  400de0:	ff 25 22 33 20 00    	jmpq   *0x203322(%rip)        # 604108 <sprintf@GLIBC_2.2.5>
  400de6:	68 1e 00 00 00       	pushq  $0x1e
  400deb:	e9 00 fe ff ff       	jmpq   400bf0 <.plt>

0000000000400df0 <exit@plt>:
  400df0:	ff 25 1a 33 20 00    	jmpq   *0x20331a(%rip)        # 604110 <exit@GLIBC_2.2.5>
  400df6:	68 1f 00 00 00       	pushq  $0x1f
  400dfb:	e9 f0 fd ff ff       	jmpq   400bf0 <.plt>

0000000000400e00 <connect@plt>:
  400e00:	ff 25 12 33 20 00    	jmpq   *0x203312(%rip)        # 604118 <connect@GLIBC_2.2.5>
  400e06:	68 20 00 00 00       	pushq  $0x20
  400e0b:	e9 e0 fd ff ff       	jmpq   400bf0 <.plt>

0000000000400e10 <socket@plt>:
  400e10:	ff 25 0a 33 20 00    	jmpq   *0x20330a(%rip)        # 604120 <socket@GLIBC_2.2.5>
  400e16:	68 21 00 00 00       	pushq  $0x21
  400e1b:	e9 d0 fd ff ff       	jmpq   400bf0 <.plt>

Disassembly of section .text:

0000000000400e20 <_start>:
  400e20:	31 ed                	xor    %ebp,%ebp
  400e22:	49 89 d1             	mov    %rdx,%r9
  400e25:	5e                   	pop    %rsi
  400e26:	48 89 e2             	mov    %rsp,%rdx
  400e29:	48 83 e4 f0          	and    $0xfffffffffffffff0,%rsp
  400e2d:	50                   	push   %rax
  400e2e:	54                   	push   %rsp
  400e2f:	49 c7 c0 f0 2a 40 00 	mov    $0x402af0,%r8
  400e36:	48 c7 c1 80 2a 40 00 	mov    $0x402a80,%rcx
  400e3d:	48 c7 c7 e0 10 40 00 	mov    $0x4010e0,%rdi
  400e44:	e8 87 fe ff ff       	callq  400cd0 <__libc_start_main@plt>
  400e49:	f4                   	hlt    
  400e4a:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)

0000000000400e50 <deregister_tm_clones>:
  400e50:	b8 bf 44 60 00       	mov    $0x6044bf,%eax
  400e55:	55                   	push   %rbp
  400e56:	48 2d b8 44 60 00    	sub    $0x6044b8,%rax
  400e5c:	48 83 f8 0e          	cmp    $0xe,%rax
  400e60:	48 89 e5             	mov    %rsp,%rbp
  400e63:	77 02                	ja     400e67 <deregister_tm_clones+0x17>
  400e65:	5d                   	pop    %rbp
  400e66:	c3                   	retq   
  400e67:	b8 00 00 00 00       	mov    $0x0,%eax
  400e6c:	48 85 c0             	test   %rax,%rax
  400e6f:	74 f4                	je     400e65 <deregister_tm_clones+0x15>
  400e71:	5d                   	pop    %rbp
  400e72:	bf b8 44 60 00       	mov    $0x6044b8,%edi
  400e77:	ff e0                	jmpq   *%rax
  400e79:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

0000000000400e80 <register_tm_clones>:
  400e80:	b8 b8 44 60 00       	mov    $0x6044b8,%eax
  400e85:	55                   	push   %rbp
  400e86:	48 2d b8 44 60 00    	sub    $0x6044b8,%rax
  400e8c:	48 c1 f8 03          	sar    $0x3,%rax
  400e90:	48 89 e5             	mov    %rsp,%rbp
  400e93:	48 89 c2             	mov    %rax,%rdx
  400e96:	48 c1 ea 3f          	shr    $0x3f,%rdx
  400e9a:	48 01 d0             	add    %rdx,%rax
  400e9d:	48 d1 f8             	sar    %rax
  400ea0:	75 02                	jne    400ea4 <register_tm_clones+0x24>
  400ea2:	5d                   	pop    %rbp
  400ea3:	c3                   	retq   
  400ea4:	ba 00 00 00 00       	mov    $0x0,%edx
  400ea9:	48 85 d2             	test   %rdx,%rdx
  400eac:	74 f4                	je     400ea2 <register_tm_clones+0x22>
  400eae:	5d                   	pop    %rbp
  400eaf:	48 89 c6             	mov    %rax,%rsi
  400eb2:	bf b8 44 60 00       	mov    $0x6044b8,%edi
  400eb7:	ff e2                	jmpq   *%rdx
  400eb9:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

0000000000400ec0 <__do_global_dtors_aux>:
  400ec0:	80 3d 11 36 20 00 00 	cmpb   $0x0,0x203611(%rip)        # 6044d8 <completed.6355>
  400ec7:	75 11                	jne    400eda <__do_global_dtors_aux+0x1a>
  400ec9:	55                   	push   %rbp
  400eca:	48 89 e5             	mov    %rsp,%rbp
  400ecd:	e8 7e ff ff ff       	callq  400e50 <deregister_tm_clones>
  400ed2:	5d                   	pop    %rbp
  400ed3:	c6 05 fe 35 20 00 01 	movb   $0x1,0x2035fe(%rip)        # 6044d8 <completed.6355>
  400eda:	f3 c3                	repz retq 
  400edc:	0f 1f 40 00          	nopl   0x0(%rax)

0000000000400ee0 <frame_dummy>:
  400ee0:	48 83 3d 38 2f 20 00 	cmpq   $0x0,0x202f38(%rip)        # 603e20 <__JCR_END__>
  400ee7:	00 
  400ee8:	74 1e                	je     400f08 <frame_dummy+0x28>
  400eea:	b8 00 00 00 00       	mov    $0x0,%eax
  400eef:	48 85 c0             	test   %rax,%rax
  400ef2:	74 14                	je     400f08 <frame_dummy+0x28>
  400ef4:	55                   	push   %rbp
  400ef5:	bf 20 3e 60 00       	mov    $0x603e20,%edi
  400efa:	48 89 e5             	mov    %rsp,%rbp
  400efd:	ff d0                	callq  *%rax
  400eff:	5d                   	pop    %rbp
  400f00:	e9 7b ff ff ff       	jmpq   400e80 <register_tm_clones>
  400f05:	0f 1f 00             	nopl   (%rax)
  400f08:	e9 73 ff ff ff       	jmpq   400e80 <register_tm_clones>
  400f0d:	0f 1f 00             	nopl   (%rax)

0000000000400f10 <usage>:
  400f10:	48 83 ec 08          	sub    $0x8,%rsp
  400f14:	48 89 fe             	mov    %rdi,%rsi
  400f17:	83 3d ea 35 20 00 00 	cmpl   $0x0,0x2035ea(%rip)        # 604508 <is_checker>
  400f1e:	74 39                	je     400f59 <usage+0x49>
  400f20:	bf 10 2b 40 00       	mov    $0x402b10,%edi
  400f25:	b8 00 00 00 00       	mov    $0x0,%eax
  400f2a:	e8 51 fd ff ff       	callq  400c80 <printf@plt>
  400f2f:	bf 48 2b 40 00       	mov    $0x402b48,%edi
  400f34:	e8 17 fd ff ff       	callq  400c50 <puts@plt>
  400f39:	bf c0 2c 40 00       	mov    $0x402cc0,%edi
  400f3e:	e8 0d fd ff ff       	callq  400c50 <puts@plt>
  400f43:	bf 70 2b 40 00       	mov    $0x402b70,%edi
  400f48:	e8 03 fd ff ff       	callq  400c50 <puts@plt>
  400f4d:	bf da 2c 40 00       	mov    $0x402cda,%edi
  400f52:	e8 f9 fc ff ff       	callq  400c50 <puts@plt>
  400f57:	eb 2d                	jmp    400f86 <usage+0x76>
  400f59:	bf f6 2c 40 00       	mov    $0x402cf6,%edi
  400f5e:	b8 00 00 00 00       	mov    $0x0,%eax
  400f63:	e8 18 fd ff ff       	callq  400c80 <printf@plt>
  400f68:	bf 98 2b 40 00       	mov    $0x402b98,%edi
  400f6d:	e8 de fc ff ff       	callq  400c50 <puts@plt>
  400f72:	bf c0 2b 40 00       	mov    $0x402bc0,%edi
  400f77:	e8 d4 fc ff ff       	callq  400c50 <puts@plt>
  400f7c:	bf 14 2d 40 00       	mov    $0x402d14,%edi
  400f81:	e8 ca fc ff ff       	callq  400c50 <puts@plt>
  400f86:	bf 00 00 00 00       	mov    $0x0,%edi
  400f8b:	e8 60 fe ff ff       	callq  400df0 <exit@plt>

0000000000400f90 <initialize_target>:
  400f90:	55                   	push   %rbp
  400f91:	53                   	push   %rbx
  400f92:	48 81 ec 08 21 00 00 	sub    $0x2108,%rsp
  400f99:	89 f5                	mov    %esi,%ebp
  400f9b:	89 3d 57 35 20 00    	mov    %edi,0x203557(%rip)        # 6044f8 <check_level>
  400fa1:	8b 3d c1 31 20 00    	mov    0x2031c1(%rip),%edi        # 604168 <target_id>
  400fa7:	e8 a7 1a 00 00       	callq  402a53 <gencookie>
  400fac:	89 05 52 35 20 00    	mov    %eax,0x203552(%rip)        # 604504 <cookie>
  400fb2:	89 c7                	mov    %eax,%edi
  400fb4:	e8 9a 1a 00 00       	callq  402a53 <gencookie>
  400fb9:	89 05 41 35 20 00    	mov    %eax,0x203541(%rip)        # 604500 <authkey>
  400fbf:	8b 05 a3 31 20 00    	mov    0x2031a3(%rip),%eax        # 604168 <target_id>
  400fc5:	8d 78 01             	lea    0x1(%rax),%edi
  400fc8:	e8 53 fc ff ff       	callq  400c20 <srandom@plt>
  400fcd:	e8 7e fd ff ff       	callq  400d50 <random@plt>
  400fd2:	89 c7                	mov    %eax,%edi
  400fd4:	e8 ca 02 00 00       	callq  4012a3 <scramble>
  400fd9:	89 c3                	mov    %eax,%ebx
  400fdb:	85 ed                	test   %ebp,%ebp
  400fdd:	74 18                	je     400ff7 <initialize_target+0x67>
  400fdf:	bf 00 00 00 00       	mov    $0x0,%edi
  400fe4:	e8 57 fd ff ff       	callq  400d40 <time@plt>
  400fe9:	89 c7                	mov    %eax,%edi
  400feb:	e8 30 fc ff ff       	callq  400c20 <srandom@plt>
  400ff0:	e8 5b fd ff ff       	callq  400d50 <random@plt>
  400ff5:	eb 05                	jmp    400ffc <initialize_target+0x6c>
  400ff7:	b8 00 00 00 00       	mov    $0x0,%eax
  400ffc:	01 c3                	add    %eax,%ebx
  400ffe:	0f b7 db             	movzwl %bx,%ebx
  401001:	8d 04 dd 00 01 00 00 	lea    0x100(,%rbx,8),%eax
  401008:	89 c0                	mov    %eax,%eax
  40100a:	48 89 05 9f 34 20 00 	mov    %rax,0x20349f(%rip)        # 6044b0 <buf_offset>
  401011:	c6 05 2c 31 20 00 63 	movb   $0x63,0x20312c(%rip)        # 604144 <target_prefix>
  401018:	83 3d 89 34 20 00 00 	cmpl   $0x0,0x203489(%rip)        # 6044a8 <notify>
  40101f:	0f 84 b1 00 00 00    	je     4010d6 <initialize_target+0x146>
  401025:	83 3d dc 34 20 00 00 	cmpl   $0x0,0x2034dc(%rip)        # 604508 <is_checker>
  40102c:	0f 85 a4 00 00 00    	jne    4010d6 <initialize_target+0x146>
  401032:	be 00 01 00 00       	mov    $0x100,%esi
  401037:	48 89 e7             	mov    %rsp,%rdi
  40103a:	e8 91 fd ff ff       	callq  400dd0 <gethostname@plt>
  40103f:	85 c0                	test   %eax,%eax
  401041:	74 25                	je     401068 <initialize_target+0xd8>
  401043:	bf f0 2b 40 00       	mov    $0x402bf0,%edi
  401048:	e8 03 fc ff ff       	callq  400c50 <puts@plt>
  40104d:	bf 08 00 00 00       	mov    $0x8,%edi
  401052:	e8 99 fd ff ff       	callq  400df0 <exit@plt>
  401057:	48 89 e6             	mov    %rsp,%rsi
  40105a:	e8 a1 fb ff ff       	callq  400c00 <strcasecmp@plt>
  40105f:	85 c0                	test   %eax,%eax
  401061:	74 21                	je     401084 <initialize_target+0xf4>
  401063:	83 c3 01             	add    $0x1,%ebx
  401066:	eb 05                	jmp    40106d <initialize_target+0xdd>
  401068:	bb 00 00 00 00       	mov    $0x0,%ebx
  40106d:	48 63 c3             	movslq %ebx,%rax
  401070:	48 8b 3c c5 80 41 60 	mov    0x604180(,%rax,8),%rdi
  401077:	00 
  401078:	48 85 ff             	test   %rdi,%rdi
  40107b:	75 da                	jne    401057 <initialize_target+0xc7>
  40107d:	b8 00 00 00 00       	mov    $0x0,%eax
  401082:	eb 05                	jmp    401089 <initialize_target+0xf9>
  401084:	b8 01 00 00 00       	mov    $0x1,%eax
  401089:	85 c0                	test   %eax,%eax
  40108b:	75 17                	jne    4010a4 <initialize_target+0x114>
  40108d:	48 89 e6             	mov    %rsp,%rsi
  401090:	bf 28 2c 40 00       	mov    $0x402c28,%edi
  401095:	e8 e6 fb ff ff       	callq  400c80 <printf@plt>
  40109a:	bf 08 00 00 00       	mov    $0x8,%edi
  40109f:	e8 4c fd ff ff       	callq  400df0 <exit@plt>
  4010a4:	48 8d bc 24 00 01 00 	lea    0x100(%rsp),%rdi
  4010ab:	00 
  4010ac:	e8 39 17 00 00       	callq  4027ea <init_driver>
  4010b1:	85 c0                	test   %eax,%eax
  4010b3:	79 21                	jns    4010d6 <initialize_target+0x146>
  4010b5:	48 8d b4 24 00 01 00 	lea    0x100(%rsp),%rsi
  4010bc:	00 
  4010bd:	bf 68 2c 40 00       	mov    $0x402c68,%edi
  4010c2:	b8 00 00 00 00       	mov    $0x0,%eax
  4010c7:	e8 b4 fb ff ff       	callq  400c80 <printf@plt>
  4010cc:	bf 08 00 00 00       	mov    $0x8,%edi
  4010d1:	e8 1a fd ff ff       	callq  400df0 <exit@plt>
  4010d6:	48 81 c4 08 21 00 00 	add    $0x2108,%rsp
  4010dd:	5b                   	pop    %rbx
  4010de:	5d                   	pop    %rbp
  4010df:	c3                   	retq   

00000000004010e0 <main>:
  4010e0:	41 56                	push   %r14
  4010e2:	41 55                	push   %r13
  4010e4:	41 54                	push   %r12
  4010e6:	55                   	push   %rbp
  4010e7:	53                   	push   %rbx
  4010e8:	41 89 fc             	mov    %edi,%r12d
  4010eb:	48 89 f3             	mov    %rsi,%rbx
  4010ee:	be 11 1c 40 00       	mov    $0x401c11,%esi
  4010f3:	bf 0b 00 00 00       	mov    $0xb,%edi
  4010f8:	e8 e3 fb ff ff       	callq  400ce0 <signal@plt>
  4010fd:	be c3 1b 40 00       	mov    $0x401bc3,%esi
  401102:	bf 07 00 00 00       	mov    $0x7,%edi
  401107:	e8 d4 fb ff ff       	callq  400ce0 <signal@plt>
  40110c:	be 5f 1c 40 00       	mov    $0x401c5f,%esi
  401111:	bf 04 00 00 00       	mov    $0x4,%edi
  401116:	e8 c5 fb ff ff       	callq  400ce0 <signal@plt>
  40111b:	83 3d e6 33 20 00 00 	cmpl   $0x0,0x2033e6(%rip)        # 604508 <is_checker>
  401122:	74 20                	je     401144 <main+0x64>
  401124:	be ad 1c 40 00       	mov    $0x401cad,%esi
  401129:	bf 0e 00 00 00       	mov    $0xe,%edi
  40112e:	e8 ad fb ff ff       	callq  400ce0 <signal@plt>
  401133:	bf 05 00 00 00       	mov    $0x5,%edi
  401138:	e8 63 fb ff ff       	callq  400ca0 <alarm@plt>
  40113d:	bd 32 2d 40 00       	mov    $0x402d32,%ebp
  401142:	eb 05                	jmp    401149 <main+0x69>
  401144:	bd 2d 2d 40 00       	mov    $0x402d2d,%ebp
  401149:	48 8b 05 70 33 20 00 	mov    0x203370(%rip),%rax        # 6044c0 <stdin@@GLIBC_2.2.5>
  401150:	48 89 05 99 33 20 00 	mov    %rax,0x203399(%rip)        # 6044f0 <infile>
  401157:	41 bd 00 00 00 00    	mov    $0x0,%r13d
  40115d:	41 be 00 00 00 00    	mov    $0x0,%r14d
  401163:	e9 b9 00 00 00       	jmpq   401221 <main+0x141>
  401168:	83 e8 61             	sub    $0x61,%eax
  40116b:	3c 10                	cmp    $0x10,%al
  40116d:	0f 87 93 00 00 00    	ja     401206 <main+0x126>
  401173:	0f b6 c0             	movzbl %al,%eax
  401176:	ff 24 c5 78 2d 40 00 	jmpq   *0x402d78(,%rax,8)
  40117d:	48 8b 3b             	mov    (%rbx),%rdi
  401180:	e8 8b fd ff ff       	callq  400f10 <usage>
  401185:	be cd 30 40 00       	mov    $0x4030cd,%esi
  40118a:	48 8b 3d 37 33 20 00 	mov    0x203337(%rip),%rdi        # 6044c8 <optarg@@GLIBC_2.2.5>
  401191:	e8 0a fc ff ff       	callq  400da0 <fopen@plt>
  401196:	48 89 05 53 33 20 00 	mov    %rax,0x203353(%rip)        # 6044f0 <infile>
  40119d:	48 85 c0             	test   %rax,%rax
  4011a0:	75 7f                	jne    401221 <main+0x141>
  4011a2:	48 8b 15 1f 33 20 00 	mov    0x20331f(%rip),%rdx        # 6044c8 <optarg@@GLIBC_2.2.5>
  4011a9:	be 3a 2d 40 00       	mov    $0x402d3a,%esi
  4011ae:	48 8b 3d 1b 33 20 00 	mov    0x20331b(%rip),%rdi        # 6044d0 <stderr@@GLIBC_2.2.5>
  4011b5:	e8 46 fb ff ff       	callq  400d00 <fprintf@plt>
  4011ba:	b8 01 00 00 00       	mov    $0x1,%eax
  4011bf:	e9 d6 00 00 00       	jmpq   40129a <main+0x1ba>
  4011c4:	ba 10 00 00 00       	mov    $0x10,%edx
  4011c9:	be 00 00 00 00       	mov    $0x0,%esi
  4011ce:	48 8b 3d f3 32 20 00 	mov    0x2032f3(%rip),%rdi        # 6044c8 <optarg@@GLIBC_2.2.5>
  4011d5:	e8 e6 fb ff ff       	callq  400dc0 <strtoul@plt>
  4011da:	41 89 c6             	mov    %eax,%r14d
  4011dd:	eb 42                	jmp    401221 <main+0x141>
  4011df:	ba 0a 00 00 00       	mov    $0xa,%edx
  4011e4:	be 00 00 00 00       	mov    $0x0,%esi
  4011e9:	48 8b 3d d8 32 20 00 	mov    0x2032d8(%rip),%rdi        # 6044c8 <optarg@@GLIBC_2.2.5>
  4011f0:	e8 2b fb ff ff       	callq  400d20 <strtol@plt>
  4011f5:	41 89 c5             	mov    %eax,%r13d
  4011f8:	eb 27                	jmp    401221 <main+0x141>
  4011fa:	c7 05 a4 32 20 00 00 	movl   $0x0,0x2032a4(%rip)        # 6044a8 <notify>
  401201:	00 00 00 
  401204:	eb 1b                	jmp    401221 <main+0x141>
  401206:	40 0f be f6          	movsbl %sil,%esi
  40120a:	bf 57 2d 40 00       	mov    $0x402d57,%edi
  40120f:	b8 00 00 00 00       	mov    $0x0,%eax
  401214:	e8 67 fa ff ff       	callq  400c80 <printf@plt>
  401219:	48 8b 3b             	mov    (%rbx),%rdi
  40121c:	e8 ef fc ff ff       	callq  400f10 <usage>
  401221:	48 89 ea             	mov    %rbp,%rdx
  401224:	48 89 de             	mov    %rbx,%rsi
  401227:	44 89 e7             	mov    %r12d,%edi
  40122a:	e8 81 fb ff ff       	callq  400db0 <getopt@plt>
  40122f:	89 c6                	mov    %eax,%esi
  401231:	3c ff                	cmp    $0xff,%al
  401233:	0f 85 2f ff ff ff    	jne    401168 <main+0x88>
  401239:	be 00 00 00 00       	mov    $0x0,%esi
  40123e:	44 89 ef             	mov    %r13d,%edi
  401241:	e8 4a fd ff ff       	callq  400f90 <initialize_target>
  401246:	83 3d bb 32 20 00 00 	cmpl   $0x0,0x2032bb(%rip)        # 604508 <is_checker>
  40124d:	74 25                	je     401274 <main+0x194>
  40124f:	44 3b 35 aa 32 20 00 	cmp    0x2032aa(%rip),%r14d        # 604500 <authkey>
  401256:	74 1c                	je     401274 <main+0x194>
  401258:	44 89 f6             	mov    %r14d,%esi
  40125b:	bf 90 2c 40 00       	mov    $0x402c90,%edi
  401260:	b8 00 00 00 00       	mov    $0x0,%eax
  401265:	e8 16 fa ff ff       	callq  400c80 <printf@plt>
  40126a:	b8 00 00 00 00       	mov    $0x0,%eax
  40126f:	e8 57 06 00 00       	callq  4018cb <check_fail>
  401274:	8b 35 8a 32 20 00    	mov    0x20328a(%rip),%esi        # 604504 <cookie>
  40127a:	bf 6a 2d 40 00       	mov    $0x402d6a,%edi
  40127f:	b8 00 00 00 00       	mov    $0x0,%eax
  401284:	e8 f7 f9 ff ff       	callq  400c80 <printf@plt>
  401289:	48 8b 3d 20 32 20 00 	mov    0x203220(%rip),%rdi        # 6044b0 <buf_offset>
  401290:	e8 e7 0a 00 00       	callq  401d7c <stable_launch>
  401295:	b8 00 00 00 00       	mov    $0x0,%eax
  40129a:	5b                   	pop    %rbx
  40129b:	5d                   	pop    %rbp
  40129c:	41 5c                	pop    %r12
  40129e:	41 5d                	pop    %r13
  4012a0:	41 5e                	pop    %r14
  4012a2:	c3                   	retq   

00000000004012a3 <scramble>:
  4012a3:	b8 00 00 00 00       	mov    $0x0,%eax
  4012a8:	eb 11                	jmp    4012bb <scramble+0x18>
  4012aa:	69 c8 7d 81 00 00    	imul   $0x817d,%eax,%ecx
  4012b0:	01 f9                	add    %edi,%ecx
  4012b2:	89 c2                	mov    %eax,%edx
  4012b4:	89 4c 94 d0          	mov    %ecx,-0x30(%rsp,%rdx,4)
  4012b8:	83 c0 01             	add    $0x1,%eax
  4012bb:	83 f8 09             	cmp    $0x9,%eax
  4012be:	76 ea                	jbe    4012aa <scramble+0x7>
  4012c0:	8b 44 24 d4          	mov    -0x2c(%rsp),%eax
  4012c4:	69 c0 bf df 00 00    	imul   $0xdfbf,%eax,%eax
  4012ca:	89 44 24 d4          	mov    %eax,-0x2c(%rsp)
  4012ce:	8b 44 24 e0          	mov    -0x20(%rsp),%eax
  4012d2:	69 c0 7c d3 00 00    	imul   $0xd37c,%eax,%eax
  4012d8:	89 44 24 e0          	mov    %eax,-0x20(%rsp)
  4012dc:	8b 44 24 e4          	mov    -0x1c(%rsp),%eax
  4012e0:	69 c0 30 35 00 00    	imul   $0x3530,%eax,%eax
  4012e6:	89 44 24 e4          	mov    %eax,-0x1c(%rsp)
  4012ea:	8b 44 24 d4          	mov    -0x2c(%rsp),%eax
  4012ee:	69 c0 c9 49 00 00    	imul   $0x49c9,%eax,%eax
  4012f4:	89 44 24 d4          	mov    %eax,-0x2c(%rsp)
  4012f8:	8b 44 24 f4          	mov    -0xc(%rsp),%eax
  4012fc:	69 c0 56 74 00 00    	imul   $0x7456,%eax,%eax
  401302:	89 44 24 f4          	mov    %eax,-0xc(%rsp)
  401306:	8b 44 24 e0          	mov    -0x20(%rsp),%eax
  40130a:	69 c0 96 57 00 00    	imul   $0x5796,%eax,%eax
  401310:	89 44 24 e0          	mov    %eax,-0x20(%rsp)
  401314:	8b 44 24 dc          	mov    -0x24(%rsp),%eax
  401318:	69 c0 53 9a 00 00    	imul   $0x9a53,%eax,%eax
  40131e:	89 44 24 dc          	mov    %eax,-0x24(%rsp)
  401322:	8b 44 24 f0          	mov    -0x10(%rsp),%eax
  401326:	69 c0 f5 34 00 00    	imul   $0x34f5,%eax,%eax
  40132c:	89 44 24 f0          	mov    %eax,-0x10(%rsp)
  401330:	8b 44 24 e0          	mov    -0x20(%rsp),%eax
  401334:	69 c0 b0 4f 00 00    	imul   $0x4fb0,%eax,%eax
  40133a:	89 44 24 e0          	mov    %eax,-0x20(%rsp)
  40133e:	8b 44 24 dc          	mov    -0x24(%rsp),%eax
  401342:	69 c0 ed 24 00 00    	imul   $0x24ed,%eax,%eax
  401348:	89 44 24 dc          	mov    %eax,-0x24(%rsp)
  40134c:	8b 44 24 e8          	mov    -0x18(%rsp),%eax
  401350:	69 c0 c1 19 00 00    	imul   $0x19c1,%eax,%eax
  401356:	89 44 24 e8          	mov    %eax,-0x18(%rsp)
  40135a:	8b 44 24 e0          	mov    -0x20(%rsp),%eax
  40135e:	69 c0 e1 44 00 00    	imul   $0x44e1,%eax,%eax
  401364:	89 44 24 e0          	mov    %eax,-0x20(%rsp)
  401368:	8b 44 24 e8          	mov    -0x18(%rsp),%eax
  40136c:	69 c0 b5 7c 00 00    	imul   $0x7cb5,%eax,%eax
  401372:	89 44 24 e8          	mov    %eax,-0x18(%rsp)
  401376:	8b 44 24 f4          	mov    -0xc(%rsp),%eax
  40137a:	69 c0 6b fb 00 00    	imul   $0xfb6b,%eax,%eax
  401380:	89 44 24 f4          	mov    %eax,-0xc(%rsp)
  401384:	8b 44 24 e4          	mov    -0x1c(%rsp),%eax
  401388:	69 c0 03 74 00 00    	imul   $0x7403,%eax,%eax
  40138e:	89 44 24 e4          	mov    %eax,-0x1c(%rsp)
  401392:	8b 44 24 dc          	mov    -0x24(%rsp),%eax
  401396:	69 c0 be 32 00 00    	imul   $0x32be,%eax,%eax
  40139c:	89 44 24 dc          	mov    %eax,-0x24(%rsp)
  4013a0:	8b 44 24 ec          	mov    -0x14(%rsp),%eax
  4013a4:	69 c0 a5 67 00 00    	imul   $0x67a5,%eax,%eax
  4013aa:	89 44 24 ec          	mov    %eax,-0x14(%rsp)
  4013ae:	8b 44 24 f4          	mov    -0xc(%rsp),%eax
  4013b2:	69 c0 bb 72 00 00    	imul   $0x72bb,%eax,%eax
  4013b8:	89 44 24 f4          	mov    %eax,-0xc(%rsp)
  4013bc:	8b 44 24 d0          	mov    -0x30(%rsp),%eax
  4013c0:	69 c0 46 ec 00 00    	imul   $0xec46,%eax,%eax
  4013c6:	89 44 24 d0          	mov    %eax,-0x30(%rsp)
  4013ca:	8b 44 24 d4          	mov    -0x2c(%rsp),%eax
  4013ce:	69 c0 68 be 00 00    	imul   $0xbe68,%eax,%eax
  4013d4:	89 44 24 d4          	mov    %eax,-0x2c(%rsp)
  4013d8:	8b 44 24 e0          	mov    -0x20(%rsp),%eax
  4013dc:	69 c0 30 e6 00 00    	imul   $0xe630,%eax,%eax
  4013e2:	89 44 24 e0          	mov    %eax,-0x20(%rsp)
  4013e6:	8b 44 24 d4          	mov    -0x2c(%rsp),%eax
  4013ea:	69 c0 03 41 00 00    	imul   $0x4103,%eax,%eax
  4013f0:	89 44 24 d4          	mov    %eax,-0x2c(%rsp)
  4013f4:	8b 44 24 e0          	mov    -0x20(%rsp),%eax
  4013f8:	69 c0 59 82 00 00    	imul   $0x8259,%eax,%eax
  4013fe:	89 44 24 e0          	mov    %eax,-0x20(%rsp)
  401402:	8b 44 24 f0          	mov    -0x10(%rsp),%eax
  401406:	69 c0 84 a2 00 00    	imul   $0xa284,%eax,%eax
  40140c:	89 44 24 f0          	mov    %eax,-0x10(%rsp)
  401410:	8b 44 24 d4          	mov    -0x2c(%rsp),%eax
  401414:	69 c0 2a bd 00 00    	imul   $0xbd2a,%eax,%eax
  40141a:	89 44 24 d4          	mov    %eax,-0x2c(%rsp)
  40141e:	8b 44 24 f0          	mov    -0x10(%rsp),%eax
  401422:	69 c0 53 70 00 00    	imul   $0x7053,%eax,%eax
  401428:	89 44 24 f0          	mov    %eax,-0x10(%rsp)
  40142c:	8b 44 24 ec          	mov    -0x14(%rsp),%eax
  401430:	69 c0 4b 47 00 00    	imul   $0x474b,%eax,%eax
  401436:	89 44 24 ec          	mov    %eax,-0x14(%rsp)
  40143a:	8b 44 24 e0          	mov    -0x20(%rsp),%eax
  40143e:	69 c0 c4 c1 00 00    	imul   $0xc1c4,%eax,%eax
  401444:	89 44 24 e0          	mov    %eax,-0x20(%rsp)
  401448:	8b 44 24 e8          	mov    -0x18(%rsp),%eax
  40144c:	69 c0 73 1d 00 00    	imul   $0x1d73,%eax,%eax
  401452:	89 44 24 e8          	mov    %eax,-0x18(%rsp)
  401456:	8b 44 24 f0          	mov    -0x10(%rsp),%eax
  40145a:	69 c0 41 75 00 00    	imul   $0x7541,%eax,%eax
  401460:	89 44 24 f0          	mov    %eax,-0x10(%rsp)
  401464:	8b 44 24 e8          	mov    -0x18(%rsp),%eax
  401468:	69 c0 45 2c 00 00    	imul   $0x2c45,%eax,%eax
  40146e:	89 44 24 e8          	mov    %eax,-0x18(%rsp)
  401472:	8b 44 24 d0          	mov    -0x30(%rsp),%eax
  401476:	69 c0 39 e5 00 00    	imul   $0xe539,%eax,%eax
  40147c:	89 44 24 d0          	mov    %eax,-0x30(%rsp)
  401480:	8b 44 24 d4          	mov    -0x2c(%rsp),%eax
  401484:	69 c0 3b ae 00 00    	imul   $0xae3b,%eax,%eax
  40148a:	89 44 24 d4          	mov    %eax,-0x2c(%rsp)
  40148e:	8b 44 24 f4          	mov    -0xc(%rsp),%eax
  401492:	69 c0 bf 30 00 00    	imul   $0x30bf,%eax,%eax
  401498:	89 44 24 f4          	mov    %eax,-0xc(%rsp)
  40149c:	8b 44 24 d8          	mov    -0x28(%rsp),%eax
  4014a0:	69 c0 79 14 00 00    	imul   $0x1479,%eax,%eax
  4014a6:	89 44 24 d8          	mov    %eax,-0x28(%rsp)
  4014aa:	8b 44 24 dc          	mov    -0x24(%rsp),%eax
  4014ae:	69 c0 1e fb 00 00    	imul   $0xfb1e,%eax,%eax
  4014b4:	89 44 24 dc          	mov    %eax,-0x24(%rsp)
  4014b8:	8b 44 24 e8          	mov    -0x18(%rsp),%eax
  4014bc:	69 c0 26 05 00 00    	imul   $0x526,%eax,%eax
  4014c2:	89 44 24 e8          	mov    %eax,-0x18(%rsp)
  4014c6:	8b 44 24 f0          	mov    -0x10(%rsp),%eax
  4014ca:	69 c0 2d 7b 00 00    	imul   $0x7b2d,%eax,%eax
  4014d0:	89 44 24 f0          	mov    %eax,-0x10(%rsp)
  4014d4:	8b 44 24 f4          	mov    -0xc(%rsp),%eax
  4014d8:	69 c0 1a b2 00 00    	imul   $0xb21a,%eax,%eax
  4014de:	89 44 24 f4          	mov    %eax,-0xc(%rsp)
  4014e2:	8b 44 24 d4          	mov    -0x2c(%rsp),%eax
  4014e6:	69 c0 8a 59 00 00    	imul   $0x598a,%eax,%eax
  4014ec:	89 44 24 d4          	mov    %eax,-0x2c(%rsp)
  4014f0:	8b 44 24 d4          	mov    -0x2c(%rsp),%eax
  4014f4:	69 c0 22 e5 00 00    	imul   $0xe522,%eax,%eax
  4014fa:	89 44 24 d4          	mov    %eax,-0x2c(%rsp)
  4014fe:	8b 44 24 d0          	mov    -0x30(%rsp),%eax
  401502:	69 c0 31 46 00 00    	imul   $0x4631,%eax,%eax
  401508:	89 44 24 d0          	mov    %eax,-0x30(%rsp)
  40150c:	8b 44 24 d4          	mov    -0x2c(%rsp),%eax
  401510:	69 c0 12 7f 00 00    	imul   $0x7f12,%eax,%eax
  401516:	89 44 24 d4          	mov    %eax,-0x2c(%rsp)
  40151a:	8b 44 24 e4          	mov    -0x1c(%rsp),%eax
  40151e:	69 c0 6e f0 00 00    	imul   $0xf06e,%eax,%eax
  401524:	89 44 24 e4          	mov    %eax,-0x1c(%rsp)
  401528:	8b 44 24 d0          	mov    -0x30(%rsp),%eax
  40152c:	69 c0 25 c5 00 00    	imul   $0xc525,%eax,%eax
  401532:	89 44 24 d0          	mov    %eax,-0x30(%rsp)
  401536:	8b 44 24 dc          	mov    -0x24(%rsp),%eax
  40153a:	69 c0 fc 2d 00 00    	imul   $0x2dfc,%eax,%eax
  401540:	89 44 24 dc          	mov    %eax,-0x24(%rsp)
  401544:	8b 44 24 ec          	mov    -0x14(%rsp),%eax
  401548:	69 c0 b0 0d 00 00    	imul   $0xdb0,%eax,%eax
  40154e:	89 44 24 ec          	mov    %eax,-0x14(%rsp)
  401552:	8b 44 24 dc          	mov    -0x24(%rsp),%eax
  401556:	69 c0 55 85 00 00    	imul   $0x8555,%eax,%eax
  40155c:	89 44 24 dc          	mov    %eax,-0x24(%rsp)
  401560:	8b 44 24 ec          	mov    -0x14(%rsp),%eax
  401564:	69 c0 2a 6b 00 00    	imul   $0x6b2a,%eax,%eax
  40156a:	89 44 24 ec          	mov    %eax,-0x14(%rsp)
  40156e:	8b 44 24 e0          	mov    -0x20(%rsp),%eax
  401572:	69 c0 6c 56 00 00    	imul   $0x566c,%eax,%eax
  401578:	89 44 24 e0          	mov    %eax,-0x20(%rsp)
  40157c:	8b 44 24 e4          	mov    -0x1c(%rsp),%eax
  401580:	69 c0 3d a5 00 00    	imul   $0xa53d,%eax,%eax
  401586:	89 44 24 e4          	mov    %eax,-0x1c(%rsp)
  40158a:	8b 44 24 f4          	mov    -0xc(%rsp),%eax
  40158e:	69 c0 4d 7a 00 00    	imul   $0x7a4d,%eax,%eax
  401594:	89 44 24 f4          	mov    %eax,-0xc(%rsp)
  401598:	8b 44 24 d8          	mov    -0x28(%rsp),%eax
  40159c:	69 c0 ad 8d 00 00    	imul   $0x8dad,%eax,%eax
  4015a2:	89 44 24 d8          	mov    %eax,-0x28(%rsp)
  4015a6:	8b 44 24 e4          	mov    -0x1c(%rsp),%eax
  4015aa:	69 c0 e3 31 00 00    	imul   $0x31e3,%eax,%eax
  4015b0:	89 44 24 e4          	mov    %eax,-0x1c(%rsp)
  4015b4:	8b 44 24 e4          	mov    -0x1c(%rsp),%eax
  4015b8:	69 c0 2b 13 00 00    	imul   $0x132b,%eax,%eax
  4015be:	89 44 24 e4          	mov    %eax,-0x1c(%rsp)
  4015c2:	8b 44 24 e8          	mov    -0x18(%rsp),%eax
  4015c6:	69 c0 0c af 00 00    	imul   $0xaf0c,%eax,%eax
  4015cc:	89 44 24 e8          	mov    %eax,-0x18(%rsp)
  4015d0:	8b 44 24 e4          	mov    -0x1c(%rsp),%eax
  4015d4:	69 c0 4b 55 00 00    	imul   $0x554b,%eax,%eax
  4015da:	89 44 24 e4          	mov    %eax,-0x1c(%rsp)
  4015de:	8b 44 24 ec          	mov    -0x14(%rsp),%eax
  4015e2:	69 c0 bc 24 00 00    	imul   $0x24bc,%eax,%eax
  4015e8:	89 44 24 ec          	mov    %eax,-0x14(%rsp)
  4015ec:	8b 44 24 e0          	mov    -0x20(%rsp),%eax
  4015f0:	69 c0 33 fd 00 00    	imul   $0xfd33,%eax,%eax
  4015f6:	89 44 24 e0          	mov    %eax,-0x20(%rsp)
  4015fa:	8b 44 24 d0          	mov    -0x30(%rsp),%eax
  4015fe:	69 c0 e3 70 00 00    	imul   $0x70e3,%eax,%eax
  401604:	89 44 24 d0          	mov    %eax,-0x30(%rsp)
  401608:	8b 44 24 f4          	mov    -0xc(%rsp),%eax
  40160c:	69 c0 da 7a 00 00    	imul   $0x7ada,%eax,%eax
  401612:	89 44 24 f4          	mov    %eax,-0xc(%rsp)
  401616:	8b 44 24 e0          	mov    -0x20(%rsp),%eax
  40161a:	69 c0 c3 b3 00 00    	imul   $0xb3c3,%eax,%eax
  401620:	89 44 24 e0          	mov    %eax,-0x20(%rsp)
  401624:	8b 44 24 f4          	mov    -0xc(%rsp),%eax
  401628:	69 c0 14 b2 00 00    	imul   $0xb214,%eax,%eax
  40162e:	89 44 24 f4          	mov    %eax,-0xc(%rsp)
  401632:	8b 44 24 ec          	mov    -0x14(%rsp),%eax
  401636:	69 c0 75 44 00 00    	imul   $0x4475,%eax,%eax
  40163c:	89 44 24 ec          	mov    %eax,-0x14(%rsp)
  401640:	8b 44 24 e0          	mov    -0x20(%rsp),%eax
  401644:	69 c0 2e ef 00 00    	imul   $0xef2e,%eax,%eax
  40164a:	89 44 24 e0          	mov    %eax,-0x20(%rsp)
  40164e:	8b 44 24 f4          	mov    -0xc(%rsp),%eax
  401652:	69 c0 e3 9c 00 00    	imul   $0x9ce3,%eax,%eax
  401658:	89 44 24 f4          	mov    %eax,-0xc(%rsp)
  40165c:	8b 44 24 f0          	mov    -0x10(%rsp),%eax
  401660:	69 c0 6d ec 00 00    	imul   $0xec6d,%eax,%eax
  401666:	89 44 24 f0          	mov    %eax,-0x10(%rsp)
  40166a:	8b 44 24 d8          	mov    -0x28(%rsp),%eax
  40166e:	69 c0 ce 3e 00 00    	imul   $0x3ece,%eax,%eax
  401674:	89 44 24 d8          	mov    %eax,-0x28(%rsp)
  401678:	8b 44 24 e8          	mov    -0x18(%rsp),%eax
  40167c:	69 c0 ab 0c 00 00    	imul   $0xcab,%eax,%eax
  401682:	89 44 24 e8          	mov    %eax,-0x18(%rsp)
  401686:	8b 44 24 f0          	mov    -0x10(%rsp),%eax
  40168a:	69 c0 e1 b9 00 00    	imul   $0xb9e1,%eax,%eax
  401690:	89 44 24 f0          	mov    %eax,-0x10(%rsp)
  401694:	8b 44 24 e8          	mov    -0x18(%rsp),%eax
  401698:	69 c0 1f fc 00 00    	imul   $0xfc1f,%eax,%eax
  40169e:	89 44 24 e8          	mov    %eax,-0x18(%rsp)
  4016a2:	ba 00 00 00 00       	mov    $0x0,%edx
  4016a7:	b8 00 00 00 00       	mov    $0x0,%eax
  4016ac:	eb 0b                	jmp    4016b9 <scramble+0x416>
  4016ae:	89 d1                	mov    %edx,%ecx
  4016b0:	8b 4c 8c d0          	mov    -0x30(%rsp,%rcx,4),%ecx
  4016b4:	01 c8                	add    %ecx,%eax
  4016b6:	83 c2 01             	add    $0x1,%edx
  4016b9:	83 fa 09             	cmp    $0x9,%edx
  4016bc:	76 f0                	jbe    4016ae <scramble+0x40b>
  4016be:	f3 c3                	repz retq 

00000000004016c0 <getbuf>:
  4016c0:	48 83 ec 18          	sub    $0x18,%rsp
  4016c4:	48 89 e7             	mov    %rsp,%rdi
  4016c7:	e8 2e 02 00 00       	callq  4018fa <Gets>
  4016cc:	b8 01 00 00 00       	mov    $0x1,%eax
  4016d1:	48 83 c4 18          	add    $0x18,%rsp
  4016d5:	c3                   	retq   

00000000004016d6 <touch1>:
  4016d6:	48 83 ec 08          	sub    $0x8,%rsp
  4016da:	c7 05 18 2e 20 00 01 	movl   $0x1,0x202e18(%rip)        # 6044fc <vlevel>
  4016e1:	00 00 00 
  4016e4:	bf 23 2f 40 00       	mov    $0x402f23,%edi
  4016e9:	e8 62 f5 ff ff       	callq  400c50 <puts@plt>
  4016ee:	bf 01 00 00 00       	mov    $0x1,%edi
  4016f3:	e8 f1 03 00 00       	callq  401ae9 <validate>
  4016f8:	bf 00 00 00 00       	mov    $0x0,%edi
  4016fd:	e8 ee f6 ff ff       	callq  400df0 <exit@plt>

0000000000401702 <touch2>:
  401702:	48 83 ec 08          	sub    $0x8,%rsp
  401706:	89 fe                	mov    %edi,%esi
  401708:	c7 05 ea 2d 20 00 02 	movl   $0x2,0x202dea(%rip)        # 6044fc <vlevel>
  40170f:	00 00 00 
  401712:	3b 3d ec 2d 20 00    	cmp    0x202dec(%rip),%edi        # 604504 <cookie>
  401718:	75 1b                	jne    401735 <touch2+0x33>
  40171a:	bf 48 2f 40 00       	mov    $0x402f48,%edi
  40171f:	b8 00 00 00 00       	mov    $0x0,%eax
  401724:	e8 57 f5 ff ff       	callq  400c80 <printf@plt>
  401729:	bf 02 00 00 00       	mov    $0x2,%edi
  40172e:	e8 b6 03 00 00       	callq  401ae9 <validate>
  401733:	eb 19                	jmp    40174e <touch2+0x4c>
  401735:	bf 70 2f 40 00       	mov    $0x402f70,%edi
  40173a:	b8 00 00 00 00       	mov    $0x0,%eax
  40173f:	e8 3c f5 ff ff       	callq  400c80 <printf@plt>
  401744:	bf 02 00 00 00       	mov    $0x2,%edi
  401749:	e8 4d 04 00 00       	callq  401b9b <fail>
  40174e:	bf 00 00 00 00       	mov    $0x0,%edi
  401753:	e8 98 f6 ff ff       	callq  400df0 <exit@plt>

0000000000401758 <hexmatch>:
  401758:	41 54                	push   %r12
  40175a:	55                   	push   %rbp
  40175b:	53                   	push   %rbx
  40175c:	48 83 ec 70          	sub    $0x70,%rsp
  401760:	41 89 fc             	mov    %edi,%r12d
  401763:	48 89 f5             	mov    %rsi,%rbp
  401766:	e8 e5 f5 ff ff       	callq  400d50 <random@plt>
  40176b:	48 89 c1             	mov    %rax,%rcx
  40176e:	48 ba 0b d7 a3 70 3d 	movabs $0xa3d70a3d70a3d70b,%rdx
  401775:	0a d7 a3 
  401778:	48 f7 ea             	imul   %rdx
  40177b:	48 8d 04 0a          	lea    (%rdx,%rcx,1),%rax
  40177f:	48 c1 f8 06          	sar    $0x6,%rax
  401783:	48 89 ce             	mov    %rcx,%rsi
  401786:	48 c1 fe 3f          	sar    $0x3f,%rsi
  40178a:	48 29 f0             	sub    %rsi,%rax
  40178d:	48 8d 04 80          	lea    (%rax,%rax,4),%rax
  401791:	48 8d 04 80          	lea    (%rax,%rax,4),%rax
  401795:	48 c1 e0 02          	shl    $0x2,%rax
  401799:	48 29 c1             	sub    %rax,%rcx
  40179c:	48 8d 1c 0c          	lea    (%rsp,%rcx,1),%rbx
  4017a0:	44 89 e2             	mov    %r12d,%edx
  4017a3:	be 40 2f 40 00       	mov    $0x402f40,%esi
  4017a8:	48 89 df             	mov    %rbx,%rdi
  4017ab:	b8 00 00 00 00       	mov    $0x0,%eax
  4017b0:	e8 2b f6 ff ff       	callq  400de0 <sprintf@plt>
  4017b5:	ba 09 00 00 00       	mov    $0x9,%edx
  4017ba:	48 89 de             	mov    %rbx,%rsi
  4017bd:	48 89 ef             	mov    %rbp,%rdi
  4017c0:	e8 6b f4 ff ff       	callq  400c30 <strncmp@plt>
  4017c5:	85 c0                	test   %eax,%eax
  4017c7:	0f 94 c0             	sete   %al
  4017ca:	0f b6 c0             	movzbl %al,%eax
  4017cd:	48 83 c4 70          	add    $0x70,%rsp
  4017d1:	5b                   	pop    %rbx
  4017d2:	5d                   	pop    %rbp
  4017d3:	41 5c                	pop    %r12
  4017d5:	c3                   	retq   

00000000004017d6 <touch3>:
  4017d6:	53                   	push   %rbx
  4017d7:	48 89 fb             	mov    %rdi,%rbx
  4017da:	c7 05 18 2d 20 00 03 	movl   $0x3,0x202d18(%rip)        # 6044fc <vlevel>
  4017e1:	00 00 00 
  4017e4:	48 89 fe             	mov    %rdi,%rsi
  4017e7:	8b 3d 17 2d 20 00    	mov    0x202d17(%rip),%edi        # 604504 <cookie>
  4017ed:	e8 66 ff ff ff       	callq  401758 <hexmatch>
  4017f2:	85 c0                	test   %eax,%eax
  4017f4:	74 1e                	je     401814 <touch3+0x3e>
  4017f6:	48 89 de             	mov    %rbx,%rsi
  4017f9:	bf 98 2f 40 00       	mov    $0x402f98,%edi
  4017fe:	b8 00 00 00 00       	mov    $0x0,%eax
  401803:	e8 78 f4 ff ff       	callq  400c80 <printf@plt>
  401808:	bf 03 00 00 00       	mov    $0x3,%edi
  40180d:	e8 d7 02 00 00       	callq  401ae9 <validate>
  401812:	eb 1c                	jmp    401830 <touch3+0x5a>
  401814:	48 89 de             	mov    %rbx,%rsi
  401817:	bf c0 2f 40 00       	mov    $0x402fc0,%edi
  40181c:	b8 00 00 00 00       	mov    $0x0,%eax
  401821:	e8 5a f4 ff ff       	callq  400c80 <printf@plt>
  401826:	bf 03 00 00 00       	mov    $0x3,%edi
  40182b:	e8 6b 03 00 00       	callq  401b9b <fail>
  401830:	bf 00 00 00 00       	mov    $0x0,%edi
  401835:	e8 b6 f5 ff ff       	callq  400df0 <exit@plt>

000000000040183a <test>:
  40183a:	48 83 ec 08          	sub    $0x8,%rsp
  40183e:	b8 00 00 00 00       	mov    $0x0,%eax
  401843:	e8 78 fe ff ff       	callq  4016c0 <getbuf>
  401848:	89 c6                	mov    %eax,%esi
  40184a:	bf e8 2f 40 00       	mov    $0x402fe8,%edi
  40184f:	b8 00 00 00 00       	mov    $0x0,%eax
  401854:	e8 27 f4 ff ff       	callq  400c80 <printf@plt>
  401859:	48 83 c4 08          	add    $0x8,%rsp
  40185d:	c3                   	retq   
  40185e:	66 90                	xchg   %ax,%ax

0000000000401860 <save_char>:
  401860:	8b 05 be 38 20 00    	mov    0x2038be(%rip),%eax        # 605124 <gets_cnt>
  401866:	3d ff 03 00 00       	cmp    $0x3ff,%eax
  40186b:	7f 49                	jg     4018b6 <save_char+0x56>
  40186d:	8d 14 40             	lea    (%rax,%rax,2),%edx
  401870:	89 f9                	mov    %edi,%ecx
  401872:	c0 e9 04             	shr    $0x4,%cl
  401875:	83 e1 0f             	and    $0xf,%ecx
  401878:	0f b6 b1 10 33 40 00 	movzbl 0x403310(%rcx),%esi
  40187f:	48 63 ca             	movslq %edx,%rcx
  401882:	40 88 b1 20 45 60 00 	mov    %sil,0x604520(%rcx)
  401889:	8d 4a 01             	lea    0x1(%rdx),%ecx
  40188c:	83 e7 0f             	and    $0xf,%edi
  40188f:	0f b6 b7 10 33 40 00 	movzbl 0x403310(%rdi),%esi
  401896:	48 63 c9             	movslq %ecx,%rcx
  401899:	40 88 b1 20 45 60 00 	mov    %sil,0x604520(%rcx)
  4018a0:	83 c2 02             	add    $0x2,%edx
  4018a3:	48 63 d2             	movslq %edx,%rdx
  4018a6:	c6 82 20 45 60 00 20 	movb   $0x20,0x604520(%rdx)
  4018ad:	83 c0 01             	add    $0x1,%eax
  4018b0:	89 05 6e 38 20 00    	mov    %eax,0x20386e(%rip)        # 605124 <gets_cnt>
  4018b6:	f3 c3                	repz retq 

00000000004018b8 <save_term>:
  4018b8:	8b 05 66 38 20 00    	mov    0x203866(%rip),%eax        # 605124 <gets_cnt>
  4018be:	8d 04 40             	lea    (%rax,%rax,2),%eax
  4018c1:	48 98                	cltq   
  4018c3:	c6 80 20 45 60 00 00 	movb   $0x0,0x604520(%rax)
  4018ca:	c3                   	retq   

00000000004018cb <check_fail>:
  4018cb:	48 83 ec 08          	sub    $0x8,%rsp
  4018cf:	0f be 35 6e 28 20 00 	movsbl 0x20286e(%rip),%esi        # 604144 <target_prefix>
  4018d6:	b9 20 45 60 00       	mov    $0x604520,%ecx
  4018db:	8b 15 17 2c 20 00    	mov    0x202c17(%rip),%edx        # 6044f8 <check_level>
  4018e1:	bf 0b 30 40 00       	mov    $0x40300b,%edi
  4018e6:	b8 00 00 00 00       	mov    $0x0,%eax
  4018eb:	e8 90 f3 ff ff       	callq  400c80 <printf@plt>
  4018f0:	bf 01 00 00 00       	mov    $0x1,%edi
  4018f5:	e8 f6 f4 ff ff       	callq  400df0 <exit@plt>

00000000004018fa <Gets>:
  4018fa:	41 54                	push   %r12
  4018fc:	55                   	push   %rbp
  4018fd:	53                   	push   %rbx
  4018fe:	49 89 fc             	mov    %rdi,%r12
  401901:	c7 05 19 38 20 00 00 	movl   $0x0,0x203819(%rip)        # 605124 <gets_cnt>
  401908:	00 00 00 
  40190b:	48 89 fb             	mov    %rdi,%rbx
  40190e:	eb 11                	jmp    401921 <Gets+0x27>
  401910:	48 8d 6b 01          	lea    0x1(%rbx),%rbp
  401914:	88 03                	mov    %al,(%rbx)
  401916:	0f b6 f8             	movzbl %al,%edi
  401919:	e8 42 ff ff ff       	callq  401860 <save_char>
  40191e:	48 89 eb             	mov    %rbp,%rbx
  401921:	48 8b 3d c8 2b 20 00 	mov    0x202bc8(%rip),%rdi        # 6044f0 <infile>
  401928:	e8 33 f4 ff ff       	callq  400d60 <_IO_getc@plt>
  40192d:	83 f8 ff             	cmp    $0xffffffff,%eax
  401930:	74 05                	je     401937 <Gets+0x3d>
  401932:	83 f8 0a             	cmp    $0xa,%eax
  401935:	75 d9                	jne    401910 <Gets+0x16>
  401937:	c6 03 00             	movb   $0x0,(%rbx)
  40193a:	b8 00 00 00 00       	mov    $0x0,%eax
  40193f:	e8 74 ff ff ff       	callq  4018b8 <save_term>
  401944:	4c 89 e0             	mov    %r12,%rax
  401947:	5b                   	pop    %rbx
  401948:	5d                   	pop    %rbp
  401949:	41 5c                	pop    %r12
  40194b:	c3                   	retq   

000000000040194c <notify_server>:
  40194c:	83 3d b5 2b 20 00 00 	cmpl   $0x0,0x202bb5(%rip)        # 604508 <is_checker>
  401953:	0f 85 8e 01 00 00    	jne    401ae7 <notify_server+0x19b>
  401959:	53                   	push   %rbx
  40195a:	48 81 ec 10 40 00 00 	sub    $0x4010,%rsp
  401961:	89 fb                	mov    %edi,%ebx
  401963:	8b 05 bb 37 20 00    	mov    0x2037bb(%rip),%eax        # 605124 <gets_cnt>
  401969:	83 c0 64             	add    $0x64,%eax
  40196c:	3d 00 20 00 00       	cmp    $0x2000,%eax
  401971:	7e 19                	jle    40198c <notify_server+0x40>
  401973:	bf 40 31 40 00       	mov    $0x403140,%edi
  401978:	b8 00 00 00 00       	mov    $0x0,%eax
  40197d:	e8 fe f2 ff ff       	callq  400c80 <printf@plt>
  401982:	bf 01 00 00 00       	mov    $0x1,%edi
  401987:	e8 64 f4 ff ff       	callq  400df0 <exit@plt>
  40198c:	44 0f be 0d b0 27 20 	movsbl 0x2027b0(%rip),%r9d        # 604144 <target_prefix>
  401993:	00 
  401994:	83 3d 0d 2b 20 00 00 	cmpl   $0x0,0x202b0d(%rip)        # 6044a8 <notify>
  40199b:	74 09                	je     4019a6 <notify_server+0x5a>
  40199d:	44 8b 05 5c 2b 20 00 	mov    0x202b5c(%rip),%r8d        # 604500 <authkey>
  4019a4:	eb 06                	jmp    4019ac <notify_server+0x60>
  4019a6:	41 b8 ff ff ff ff    	mov    $0xffffffff,%r8d
  4019ac:	85 db                	test   %ebx,%ebx
  4019ae:	74 07                	je     4019b7 <notify_server+0x6b>
  4019b0:	b9 21 30 40 00       	mov    $0x403021,%ecx
  4019b5:	eb 05                	jmp    4019bc <notify_server+0x70>
  4019b7:	b9 26 30 40 00       	mov    $0x403026,%ecx
  4019bc:	48 c7 44 24 08 20 45 	movq   $0x604520,0x8(%rsp)
  4019c3:	60 00 
  4019c5:	89 34 24             	mov    %esi,(%rsp)
  4019c8:	8b 15 9a 27 20 00    	mov    0x20279a(%rip),%edx        # 604168 <target_id>
  4019ce:	be 2b 30 40 00       	mov    $0x40302b,%esi
  4019d3:	48 8d bc 24 10 20 00 	lea    0x2010(%rsp),%rdi
  4019da:	00 
  4019db:	b8 00 00 00 00       	mov    $0x0,%eax
  4019e0:	e8 fb f3 ff ff       	callq  400de0 <sprintf@plt>
  4019e5:	83 3d bc 2a 20 00 00 	cmpl   $0x0,0x202abc(%rip)        # 6044a8 <notify>
  4019ec:	74 78                	je     401a66 <notify_server+0x11a>
  4019ee:	85 db                	test   %ebx,%ebx
  4019f0:	74 68                	je     401a5a <notify_server+0x10e>
  4019f2:	4c 8d 4c 24 10       	lea    0x10(%rsp),%r9
  4019f7:	41 b8 00 00 00 00    	mov    $0x0,%r8d
  4019fd:	48 8d 8c 24 10 20 00 	lea    0x2010(%rsp),%rcx
  401a04:	00 
  401a05:	48 8b 15 64 27 20 00 	mov    0x202764(%rip),%rdx        # 604170 <lab>
  401a0c:	48 8b 35 8d 2a 20 00 	mov    0x202a8d(%rip),%rsi        # 6044a0 <course>
  401a13:	48 8b 3d 46 27 20 00 	mov    0x202746(%rip),%rdi        # 604160 <user_id>
  401a1a:	e8 94 0f 00 00       	callq  4029b3 <driver_post>
  401a1f:	85 c0                	test   %eax,%eax
  401a21:	79 1e                	jns    401a41 <notify_server+0xf5>
  401a23:	48 8d 74 24 10       	lea    0x10(%rsp),%rsi
  401a28:	bf 47 30 40 00       	mov    $0x403047,%edi
  401a2d:	b8 00 00 00 00       	mov    $0x0,%eax
  401a32:	e8 49 f2 ff ff       	callq  400c80 <printf@plt>
  401a37:	bf 01 00 00 00       	mov    $0x1,%edi
  401a3c:	e8 af f3 ff ff       	callq  400df0 <exit@plt>
  401a41:	bf 70 31 40 00       	mov    $0x403170,%edi
  401a46:	e8 05 f2 ff ff       	callq  400c50 <puts@plt>
  401a4b:	bf 53 30 40 00       	mov    $0x403053,%edi
  401a50:	e8 fb f1 ff ff       	callq  400c50 <puts@plt>
  401a55:	e9 85 00 00 00       	jmpq   401adf <notify_server+0x193>
  401a5a:	bf 5d 30 40 00       	mov    $0x40305d,%edi
  401a5f:	e8 ec f1 ff ff       	callq  400c50 <puts@plt>
  401a64:	eb 79                	jmp    401adf <notify_server+0x193>
  401a66:	85 db                	test   %ebx,%ebx
  401a68:	74 08                	je     401a72 <notify_server+0x126>
  401a6a:	be 21 30 40 00       	mov    $0x403021,%esi
  401a6f:	90                   	nop
  401a70:	eb 05                	jmp    401a77 <notify_server+0x12b>
  401a72:	be 26 30 40 00       	mov    $0x403026,%esi
  401a77:	bf a8 31 40 00       	mov    $0x4031a8,%edi
  401a7c:	b8 00 00 00 00       	mov    $0x0,%eax
  401a81:	e8 fa f1 ff ff       	callq  400c80 <printf@plt>
  401a86:	48 8b 35 d3 26 20 00 	mov    0x2026d3(%rip),%rsi        # 604160 <user_id>
  401a8d:	bf 64 30 40 00       	mov    $0x403064,%edi
  401a92:	b8 00 00 00 00       	mov    $0x0,%eax
  401a97:	e8 e4 f1 ff ff       	callq  400c80 <printf@plt>
  401a9c:	48 8b 35 fd 29 20 00 	mov    0x2029fd(%rip),%rsi        # 6044a0 <course>
  401aa3:	bf 71 30 40 00       	mov    $0x403071,%edi
  401aa8:	b8 00 00 00 00       	mov    $0x0,%eax
  401aad:	e8 ce f1 ff ff       	callq  400c80 <printf@plt>
  401ab2:	48 8b 35 b7 26 20 00 	mov    0x2026b7(%rip),%rsi        # 604170 <lab>
  401ab9:	bf 7d 30 40 00       	mov    $0x40307d,%edi
  401abe:	b8 00 00 00 00       	mov    $0x0,%eax
  401ac3:	e8 b8 f1 ff ff       	callq  400c80 <printf@plt>
  401ac8:	48 8d b4 24 10 20 00 	lea    0x2010(%rsp),%rsi
  401acf:	00 
  401ad0:	bf 86 30 40 00       	mov    $0x403086,%edi
  401ad5:	b8 00 00 00 00       	mov    $0x0,%eax
  401ada:	e8 a1 f1 ff ff       	callq  400c80 <printf@plt>
  401adf:	48 81 c4 10 40 00 00 	add    $0x4010,%rsp
  401ae6:	5b                   	pop    %rbx
  401ae7:	f3 c3                	repz retq 

0000000000401ae9 <validate>:
  401ae9:	53                   	push   %rbx
  401aea:	89 fb                	mov    %edi,%ebx
  401aec:	83 3d 15 2a 20 00 00 	cmpl   $0x0,0x202a15(%rip)        # 604508 <is_checker>
  401af3:	74 60                	je     401b55 <validate+0x6c>
  401af5:	39 3d 01 2a 20 00    	cmp    %edi,0x202a01(%rip)        # 6044fc <vlevel>
  401afb:	74 14                	je     401b11 <validate+0x28>
  401afd:	bf 92 30 40 00       	mov    $0x403092,%edi
  401b02:	e8 49 f1 ff ff       	callq  400c50 <puts@plt>
  401b07:	b8 00 00 00 00       	mov    $0x0,%eax
  401b0c:	e8 ba fd ff ff       	callq  4018cb <check_fail>
  401b11:	8b 35 e1 29 20 00    	mov    0x2029e1(%rip),%esi        # 6044f8 <check_level>
  401b17:	39 fe                	cmp    %edi,%esi
  401b19:	74 1b                	je     401b36 <validate+0x4d>
  401b1b:	89 fa                	mov    %edi,%edx
  401b1d:	bf d0 31 40 00       	mov    $0x4031d0,%edi
  401b22:	b8 00 00 00 00       	mov    $0x0,%eax
  401b27:	e8 54 f1 ff ff       	callq  400c80 <printf@plt>
  401b2c:	b8 00 00 00 00       	mov    $0x0,%eax
  401b31:	e8 95 fd ff ff       	callq  4018cb <check_fail>
  401b36:	0f be 35 07 26 20 00 	movsbl 0x202607(%rip),%esi        # 604144 <target_prefix>
  401b3d:	b9 20 45 60 00       	mov    $0x604520,%ecx
  401b42:	89 fa                	mov    %edi,%edx
  401b44:	bf b0 30 40 00       	mov    $0x4030b0,%edi
  401b49:	b8 00 00 00 00       	mov    $0x0,%eax
  401b4e:	e8 2d f1 ff ff       	callq  400c80 <printf@plt>
  401b53:	eb 44                	jmp    401b99 <validate+0xb0>
  401b55:	39 3d a1 29 20 00    	cmp    %edi,0x2029a1(%rip)        # 6044fc <vlevel>
  401b5b:	74 18                	je     401b75 <validate+0x8c>
  401b5d:	bf 92 30 40 00       	mov    $0x403092,%edi
  401b62:	e8 e9 f0 ff ff       	callq  400c50 <puts@plt>
  401b67:	89 de                	mov    %ebx,%esi
  401b69:	bf 00 00 00 00       	mov    $0x0,%edi
  401b6e:	e8 d9 fd ff ff       	callq  40194c <notify_server>
  401b73:	eb 24                	jmp    401b99 <validate+0xb0>
  401b75:	0f be 15 c8 25 20 00 	movsbl 0x2025c8(%rip),%edx        # 604144 <target_prefix>
  401b7c:	89 fe                	mov    %edi,%esi
  401b7e:	bf f8 31 40 00       	mov    $0x4031f8,%edi
  401b83:	b8 00 00 00 00       	mov    $0x0,%eax
  401b88:	e8 f3 f0 ff ff       	callq  400c80 <printf@plt>
  401b8d:	89 de                	mov    %ebx,%esi
  401b8f:	bf 01 00 00 00       	mov    $0x1,%edi
  401b94:	e8 b3 fd ff ff       	callq  40194c <notify_server>
  401b99:	5b                   	pop    %rbx
  401b9a:	c3                   	retq   

0000000000401b9b <fail>:
  401b9b:	48 83 ec 08          	sub    $0x8,%rsp
  401b9f:	83 3d 62 29 20 00 00 	cmpl   $0x0,0x202962(%rip)        # 604508 <is_checker>
  401ba6:	74 0a                	je     401bb2 <fail+0x17>
  401ba8:	b8 00 00 00 00       	mov    $0x0,%eax
  401bad:	e8 19 fd ff ff       	callq  4018cb <check_fail>
  401bb2:	89 fe                	mov    %edi,%esi
  401bb4:	bf 00 00 00 00       	mov    $0x0,%edi
  401bb9:	e8 8e fd ff ff       	callq  40194c <notify_server>
  401bbe:	48 83 c4 08          	add    $0x8,%rsp
  401bc2:	c3                   	retq   

0000000000401bc3 <bushandler>:
  401bc3:	48 83 ec 08          	sub    $0x8,%rsp
  401bc7:	83 3d 3a 29 20 00 00 	cmpl   $0x0,0x20293a(%rip)        # 604508 <is_checker>
  401bce:	74 14                	je     401be4 <bushandler+0x21>
  401bd0:	bf c5 30 40 00       	mov    $0x4030c5,%edi
  401bd5:	e8 76 f0 ff ff       	callq  400c50 <puts@plt>
  401bda:	b8 00 00 00 00       	mov    $0x0,%eax
  401bdf:	e8 e7 fc ff ff       	callq  4018cb <check_fail>
  401be4:	bf 30 32 40 00       	mov    $0x403230,%edi
  401be9:	e8 62 f0 ff ff       	callq  400c50 <puts@plt>
  401bee:	bf cf 30 40 00       	mov    $0x4030cf,%edi
  401bf3:	e8 58 f0 ff ff       	callq  400c50 <puts@plt>
  401bf8:	be 00 00 00 00       	mov    $0x0,%esi
  401bfd:	bf 00 00 00 00       	mov    $0x0,%edi
  401c02:	e8 45 fd ff ff       	callq  40194c <notify_server>
  401c07:	bf 01 00 00 00       	mov    $0x1,%edi
  401c0c:	e8 df f1 ff ff       	callq  400df0 <exit@plt>

0000000000401c11 <seghandler>:
  401c11:	48 83 ec 08          	sub    $0x8,%rsp
  401c15:	83 3d ec 28 20 00 00 	cmpl   $0x0,0x2028ec(%rip)        # 604508 <is_checker>
  401c1c:	74 14                	je     401c32 <seghandler+0x21>
  401c1e:	bf e5 30 40 00       	mov    $0x4030e5,%edi
  401c23:	e8 28 f0 ff ff       	callq  400c50 <puts@plt>
  401c28:	b8 00 00 00 00       	mov    $0x0,%eax
  401c2d:	e8 99 fc ff ff       	callq  4018cb <check_fail>
  401c32:	bf 50 32 40 00       	mov    $0x403250,%edi
  401c37:	e8 14 f0 ff ff       	callq  400c50 <puts@plt>
  401c3c:	bf cf 30 40 00       	mov    $0x4030cf,%edi
  401c41:	e8 0a f0 ff ff       	callq  400c50 <puts@plt>
  401c46:	be 00 00 00 00       	mov    $0x0,%esi
  401c4b:	bf 00 00 00 00       	mov    $0x0,%edi
  401c50:	e8 f7 fc ff ff       	callq  40194c <notify_server>
  401c55:	bf 01 00 00 00       	mov    $0x1,%edi
  401c5a:	e8 91 f1 ff ff       	callq  400df0 <exit@plt>

0000000000401c5f <illegalhandler>:
  401c5f:	48 83 ec 08          	sub    $0x8,%rsp
  401c63:	83 3d 9e 28 20 00 00 	cmpl   $0x0,0x20289e(%rip)        # 604508 <is_checker>
  401c6a:	74 14                	je     401c80 <illegalhandler+0x21>
  401c6c:	bf f8 30 40 00       	mov    $0x4030f8,%edi
  401c71:	e8 da ef ff ff       	callq  400c50 <puts@plt>
  401c76:	b8 00 00 00 00       	mov    $0x0,%eax
  401c7b:	e8 4b fc ff ff       	callq  4018cb <check_fail>
  401c80:	bf 78 32 40 00       	mov    $0x403278,%edi
  401c85:	e8 c6 ef ff ff       	callq  400c50 <puts@plt>
  401c8a:	bf cf 30 40 00       	mov    $0x4030cf,%edi
  401c8f:	e8 bc ef ff ff       	callq  400c50 <puts@plt>
  401c94:	be 00 00 00 00       	mov    $0x0,%esi
  401c99:	bf 00 00 00 00       	mov    $0x0,%edi
  401c9e:	e8 a9 fc ff ff       	callq  40194c <notify_server>
  401ca3:	bf 01 00 00 00       	mov    $0x1,%edi
  401ca8:	e8 43 f1 ff ff       	callq  400df0 <exit@plt>

0000000000401cad <sigalrmhandler>:
  401cad:	48 83 ec 08          	sub    $0x8,%rsp
  401cb1:	83 3d 50 28 20 00 00 	cmpl   $0x0,0x202850(%rip)        # 604508 <is_checker>
  401cb8:	74 14                	je     401cce <sigalrmhandler+0x21>
  401cba:	bf 0c 31 40 00       	mov    $0x40310c,%edi
  401cbf:	e8 8c ef ff ff       	callq  400c50 <puts@plt>
  401cc4:	b8 00 00 00 00       	mov    $0x0,%eax
  401cc9:	e8 fd fb ff ff       	callq  4018cb <check_fail>
  401cce:	be 05 00 00 00       	mov    $0x5,%esi
  401cd3:	bf a8 32 40 00       	mov    $0x4032a8,%edi
  401cd8:	b8 00 00 00 00       	mov    $0x0,%eax
  401cdd:	e8 9e ef ff ff       	callq  400c80 <printf@plt>
  401ce2:	be 00 00 00 00       	mov    $0x0,%esi
  401ce7:	bf 00 00 00 00       	mov    $0x0,%edi
  401cec:	e8 5b fc ff ff       	callq  40194c <notify_server>
  401cf1:	bf 01 00 00 00       	mov    $0x1,%edi
  401cf6:	e8 f5 f0 ff ff       	callq  400df0 <exit@plt>

0000000000401cfb <launch>:
  401cfb:	55                   	push   %rbp
  401cfc:	48 89 e5             	mov    %rsp,%rbp
  401cff:	48 89 fa             	mov    %rdi,%rdx
  401d02:	48 8d 47 1e          	lea    0x1e(%rdi),%rax
  401d06:	48 83 e0 f0          	and    $0xfffffffffffffff0,%rax
  401d0a:	48 29 c4             	sub    %rax,%rsp
  401d0d:	48 8d 7c 24 0f       	lea    0xf(%rsp),%rdi
  401d12:	48 83 e7 f0          	and    $0xfffffffffffffff0,%rdi
  401d16:	be f4 00 00 00       	mov    $0xf4,%esi
  401d1b:	e8 70 ef ff ff       	callq  400c90 <memset@plt>
  401d20:	48 8b 05 99 27 20 00 	mov    0x202799(%rip),%rax        # 6044c0 <stdin@@GLIBC_2.2.5>
  401d27:	48 39 05 c2 27 20 00 	cmp    %rax,0x2027c2(%rip)        # 6044f0 <infile>
  401d2e:	75 0f                	jne    401d3f <launch+0x44>
  401d30:	bf 14 31 40 00       	mov    $0x403114,%edi
  401d35:	b8 00 00 00 00       	mov    $0x0,%eax
  401d3a:	e8 41 ef ff ff       	callq  400c80 <printf@plt>
  401d3f:	c7 05 b3 27 20 00 00 	movl   $0x0,0x2027b3(%rip)        # 6044fc <vlevel>
  401d46:	00 00 00 
  401d49:	b8 00 00 00 00       	mov    $0x0,%eax
  401d4e:	e8 e7 fa ff ff       	callq  40183a <test>
  401d53:	83 3d ae 27 20 00 00 	cmpl   $0x0,0x2027ae(%rip)        # 604508 <is_checker>
  401d5a:	74 14                	je     401d70 <launch+0x75>
  401d5c:	bf 21 31 40 00       	mov    $0x403121,%edi
  401d61:	e8 ea ee ff ff       	callq  400c50 <puts@plt>
  401d66:	b8 00 00 00 00       	mov    $0x0,%eax
  401d6b:	e8 5b fb ff ff       	callq  4018cb <check_fail>
  401d70:	bf 2c 31 40 00       	mov    $0x40312c,%edi
  401d75:	e8 d6 ee ff ff       	callq  400c50 <puts@plt>
  401d7a:	c9                   	leaveq 
  401d7b:	c3                   	retq   

0000000000401d7c <stable_launch>:
  401d7c:	53                   	push   %rbx
  401d7d:	48 89 3d 64 27 20 00 	mov    %rdi,0x202764(%rip)        # 6044e8 <global_offset>
  401d84:	41 b9 00 00 00 00    	mov    $0x0,%r9d
  401d8a:	41 b8 00 00 00 00    	mov    $0x0,%r8d
  401d90:	b9 32 01 00 00       	mov    $0x132,%ecx
  401d95:	ba 07 00 00 00       	mov    $0x7,%edx
  401d9a:	be 00 00 10 00       	mov    $0x100000,%esi
  401d9f:	bf 00 60 58 55       	mov    $0x55586000,%edi
  401da4:	e8 c7 ee ff ff       	callq  400c70 <mmap@plt>
  401da9:	48 89 c3             	mov    %rax,%rbx
  401dac:	48 3d 00 60 58 55    	cmp    $0x55586000,%rax
  401db2:	74 32                	je     401de6 <stable_launch+0x6a>
  401db4:	be 00 00 10 00       	mov    $0x100000,%esi
  401db9:	48 89 c7             	mov    %rax,%rdi
  401dbc:	e8 bf ef ff ff       	callq  400d80 <munmap@plt>
  401dc1:	ba 00 60 58 55       	mov    $0x55586000,%edx
  401dc6:	be e0 32 40 00       	mov    $0x4032e0,%esi
  401dcb:	48 8b 3d fe 26 20 00 	mov    0x2026fe(%rip),%rdi        # 6044d0 <stderr@@GLIBC_2.2.5>
  401dd2:	b8 00 00 00 00       	mov    $0x0,%eax
  401dd7:	e8 24 ef ff ff       	callq  400d00 <fprintf@plt>
  401ddc:	bf 01 00 00 00       	mov    $0x1,%edi
  401de1:	e8 0a f0 ff ff       	callq  400df0 <exit@plt>
  401de6:	48 8d 90 f8 ff 0f 00 	lea    0xffff8(%rax),%rdx
  401ded:	48 89 15 34 33 20 00 	mov    %rdx,0x203334(%rip)        # 605128 <stack_top>
  401df4:	48 89 e0             	mov    %rsp,%rax
  401df7:	48 89 d4             	mov    %rdx,%rsp
  401dfa:	48 89 c2             	mov    %rax,%rdx
  401dfd:	48 89 15 dc 26 20 00 	mov    %rdx,0x2026dc(%rip)        # 6044e0 <global_save_stack>
  401e04:	48 8b 3d dd 26 20 00 	mov    0x2026dd(%rip),%rdi        # 6044e8 <global_offset>
  401e0b:	e8 eb fe ff ff       	callq  401cfb <launch>
  401e10:	48 8b 05 c9 26 20 00 	mov    0x2026c9(%rip),%rax        # 6044e0 <global_save_stack>
  401e17:	48 89 c4             	mov    %rax,%rsp
  401e1a:	be 00 00 10 00       	mov    $0x100000,%esi
  401e1f:	48 89 df             	mov    %rbx,%rdi
  401e22:	e8 59 ef ff ff       	callq  400d80 <munmap@plt>
  401e27:	5b                   	pop    %rbx
  401e28:	c3                   	retq   
  401e29:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

0000000000401e30 <rio_readinitb>:
  401e30:	89 37                	mov    %esi,(%rdi)
  401e32:	c7 47 04 00 00 00 00 	movl   $0x0,0x4(%rdi)
  401e39:	48 8d 47 10          	lea    0x10(%rdi),%rax
  401e3d:	48 89 47 08          	mov    %rax,0x8(%rdi)
  401e41:	c3                   	retq   

0000000000401e42 <sigalrm_handler>:
  401e42:	48 83 ec 08          	sub    $0x8,%rsp
  401e46:	ba 00 00 00 00       	mov    $0x0,%edx
  401e4b:	be 20 33 40 00       	mov    $0x403320,%esi
  401e50:	48 8b 3d 79 26 20 00 	mov    0x202679(%rip),%rdi        # 6044d0 <stderr@@GLIBC_2.2.5>
  401e57:	b8 00 00 00 00       	mov    $0x0,%eax
  401e5c:	e8 9f ee ff ff       	callq  400d00 <fprintf@plt>
  401e61:	bf 01 00 00 00       	mov    $0x1,%edi
  401e66:	e8 85 ef ff ff       	callq  400df0 <exit@plt>

0000000000401e6b <urlencode>:
  401e6b:	41 54                	push   %r12
  401e6d:	55                   	push   %rbp
  401e6e:	53                   	push   %rbx
  401e6f:	48 83 ec 10          	sub    $0x10,%rsp
  401e73:	48 89 fb             	mov    %rdi,%rbx
  401e76:	48 89 f5             	mov    %rsi,%rbp
  401e79:	b8 00 00 00 00       	mov    $0x0,%eax
  401e7e:	48 c7 c1 ff ff ff ff 	mov    $0xffffffffffffffff,%rcx
  401e85:	f2 ae                	repnz scas %es:(%rdi),%al
  401e87:	48 f7 d1             	not    %rcx
  401e8a:	8d 41 ff             	lea    -0x1(%rcx),%eax
  401e8d:	e9 93 00 00 00       	jmpq   401f25 <urlencode+0xba>
  401e92:	0f b6 13             	movzbl (%rbx),%edx
  401e95:	80 fa 2a             	cmp    $0x2a,%dl
  401e98:	0f 94 c1             	sete   %cl
  401e9b:	80 fa 2d             	cmp    $0x2d,%dl
  401e9e:	0f 94 c0             	sete   %al
  401ea1:	08 c1                	or     %al,%cl
  401ea3:	75 1f                	jne    401ec4 <urlencode+0x59>
  401ea5:	80 fa 2e             	cmp    $0x2e,%dl
  401ea8:	74 1a                	je     401ec4 <urlencode+0x59>
  401eaa:	80 fa 5f             	cmp    $0x5f,%dl
  401ead:	74 15                	je     401ec4 <urlencode+0x59>
  401eaf:	8d 42 d0             	lea    -0x30(%rdx),%eax
  401eb2:	3c 09                	cmp    $0x9,%al
  401eb4:	76 0e                	jbe    401ec4 <urlencode+0x59>
  401eb6:	8d 42 bf             	lea    -0x41(%rdx),%eax
  401eb9:	3c 19                	cmp    $0x19,%al
  401ebb:	76 07                	jbe    401ec4 <urlencode+0x59>
  401ebd:	8d 42 9f             	lea    -0x61(%rdx),%eax
  401ec0:	3c 19                	cmp    $0x19,%al
  401ec2:	77 09                	ja     401ecd <urlencode+0x62>
  401ec4:	88 55 00             	mov    %dl,0x0(%rbp)
  401ec7:	48 8d 6d 01          	lea    0x1(%rbp),%rbp
  401ecb:	eb 51                	jmp    401f1e <urlencode+0xb3>
  401ecd:	80 fa 20             	cmp    $0x20,%dl
  401ed0:	75 0a                	jne    401edc <urlencode+0x71>
  401ed2:	c6 45 00 2b          	movb   $0x2b,0x0(%rbp)
  401ed6:	48 8d 6d 01          	lea    0x1(%rbp),%rbp
  401eda:	eb 42                	jmp    401f1e <urlencode+0xb3>
  401edc:	8d 42 e0             	lea    -0x20(%rdx),%eax
  401edf:	3c 5f                	cmp    $0x5f,%al
  401ee1:	0f 96 c1             	setbe  %cl
  401ee4:	80 fa 09             	cmp    $0x9,%dl
  401ee7:	0f 94 c0             	sete   %al
  401eea:	08 c1                	or     %al,%cl
  401eec:	74 45                	je     401f33 <urlencode+0xc8>
  401eee:	0f b6 d2             	movzbl %dl,%edx
  401ef1:	be b8 33 40 00       	mov    $0x4033b8,%esi
  401ef6:	48 89 e7             	mov    %rsp,%rdi
  401ef9:	b8 00 00 00 00       	mov    $0x0,%eax
  401efe:	e8 dd ee ff ff       	callq  400de0 <sprintf@plt>
  401f03:	0f b6 04 24          	movzbl (%rsp),%eax
  401f07:	88 45 00             	mov    %al,0x0(%rbp)
  401f0a:	0f b6 44 24 01       	movzbl 0x1(%rsp),%eax
  401f0f:	88 45 01             	mov    %al,0x1(%rbp)
  401f12:	0f b6 44 24 02       	movzbl 0x2(%rsp),%eax
  401f17:	88 45 02             	mov    %al,0x2(%rbp)
  401f1a:	48 8d 6d 03          	lea    0x3(%rbp),%rbp
  401f1e:	48 83 c3 01          	add    $0x1,%rbx
  401f22:	44 89 e0             	mov    %r12d,%eax
  401f25:	44 8d 60 ff          	lea    -0x1(%rax),%r12d
  401f29:	85 c0                	test   %eax,%eax
  401f2b:	0f 85 61 ff ff ff    	jne    401e92 <urlencode+0x27>
  401f31:	eb 05                	jmp    401f38 <urlencode+0xcd>
  401f33:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  401f38:	48 83 c4 10          	add    $0x10,%rsp
  401f3c:	5b                   	pop    %rbx
  401f3d:	5d                   	pop    %rbp
  401f3e:	41 5c                	pop    %r12
  401f40:	c3                   	retq   

0000000000401f41 <rio_writen>:
  401f41:	41 55                	push   %r13
  401f43:	41 54                	push   %r12
  401f45:	55                   	push   %rbp
  401f46:	53                   	push   %rbx
  401f47:	48 83 ec 08          	sub    $0x8,%rsp
  401f4b:	41 89 fc             	mov    %edi,%r12d
  401f4e:	48 89 f5             	mov    %rsi,%rbp
  401f51:	49 89 d5             	mov    %rdx,%r13
  401f54:	48 89 d3             	mov    %rdx,%rbx
  401f57:	eb 28                	jmp    401f81 <rio_writen+0x40>
  401f59:	48 89 da             	mov    %rbx,%rdx
  401f5c:	48 89 ee             	mov    %rbp,%rsi
  401f5f:	44 89 e7             	mov    %r12d,%edi
  401f62:	e8 f9 ec ff ff       	callq  400c60 <write@plt>
  401f67:	48 85 c0             	test   %rax,%rax
  401f6a:	7f 0f                	jg     401f7b <rio_writen+0x3a>
  401f6c:	e8 9f ec ff ff       	callq  400c10 <__errno_location@plt>
  401f71:	83 38 04             	cmpl   $0x4,(%rax)
  401f74:	75 15                	jne    401f8b <rio_writen+0x4a>
  401f76:	b8 00 00 00 00       	mov    $0x0,%eax
  401f7b:	48 29 c3             	sub    %rax,%rbx
  401f7e:	48 01 c5             	add    %rax,%rbp
  401f81:	48 85 db             	test   %rbx,%rbx
  401f84:	75 d3                	jne    401f59 <rio_writen+0x18>
  401f86:	4c 89 e8             	mov    %r13,%rax
  401f89:	eb 07                	jmp    401f92 <rio_writen+0x51>
  401f8b:	48 c7 c0 ff ff ff ff 	mov    $0xffffffffffffffff,%rax
  401f92:	48 83 c4 08          	add    $0x8,%rsp
  401f96:	5b                   	pop    %rbx
  401f97:	5d                   	pop    %rbp
  401f98:	41 5c                	pop    %r12
  401f9a:	41 5d                	pop    %r13
  401f9c:	c3                   	retq   

0000000000401f9d <rio_read>:
  401f9d:	41 56                	push   %r14
  401f9f:	41 55                	push   %r13
  401fa1:	41 54                	push   %r12
  401fa3:	55                   	push   %rbp
  401fa4:	53                   	push   %rbx
  401fa5:	48 89 fb             	mov    %rdi,%rbx
  401fa8:	49 89 f6             	mov    %rsi,%r14
  401fab:	49 89 d5             	mov    %rdx,%r13
  401fae:	4c 8d 67 10          	lea    0x10(%rdi),%r12
  401fb2:	eb 2a                	jmp    401fde <rio_read+0x41>
  401fb4:	ba 00 20 00 00       	mov    $0x2000,%edx
  401fb9:	4c 89 e6             	mov    %r12,%rsi
  401fbc:	8b 3b                	mov    (%rbx),%edi
  401fbe:	e8 fd ec ff ff       	callq  400cc0 <read@plt>
  401fc3:	89 43 04             	mov    %eax,0x4(%rbx)
  401fc6:	85 c0                	test   %eax,%eax
  401fc8:	79 0c                	jns    401fd6 <rio_read+0x39>
  401fca:	e8 41 ec ff ff       	callq  400c10 <__errno_location@plt>
  401fcf:	83 38 04             	cmpl   $0x4,(%rax)
  401fd2:	74 0a                	je     401fde <rio_read+0x41>
  401fd4:	eb 37                	jmp    40200d <rio_read+0x70>
  401fd6:	85 c0                	test   %eax,%eax
  401fd8:	74 3c                	je     402016 <rio_read+0x79>
  401fda:	4c 89 63 08          	mov    %r12,0x8(%rbx)
  401fde:	8b 6b 04             	mov    0x4(%rbx),%ebp
  401fe1:	85 ed                	test   %ebp,%ebp
  401fe3:	7e cf                	jle    401fb4 <rio_read+0x17>
  401fe5:	89 e8                	mov    %ebp,%eax
  401fe7:	4c 39 e8             	cmp    %r13,%rax
  401fea:	72 03                	jb     401fef <rio_read+0x52>
  401fec:	44 89 ed             	mov    %r13d,%ebp
  401fef:	4c 63 e5             	movslq %ebp,%r12
  401ff2:	48 8b 73 08          	mov    0x8(%rbx),%rsi
  401ff6:	4c 89 e2             	mov    %r12,%rdx
  401ff9:	4c 89 f7             	mov    %r14,%rdi
  401ffc:	e8 2f ed ff ff       	callq  400d30 <memcpy@plt>
  402001:	4c 01 63 08          	add    %r12,0x8(%rbx)
  402005:	29 6b 04             	sub    %ebp,0x4(%rbx)
  402008:	4c 89 e0             	mov    %r12,%rax
  40200b:	eb 0e                	jmp    40201b <rio_read+0x7e>
  40200d:	48 c7 c0 ff ff ff ff 	mov    $0xffffffffffffffff,%rax
  402014:	eb 05                	jmp    40201b <rio_read+0x7e>
  402016:	b8 00 00 00 00       	mov    $0x0,%eax
  40201b:	5b                   	pop    %rbx
  40201c:	5d                   	pop    %rbp
  40201d:	41 5c                	pop    %r12
  40201f:	41 5d                	pop    %r13
  402021:	41 5e                	pop    %r14
  402023:	c3                   	retq   

0000000000402024 <rio_readlineb>:
  402024:	41 55                	push   %r13
  402026:	41 54                	push   %r12
  402028:	55                   	push   %rbp
  402029:	53                   	push   %rbx
  40202a:	48 83 ec 18          	sub    $0x18,%rsp
  40202e:	49 89 fd             	mov    %rdi,%r13
  402031:	48 89 f5             	mov    %rsi,%rbp
  402034:	49 89 d4             	mov    %rdx,%r12
  402037:	bb 01 00 00 00       	mov    $0x1,%ebx
  40203c:	eb 3d                	jmp    40207b <rio_readlineb+0x57>
  40203e:	ba 01 00 00 00       	mov    $0x1,%edx
  402043:	48 8d 74 24 0f       	lea    0xf(%rsp),%rsi
  402048:	4c 89 ef             	mov    %r13,%rdi
  40204b:	e8 4d ff ff ff       	callq  401f9d <rio_read>
  402050:	83 f8 01             	cmp    $0x1,%eax
  402053:	75 12                	jne    402067 <rio_readlineb+0x43>
  402055:	48 8d 55 01          	lea    0x1(%rbp),%rdx
  402059:	0f b6 44 24 0f       	movzbl 0xf(%rsp),%eax
  40205e:	88 45 00             	mov    %al,0x0(%rbp)
  402061:	3c 0a                	cmp    $0xa,%al
  402063:	75 0f                	jne    402074 <rio_readlineb+0x50>
  402065:	eb 1b                	jmp    402082 <rio_readlineb+0x5e>
  402067:	85 c0                	test   %eax,%eax
  402069:	75 23                	jne    40208e <rio_readlineb+0x6a>
  40206b:	48 83 fb 01          	cmp    $0x1,%rbx
  40206f:	90                   	nop
  402070:	75 13                	jne    402085 <rio_readlineb+0x61>
  402072:	eb 23                	jmp    402097 <rio_readlineb+0x73>
  402074:	48 83 c3 01          	add    $0x1,%rbx
  402078:	48 89 d5             	mov    %rdx,%rbp
  40207b:	4c 39 e3             	cmp    %r12,%rbx
  40207e:	72 be                	jb     40203e <rio_readlineb+0x1a>
  402080:	eb 03                	jmp    402085 <rio_readlineb+0x61>
  402082:	48 89 d5             	mov    %rdx,%rbp
  402085:	c6 45 00 00          	movb   $0x0,0x0(%rbp)
  402089:	48 89 d8             	mov    %rbx,%rax
  40208c:	eb 0e                	jmp    40209c <rio_readlineb+0x78>
  40208e:	48 c7 c0 ff ff ff ff 	mov    $0xffffffffffffffff,%rax
  402095:	eb 05                	jmp    40209c <rio_readlineb+0x78>
  402097:	b8 00 00 00 00       	mov    $0x0,%eax
  40209c:	48 83 c4 18          	add    $0x18,%rsp
  4020a0:	5b                   	pop    %rbx
  4020a1:	5d                   	pop    %rbp
  4020a2:	41 5c                	pop    %r12
  4020a4:	41 5d                	pop    %r13
  4020a6:	c3                   	retq   

00000000004020a7 <submitr>:
  4020a7:	41 57                	push   %r15
  4020a9:	41 56                	push   %r14
  4020ab:	41 55                	push   %r13
  4020ad:	41 54                	push   %r12
  4020af:	55                   	push   %rbp
  4020b0:	53                   	push   %rbx
  4020b1:	48 81 ec 48 a0 00 00 	sub    $0xa048,%rsp
  4020b8:	49 89 fc             	mov    %rdi,%r12
  4020bb:	89 74 24 04          	mov    %esi,0x4(%rsp)
  4020bf:	49 89 d7             	mov    %rdx,%r15
  4020c2:	49 89 ce             	mov    %rcx,%r14
  4020c5:	4c 89 44 24 08       	mov    %r8,0x8(%rsp)
  4020ca:	4d 89 cd             	mov    %r9,%r13
  4020cd:	48 8b 9c 24 80 a0 00 	mov    0xa080(%rsp),%rbx
  4020d4:	00 
  4020d5:	c7 84 24 1c 20 00 00 	movl   $0x0,0x201c(%rsp)
  4020dc:	00 00 00 00 
  4020e0:	ba 00 00 00 00       	mov    $0x0,%edx
  4020e5:	be 01 00 00 00       	mov    $0x1,%esi
  4020ea:	bf 02 00 00 00       	mov    $0x2,%edi
  4020ef:	e8 1c ed ff ff       	callq  400e10 <socket@plt>
  4020f4:	89 c5                	mov    %eax,%ebp
  4020f6:	85 c0                	test   %eax,%eax
  4020f8:	79 4e                	jns    402148 <submitr+0xa1>
  4020fa:	48 b8 45 72 72 6f 72 	movabs $0x43203a726f727245,%rax
  402101:	3a 20 43 
  402104:	48 89 03             	mov    %rax,(%rbx)
  402107:	48 b8 6c 69 65 6e 74 	movabs $0x6e7520746e65696c,%rax
  40210e:	20 75 6e 
  402111:	48 89 43 08          	mov    %rax,0x8(%rbx)
  402115:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
  40211c:	74 6f 20 
  40211f:	48 89 43 10          	mov    %rax,0x10(%rbx)
  402123:	48 b8 63 72 65 61 74 	movabs $0x7320657461657263,%rax
  40212a:	65 20 73 
  40212d:	48 89 43 18          	mov    %rax,0x18(%rbx)
  402131:	c7 43 20 6f 63 6b 65 	movl   $0x656b636f,0x20(%rbx)
  402138:	66 c7 43 24 74 00    	movw   $0x74,0x24(%rbx)
  40213e:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  402143:	e9 68 06 00 00       	jmpq   4027b0 <submitr+0x709>
  402148:	4c 89 e7             	mov    %r12,%rdi
  40214b:	e8 a0 eb ff ff       	callq  400cf0 <gethostbyname@plt>
  402150:	48 85 c0             	test   %rax,%rax
  402153:	75 67                	jne    4021bc <submitr+0x115>
  402155:	48 b8 45 72 72 6f 72 	movabs $0x44203a726f727245,%rax
  40215c:	3a 20 44 
  40215f:	48 89 03             	mov    %rax,(%rbx)
  402162:	48 b8 4e 53 20 69 73 	movabs $0x6e7520736920534e,%rax
  402169:	20 75 6e 
  40216c:	48 89 43 08          	mov    %rax,0x8(%rbx)
  402170:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
  402177:	74 6f 20 
  40217a:	48 89 43 10          	mov    %rax,0x10(%rbx)
  40217e:	48 b8 72 65 73 6f 6c 	movabs $0x2065766c6f736572,%rax
  402185:	76 65 20 
  402188:	48 89 43 18          	mov    %rax,0x18(%rbx)
  40218c:	48 b8 73 65 72 76 65 	movabs $0x6120726576726573,%rax
  402193:	72 20 61 
  402196:	48 89 43 20          	mov    %rax,0x20(%rbx)
  40219a:	c7 43 28 64 64 72 65 	movl   $0x65726464,0x28(%rbx)
  4021a1:	66 c7 43 2c 73 73    	movw   $0x7373,0x2c(%rbx)
  4021a7:	c6 43 2e 00          	movb   $0x0,0x2e(%rbx)
  4021ab:	89 ef                	mov    %ebp,%edi
  4021ad:	e8 fe ea ff ff       	callq  400cb0 <close@plt>
  4021b2:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  4021b7:	e9 f4 05 00 00       	jmpq   4027b0 <submitr+0x709>
  4021bc:	48 c7 84 24 30 a0 00 	movq   $0x0,0xa030(%rsp)
  4021c3:	00 00 00 00 00 
  4021c8:	48 c7 84 24 38 a0 00 	movq   $0x0,0xa038(%rsp)
  4021cf:	00 00 00 00 00 
  4021d4:	66 c7 84 24 30 a0 00 	movw   $0x2,0xa030(%rsp)
  4021db:	00 02 00 
  4021de:	48 8b 48 18          	mov    0x18(%rax),%rcx
  4021e2:	48 63 50 14          	movslq 0x14(%rax),%rdx
  4021e6:	48 8d b4 24 34 a0 00 	lea    0xa034(%rsp),%rsi
  4021ed:	00 
  4021ee:	48 8b 39             	mov    (%rcx),%rdi
  4021f1:	e8 9a eb ff ff       	callq  400d90 <bcopy@plt>
  4021f6:	0f b7 44 24 04       	movzwl 0x4(%rsp),%eax
  4021fb:	66 c1 c8 08          	ror    $0x8,%ax
  4021ff:	66 89 84 24 32 a0 00 	mov    %ax,0xa032(%rsp)
  402206:	00 
  402207:	ba 10 00 00 00       	mov    $0x10,%edx
  40220c:	48 8d b4 24 30 a0 00 	lea    0xa030(%rsp),%rsi
  402213:	00 
  402214:	89 ef                	mov    %ebp,%edi
  402216:	e8 e5 eb ff ff       	callq  400e00 <connect@plt>
  40221b:	85 c0                	test   %eax,%eax
  40221d:	79 59                	jns    402278 <submitr+0x1d1>
  40221f:	48 b8 45 72 72 6f 72 	movabs $0x55203a726f727245,%rax
  402226:	3a 20 55 
  402229:	48 89 03             	mov    %rax,(%rbx)
  40222c:	48 b8 6e 61 62 6c 65 	movabs $0x6f7420656c62616e,%rax
  402233:	20 74 6f 
  402236:	48 89 43 08          	mov    %rax,0x8(%rbx)
  40223a:	48 b8 20 63 6f 6e 6e 	movabs $0x7463656e6e6f6320,%rax
  402241:	65 63 74 
  402244:	48 89 43 10          	mov    %rax,0x10(%rbx)
  402248:	48 b8 20 74 6f 20 74 	movabs $0x20656874206f7420,%rax
  40224f:	68 65 20 
  402252:	48 89 43 18          	mov    %rax,0x18(%rbx)
  402256:	c7 43 20 73 65 72 76 	movl   $0x76726573,0x20(%rbx)
  40225d:	66 c7 43 24 65 72    	movw   $0x7265,0x24(%rbx)
  402263:	c6 43 26 00          	movb   $0x0,0x26(%rbx)
  402267:	89 ef                	mov    %ebp,%edi
  402269:	e8 42 ea ff ff       	callq  400cb0 <close@plt>
  40226e:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  402273:	e9 38 05 00 00       	jmpq   4027b0 <submitr+0x709>
  402278:	48 c7 c2 ff ff ff ff 	mov    $0xffffffffffffffff,%rdx
  40227f:	4c 89 ef             	mov    %r13,%rdi
  402282:	b8 00 00 00 00       	mov    $0x0,%eax
  402287:	48 89 d1             	mov    %rdx,%rcx
  40228a:	f2 ae                	repnz scas %es:(%rdi),%al
  40228c:	48 f7 d1             	not    %rcx
  40228f:	48 89 ce             	mov    %rcx,%rsi
  402292:	4c 89 ff             	mov    %r15,%rdi
  402295:	48 89 d1             	mov    %rdx,%rcx
  402298:	f2 ae                	repnz scas %es:(%rdi),%al
  40229a:	48 f7 d1             	not    %rcx
  40229d:	49 89 c8             	mov    %rcx,%r8
  4022a0:	4c 89 f7             	mov    %r14,%rdi
  4022a3:	48 89 d1             	mov    %rdx,%rcx
  4022a6:	f2 ae                	repnz scas %es:(%rdi),%al
  4022a8:	49 29 c8             	sub    %rcx,%r8
  4022ab:	48 8b 7c 24 08       	mov    0x8(%rsp),%rdi
  4022b0:	48 89 d1             	mov    %rdx,%rcx
  4022b3:	f2 ae                	repnz scas %es:(%rdi),%al
  4022b5:	49 29 c8             	sub    %rcx,%r8
  4022b8:	48 8d 44 76 fd       	lea    -0x3(%rsi,%rsi,2),%rax
  4022bd:	49 8d 44 00 7b       	lea    0x7b(%r8,%rax,1),%rax
  4022c2:	48 3d 00 20 00 00    	cmp    $0x2000,%rax
  4022c8:	76 72                	jbe    40233c <submitr+0x295>
  4022ca:	48 b8 45 72 72 6f 72 	movabs $0x52203a726f727245,%rax
  4022d1:	3a 20 52 
  4022d4:	48 89 03             	mov    %rax,(%rbx)
  4022d7:	48 b8 65 73 75 6c 74 	movabs $0x747320746c757365,%rax
  4022de:	20 73 74 
  4022e1:	48 89 43 08          	mov    %rax,0x8(%rbx)
  4022e5:	48 b8 72 69 6e 67 20 	movabs $0x6f6f7420676e6972,%rax
  4022ec:	74 6f 6f 
  4022ef:	48 89 43 10          	mov    %rax,0x10(%rbx)
  4022f3:	48 b8 20 6c 61 72 67 	movabs $0x202e656772616c20,%rax
  4022fa:	65 2e 20 
  4022fd:	48 89 43 18          	mov    %rax,0x18(%rbx)
  402301:	48 b8 49 6e 63 72 65 	movabs $0x6573616572636e49,%rax
  402308:	61 73 65 
  40230b:	48 89 43 20          	mov    %rax,0x20(%rbx)
  40230f:	48 b8 20 53 55 42 4d 	movabs $0x5254494d42555320,%rax
  402316:	49 54 52 
  402319:	48 89 43 28          	mov    %rax,0x28(%rbx)
  40231d:	48 b8 5f 4d 41 58 42 	movabs $0x46554258414d5f,%rax
  402324:	55 46 00 
  402327:	48 89 43 30          	mov    %rax,0x30(%rbx)
  40232b:	89 ef                	mov    %ebp,%edi
  40232d:	e8 7e e9 ff ff       	callq  400cb0 <close@plt>
  402332:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  402337:	e9 74 04 00 00       	jmpq   4027b0 <submitr+0x709>
  40233c:	48 8d b4 24 20 40 00 	lea    0x4020(%rsp),%rsi
  402343:	00 
  402344:	b9 00 04 00 00       	mov    $0x400,%ecx
  402349:	b8 00 00 00 00       	mov    $0x0,%eax
  40234e:	48 89 f7             	mov    %rsi,%rdi
  402351:	f3 48 ab             	rep stos %rax,%es:(%rdi)
  402354:	4c 89 ef             	mov    %r13,%rdi
  402357:	e8 0f fb ff ff       	callq  401e6b <urlencode>
  40235c:	85 c0                	test   %eax,%eax
  40235e:	0f 89 8a 00 00 00    	jns    4023ee <submitr+0x347>
  402364:	48 b8 45 72 72 6f 72 	movabs $0x52203a726f727245,%rax
  40236b:	3a 20 52 
  40236e:	48 89 03             	mov    %rax,(%rbx)
  402371:	48 b8 65 73 75 6c 74 	movabs $0x747320746c757365,%rax
  402378:	20 73 74 
  40237b:	48 89 43 08          	mov    %rax,0x8(%rbx)
  40237f:	48 b8 72 69 6e 67 20 	movabs $0x6e6f6320676e6972,%rax
  402386:	63 6f 6e 
  402389:	48 89 43 10          	mov    %rax,0x10(%rbx)
  40238d:	48 b8 74 61 69 6e 73 	movabs $0x6e6120736e696174,%rax
  402394:	20 61 6e 
  402397:	48 89 43 18          	mov    %rax,0x18(%rbx)
  40239b:	48 b8 20 69 6c 6c 65 	movabs $0x6c6167656c6c6920,%rax
  4023a2:	67 61 6c 
  4023a5:	48 89 43 20          	mov    %rax,0x20(%rbx)
  4023a9:	48 b8 20 6f 72 20 75 	movabs $0x72706e7520726f20,%rax
  4023b0:	6e 70 72 
  4023b3:	48 89 43 28          	mov    %rax,0x28(%rbx)
  4023b7:	48 b8 69 6e 74 61 62 	movabs $0x20656c6261746e69,%rax
  4023be:	6c 65 20 
  4023c1:	48 89 43 30          	mov    %rax,0x30(%rbx)
  4023c5:	48 b8 63 68 61 72 61 	movabs $0x6574636172616863,%rax
  4023cc:	63 74 65 
  4023cf:	48 89 43 38          	mov    %rax,0x38(%rbx)
  4023d3:	66 c7 43 40 72 2e    	movw   $0x2e72,0x40(%rbx)
  4023d9:	c6 43 42 00          	movb   $0x0,0x42(%rbx)
  4023dd:	89 ef                	mov    %ebp,%edi
  4023df:	e8 cc e8 ff ff       	callq  400cb0 <close@plt>
  4023e4:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  4023e9:	e9 c2 03 00 00       	jmpq   4027b0 <submitr+0x709>
  4023ee:	4d 89 e1             	mov    %r12,%r9
  4023f1:	4c 8d 84 24 20 40 00 	lea    0x4020(%rsp),%r8
  4023f8:	00 
  4023f9:	4c 89 f9             	mov    %r15,%rcx
  4023fc:	4c 89 f2             	mov    %r14,%rdx
  4023ff:	be 48 33 40 00       	mov    $0x403348,%esi
  402404:	48 8d bc 24 20 60 00 	lea    0x6020(%rsp),%rdi
  40240b:	00 
  40240c:	b8 00 00 00 00       	mov    $0x0,%eax
  402411:	e8 ca e9 ff ff       	callq  400de0 <sprintf@plt>
  402416:	48 8d bc 24 20 60 00 	lea    0x6020(%rsp),%rdi
  40241d:	00 
  40241e:	b8 00 00 00 00       	mov    $0x0,%eax
  402423:	48 c7 c1 ff ff ff ff 	mov    $0xffffffffffffffff,%rcx
  40242a:	f2 ae                	repnz scas %es:(%rdi),%al
  40242c:	48 f7 d1             	not    %rcx
  40242f:	48 8d 51 ff          	lea    -0x1(%rcx),%rdx
  402433:	48 8d b4 24 20 60 00 	lea    0x6020(%rsp),%rsi
  40243a:	00 
  40243b:	89 ef                	mov    %ebp,%edi
  40243d:	e8 ff fa ff ff       	callq  401f41 <rio_writen>
  402442:	48 85 c0             	test   %rax,%rax
  402445:	79 6e                	jns    4024b5 <submitr+0x40e>
  402447:	48 b8 45 72 72 6f 72 	movabs $0x43203a726f727245,%rax
  40244e:	3a 20 43 
  402451:	48 89 03             	mov    %rax,(%rbx)
  402454:	48 b8 6c 69 65 6e 74 	movabs $0x6e7520746e65696c,%rax
  40245b:	20 75 6e 
  40245e:	48 89 43 08          	mov    %rax,0x8(%rbx)
  402462:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
  402469:	74 6f 20 
  40246c:	48 89 43 10          	mov    %rax,0x10(%rbx)
  402470:	48 b8 77 72 69 74 65 	movabs $0x6f74206574697277,%rax
  402477:	20 74 6f 
  40247a:	48 89 43 18          	mov    %rax,0x18(%rbx)
  40247e:	48 b8 20 74 68 65 20 	movabs $0x7365722065687420,%rax
  402485:	72 65 73 
  402488:	48 89 43 20          	mov    %rax,0x20(%rbx)
  40248c:	48 b8 75 6c 74 20 73 	movabs $0x7672657320746c75,%rax
  402493:	65 72 76 
  402496:	48 89 43 28          	mov    %rax,0x28(%rbx)
  40249a:	66 c7 43 30 65 72    	movw   $0x7265,0x30(%rbx)
  4024a0:	c6 43 32 00          	movb   $0x0,0x32(%rbx)
  4024a4:	89 ef                	mov    %ebp,%edi
  4024a6:	e8 05 e8 ff ff       	callq  400cb0 <close@plt>
  4024ab:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  4024b0:	e9 fb 02 00 00       	jmpq   4027b0 <submitr+0x709>
  4024b5:	89 ee                	mov    %ebp,%esi
  4024b7:	48 8d bc 24 20 80 00 	lea    0x8020(%rsp),%rdi
  4024be:	00 
  4024bf:	e8 6c f9 ff ff       	callq  401e30 <rio_readinitb>
  4024c4:	ba 00 20 00 00       	mov    $0x2000,%edx
  4024c9:	48 8d b4 24 20 60 00 	lea    0x6020(%rsp),%rsi
  4024d0:	00 
  4024d1:	48 8d bc 24 20 80 00 	lea    0x8020(%rsp),%rdi
  4024d8:	00 
  4024d9:	e8 46 fb ff ff       	callq  402024 <rio_readlineb>
  4024de:	48 85 c0             	test   %rax,%rax
  4024e1:	7f 7d                	jg     402560 <submitr+0x4b9>
  4024e3:	48 b8 45 72 72 6f 72 	movabs $0x43203a726f727245,%rax
  4024ea:	3a 20 43 
  4024ed:	48 89 03             	mov    %rax,(%rbx)
  4024f0:	48 b8 6c 69 65 6e 74 	movabs $0x6e7520746e65696c,%rax
  4024f7:	20 75 6e 
  4024fa:	48 89 43 08          	mov    %rax,0x8(%rbx)
  4024fe:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
  402505:	74 6f 20 
  402508:	48 89 43 10          	mov    %rax,0x10(%rbx)
  40250c:	48 b8 72 65 61 64 20 	movabs $0x7269662064616572,%rax
  402513:	66 69 72 
  402516:	48 89 43 18          	mov    %rax,0x18(%rbx)
  40251a:	48 b8 73 74 20 68 65 	movabs $0x6564616568207473,%rax
  402521:	61 64 65 
  402524:	48 89 43 20          	mov    %rax,0x20(%rbx)
  402528:	48 b8 72 20 66 72 6f 	movabs $0x72206d6f72662072,%rax
  40252f:	6d 20 72 
  402532:	48 89 43 28          	mov    %rax,0x28(%rbx)
  402536:	48 b8 65 73 75 6c 74 	movabs $0x657320746c757365,%rax
  40253d:	20 73 65 
  402540:	48 89 43 30          	mov    %rax,0x30(%rbx)
  402544:	c7 43 38 72 76 65 72 	movl   $0x72657672,0x38(%rbx)
  40254b:	c6 43 3c 00          	movb   $0x0,0x3c(%rbx)
  40254f:	89 ef                	mov    %ebp,%edi
  402551:	e8 5a e7 ff ff       	callq  400cb0 <close@plt>
  402556:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  40255b:	e9 50 02 00 00       	jmpq   4027b0 <submitr+0x709>
  402560:	4c 8d 44 24 10       	lea    0x10(%rsp),%r8
  402565:	48 8d 8c 24 1c 20 00 	lea    0x201c(%rsp),%rcx
  40256c:	00 
  40256d:	48 8d 94 24 20 20 00 	lea    0x2020(%rsp),%rdx
  402574:	00 
  402575:	be bf 33 40 00       	mov    $0x4033bf,%esi
  40257a:	48 8d bc 24 20 60 00 	lea    0x6020(%rsp),%rdi
  402581:	00 
  402582:	b8 00 00 00 00       	mov    $0x0,%eax
  402587:	e8 e4 e7 ff ff       	callq  400d70 <__isoc99_sscanf@plt>
  40258c:	e9 98 00 00 00       	jmpq   402629 <submitr+0x582>
  402591:	ba 00 20 00 00       	mov    $0x2000,%edx
  402596:	48 8d b4 24 20 60 00 	lea    0x6020(%rsp),%rsi
  40259d:	00 
  40259e:	48 8d bc 24 20 80 00 	lea    0x8020(%rsp),%rdi
  4025a5:	00 
  4025a6:	e8 79 fa ff ff       	callq  402024 <rio_readlineb>
  4025ab:	48 85 c0             	test   %rax,%rax
  4025ae:	7f 79                	jg     402629 <submitr+0x582>
  4025b0:	48 b8 45 72 72 6f 72 	movabs $0x43203a726f727245,%rax
  4025b7:	3a 20 43 
  4025ba:	48 89 03             	mov    %rax,(%rbx)
  4025bd:	48 b8 6c 69 65 6e 74 	movabs $0x6e7520746e65696c,%rax
  4025c4:	20 75 6e 
  4025c7:	48 89 43 08          	mov    %rax,0x8(%rbx)
  4025cb:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
  4025d2:	74 6f 20 
  4025d5:	48 89 43 10          	mov    %rax,0x10(%rbx)
  4025d9:	48 b8 72 65 61 64 20 	movabs $0x6165682064616572,%rax
  4025e0:	68 65 61 
  4025e3:	48 89 43 18          	mov    %rax,0x18(%rbx)
  4025e7:	48 b8 64 65 72 73 20 	movabs $0x6f72662073726564,%rax
  4025ee:	66 72 6f 
  4025f1:	48 89 43 20          	mov    %rax,0x20(%rbx)
  4025f5:	48 b8 6d 20 74 68 65 	movabs $0x657220656874206d,%rax
  4025fc:	20 72 65 
  4025ff:	48 89 43 28          	mov    %rax,0x28(%rbx)
  402603:	48 b8 73 75 6c 74 20 	movabs $0x72657320746c7573,%rax
  40260a:	73 65 72 
  40260d:	48 89 43 30          	mov    %rax,0x30(%rbx)
  402611:	c7 43 38 76 65 72 00 	movl   $0x726576,0x38(%rbx)
  402618:	89 ef                	mov    %ebp,%edi
  40261a:	e8 91 e6 ff ff       	callq  400cb0 <close@plt>
  40261f:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  402624:	e9 87 01 00 00       	jmpq   4027b0 <submitr+0x709>
  402629:	0f b6 84 24 20 60 00 	movzbl 0x6020(%rsp),%eax
  402630:	00 
  402631:	83 e8 0d             	sub    $0xd,%eax
  402634:	75 15                	jne    40264b <submitr+0x5a4>
  402636:	0f b6 84 24 21 60 00 	movzbl 0x6021(%rsp),%eax
  40263d:	00 
  40263e:	83 e8 0a             	sub    $0xa,%eax
  402641:	75 08                	jne    40264b <submitr+0x5a4>
  402643:	0f b6 84 24 22 60 00 	movzbl 0x6022(%rsp),%eax
  40264a:	00 
  40264b:	85 c0                	test   %eax,%eax
  40264d:	0f 85 3e ff ff ff    	jne    402591 <submitr+0x4ea>
  402653:	ba 00 20 00 00       	mov    $0x2000,%edx
  402658:	48 8d b4 24 20 60 00 	lea    0x6020(%rsp),%rsi
  40265f:	00 
  402660:	48 8d bc 24 20 80 00 	lea    0x8020(%rsp),%rdi
  402667:	00 
  402668:	e8 b7 f9 ff ff       	callq  402024 <rio_readlineb>
  40266d:	48 85 c0             	test   %rax,%rax
  402670:	0f 8f 83 00 00 00    	jg     4026f9 <submitr+0x652>
  402676:	48 b8 45 72 72 6f 72 	movabs $0x43203a726f727245,%rax
  40267d:	3a 20 43 
  402680:	48 89 03             	mov    %rax,(%rbx)
  402683:	48 b8 6c 69 65 6e 74 	movabs $0x6e7520746e65696c,%rax
  40268a:	20 75 6e 
  40268d:	48 89 43 08          	mov    %rax,0x8(%rbx)
  402691:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
  402698:	74 6f 20 
  40269b:	48 89 43 10          	mov    %rax,0x10(%rbx)
  40269f:	48 b8 72 65 61 64 20 	movabs $0x6174732064616572,%rax
  4026a6:	73 74 61 
  4026a9:	48 89 43 18          	mov    %rax,0x18(%rbx)
  4026ad:	48 b8 74 75 73 20 6d 	movabs $0x7373656d20737574,%rax
  4026b4:	65 73 73 
  4026b7:	48 89 43 20          	mov    %rax,0x20(%rbx)
  4026bb:	48 b8 61 67 65 20 66 	movabs $0x6d6f726620656761,%rax
  4026c2:	72 6f 6d 
  4026c5:	48 89 43 28          	mov    %rax,0x28(%rbx)
  4026c9:	48 b8 20 72 65 73 75 	movabs $0x20746c7573657220,%rax
  4026d0:	6c 74 20 
  4026d3:	48 89 43 30          	mov    %rax,0x30(%rbx)
  4026d7:	c7 43 38 73 65 72 76 	movl   $0x76726573,0x38(%rbx)
  4026de:	66 c7 43 3c 65 72    	movw   $0x7265,0x3c(%rbx)
  4026e4:	c6 43 3e 00          	movb   $0x0,0x3e(%rbx)
  4026e8:	89 ef                	mov    %ebp,%edi
  4026ea:	e8 c1 e5 ff ff       	callq  400cb0 <close@plt>
  4026ef:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  4026f4:	e9 b7 00 00 00       	jmpq   4027b0 <submitr+0x709>
  4026f9:	8b 94 24 1c 20 00 00 	mov    0x201c(%rsp),%edx
  402700:	81 fa c8 00 00 00    	cmp    $0xc8,%edx
  402706:	74 28                	je     402730 <submitr+0x689>
  402708:	48 8d 4c 24 10       	lea    0x10(%rsp),%rcx
  40270d:	be 88 33 40 00       	mov    $0x403388,%esi
  402712:	48 89 df             	mov    %rbx,%rdi
  402715:	b8 00 00 00 00       	mov    $0x0,%eax
  40271a:	e8 c1 e6 ff ff       	callq  400de0 <sprintf@plt>
  40271f:	89 ef                	mov    %ebp,%edi
  402721:	e8 8a e5 ff ff       	callq  400cb0 <close@plt>
  402726:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  40272b:	e9 80 00 00 00       	jmpq   4027b0 <submitr+0x709>
  402730:	48 8d b4 24 20 60 00 	lea    0x6020(%rsp),%rsi
  402737:	00 
  402738:	48 89 df             	mov    %rbx,%rdi
  40273b:	e8 00 e5 ff ff       	callq  400c40 <strcpy@plt>
  402740:	89 ef                	mov    %ebp,%edi
  402742:	e8 69 e5 ff ff       	callq  400cb0 <close@plt>
  402747:	0f b6 03             	movzbl (%rbx),%eax
  40274a:	83 e8 4f             	sub    $0x4f,%eax
  40274d:	75 18                	jne    402767 <submitr+0x6c0>
  40274f:	0f b6 53 01          	movzbl 0x1(%rbx),%edx
  402753:	83 ea 4b             	sub    $0x4b,%edx
  402756:	75 11                	jne    402769 <submitr+0x6c2>
  402758:	0f b6 53 02          	movzbl 0x2(%rbx),%edx
  40275c:	83 ea 0a             	sub    $0xa,%edx
  40275f:	75 08                	jne    402769 <submitr+0x6c2>
  402761:	0f b6 53 03          	movzbl 0x3(%rbx),%edx
  402765:	eb 02                	jmp    402769 <submitr+0x6c2>
  402767:	89 c2                	mov    %eax,%edx
  402769:	85 d2                	test   %edx,%edx
  40276b:	74 30                	je     40279d <submitr+0x6f6>
  40276d:	bf d0 33 40 00       	mov    $0x4033d0,%edi
  402772:	b9 05 00 00 00       	mov    $0x5,%ecx
  402777:	48 89 de             	mov    %rbx,%rsi
  40277a:	f3 a6                	repz cmpsb %es:(%rdi),%ds:(%rsi)
  40277c:	0f 97 c1             	seta   %cl
  40277f:	0f 92 c2             	setb   %dl
  402782:	38 d1                	cmp    %dl,%cl
  402784:	74 1e                	je     4027a4 <submitr+0x6fd>
  402786:	85 c0                	test   %eax,%eax
  402788:	75 0d                	jne    402797 <submitr+0x6f0>
  40278a:	0f b6 43 01          	movzbl 0x1(%rbx),%eax
  40278e:	83 e8 4b             	sub    $0x4b,%eax
  402791:	75 04                	jne    402797 <submitr+0x6f0>
  402793:	0f b6 43 02          	movzbl 0x2(%rbx),%eax
  402797:	85 c0                	test   %eax,%eax
  402799:	75 10                	jne    4027ab <submitr+0x704>
  40279b:	eb 13                	jmp    4027b0 <submitr+0x709>
  40279d:	b8 00 00 00 00       	mov    $0x0,%eax
  4027a2:	eb 0c                	jmp    4027b0 <submitr+0x709>
  4027a4:	b8 00 00 00 00       	mov    $0x0,%eax
  4027a9:	eb 05                	jmp    4027b0 <submitr+0x709>
  4027ab:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  4027b0:	48 81 c4 48 a0 00 00 	add    $0xa048,%rsp
  4027b7:	5b                   	pop    %rbx
  4027b8:	5d                   	pop    %rbp
  4027b9:	41 5c                	pop    %r12
  4027bb:	41 5d                	pop    %r13
  4027bd:	41 5e                	pop    %r14
  4027bf:	41 5f                	pop    %r15
  4027c1:	c3                   	retq   

00000000004027c2 <init_timeout>:
  4027c2:	53                   	push   %rbx
  4027c3:	89 fb                	mov    %edi,%ebx
  4027c5:	85 ff                	test   %edi,%edi
  4027c7:	74 1f                	je     4027e8 <init_timeout+0x26>
  4027c9:	85 ff                	test   %edi,%edi
  4027cb:	79 05                	jns    4027d2 <init_timeout+0x10>
  4027cd:	bb 00 00 00 00       	mov    $0x0,%ebx
  4027d2:	be 42 1e 40 00       	mov    $0x401e42,%esi
  4027d7:	bf 0e 00 00 00       	mov    $0xe,%edi
  4027dc:	e8 ff e4 ff ff       	callq  400ce0 <signal@plt>
  4027e1:	89 df                	mov    %ebx,%edi
  4027e3:	e8 b8 e4 ff ff       	callq  400ca0 <alarm@plt>
  4027e8:	5b                   	pop    %rbx
  4027e9:	c3                   	retq   

00000000004027ea <init_driver>:
  4027ea:	55                   	push   %rbp
  4027eb:	53                   	push   %rbx
  4027ec:	48 83 ec 18          	sub    $0x18,%rsp
  4027f0:	48 89 fd             	mov    %rdi,%rbp
  4027f3:	be 01 00 00 00       	mov    $0x1,%esi
  4027f8:	bf 0d 00 00 00       	mov    $0xd,%edi
  4027fd:	e8 de e4 ff ff       	callq  400ce0 <signal@plt>
  402802:	be 01 00 00 00       	mov    $0x1,%esi
  402807:	bf 1d 00 00 00       	mov    $0x1d,%edi
  40280c:	e8 cf e4 ff ff       	callq  400ce0 <signal@plt>
  402811:	be 01 00 00 00       	mov    $0x1,%esi
  402816:	bf 1d 00 00 00       	mov    $0x1d,%edi
  40281b:	e8 c0 e4 ff ff       	callq  400ce0 <signal@plt>
  402820:	ba 00 00 00 00       	mov    $0x0,%edx
  402825:	be 01 00 00 00       	mov    $0x1,%esi
  40282a:	bf 02 00 00 00       	mov    $0x2,%edi
  40282f:	e8 dc e5 ff ff       	callq  400e10 <socket@plt>
  402834:	89 c3                	mov    %eax,%ebx
  402836:	85 c0                	test   %eax,%eax
  402838:	79 4f                	jns    402889 <init_driver+0x9f>
  40283a:	48 b8 45 72 72 6f 72 	movabs $0x43203a726f727245,%rax
  402841:	3a 20 43 
  402844:	48 89 45 00          	mov    %rax,0x0(%rbp)
  402848:	48 b8 6c 69 65 6e 74 	movabs $0x6e7520746e65696c,%rax
  40284f:	20 75 6e 
  402852:	48 89 45 08          	mov    %rax,0x8(%rbp)
  402856:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
  40285d:	74 6f 20 
  402860:	48 89 45 10          	mov    %rax,0x10(%rbp)
  402864:	48 b8 63 72 65 61 74 	movabs $0x7320657461657263,%rax
  40286b:	65 20 73 
  40286e:	48 89 45 18          	mov    %rax,0x18(%rbp)
  402872:	c7 45 20 6f 63 6b 65 	movl   $0x656b636f,0x20(%rbp)
  402879:	66 c7 45 24 74 00    	movw   $0x74,0x24(%rbp)
  40287f:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  402884:	e9 23 01 00 00       	jmpq   4029ac <init_driver+0x1c2>
  402889:	bf a7 2e 40 00       	mov    $0x402ea7,%edi
  40288e:	e8 5d e4 ff ff       	callq  400cf0 <gethostbyname@plt>
  402893:	48 85 c0             	test   %rax,%rax
  402896:	75 68                	jne    402900 <init_driver+0x116>
  402898:	48 b8 45 72 72 6f 72 	movabs $0x44203a726f727245,%rax
  40289f:	3a 20 44 
  4028a2:	48 89 45 00          	mov    %rax,0x0(%rbp)
  4028a6:	48 b8 4e 53 20 69 73 	movabs $0x6e7520736920534e,%rax
  4028ad:	20 75 6e 
  4028b0:	48 89 45 08          	mov    %rax,0x8(%rbp)
  4028b4:	48 b8 61 62 6c 65 20 	movabs $0x206f7420656c6261,%rax
  4028bb:	74 6f 20 
  4028be:	48 89 45 10          	mov    %rax,0x10(%rbp)
  4028c2:	48 b8 72 65 73 6f 6c 	movabs $0x2065766c6f736572,%rax
  4028c9:	76 65 20 
  4028cc:	48 89 45 18          	mov    %rax,0x18(%rbp)
  4028d0:	48 b8 73 65 72 76 65 	movabs $0x6120726576726573,%rax
  4028d7:	72 20 61 
  4028da:	48 89 45 20          	mov    %rax,0x20(%rbp)
  4028de:	c7 45 28 64 64 72 65 	movl   $0x65726464,0x28(%rbp)
  4028e5:	66 c7 45 2c 73 73    	movw   $0x7373,0x2c(%rbp)
  4028eb:	c6 45 2e 00          	movb   $0x0,0x2e(%rbp)
  4028ef:	89 df                	mov    %ebx,%edi
  4028f1:	e8 ba e3 ff ff       	callq  400cb0 <close@plt>
  4028f6:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  4028fb:	e9 ac 00 00 00       	jmpq   4029ac <init_driver+0x1c2>
  402900:	48 c7 04 24 00 00 00 	movq   $0x0,(%rsp)
  402907:	00 
  402908:	48 c7 44 24 08 00 00 	movq   $0x0,0x8(%rsp)
  40290f:	00 00 
  402911:	66 c7 04 24 02 00    	movw   $0x2,(%rsp)
  402917:	48 8b 48 18          	mov    0x18(%rax),%rcx
  40291b:	48 63 50 14          	movslq 0x14(%rax),%rdx
  40291f:	48 8d 74 24 04       	lea    0x4(%rsp),%rsi
  402924:	48 8b 39             	mov    (%rcx),%rdi
  402927:	e8 64 e4 ff ff       	callq  400d90 <bcopy@plt>
  40292c:	66 c7 44 24 02 47 26 	movw   $0x2647,0x2(%rsp)
  402933:	ba 10 00 00 00       	mov    $0x10,%edx
  402938:	48 89 e6             	mov    %rsp,%rsi
  40293b:	89 df                	mov    %ebx,%edi
  40293d:	e8 be e4 ff ff       	callq  400e00 <connect@plt>
  402942:	85 c0                	test   %eax,%eax
  402944:	79 50                	jns    402996 <init_driver+0x1ac>
  402946:	48 b8 45 72 72 6f 72 	movabs $0x55203a726f727245,%rax
  40294d:	3a 20 55 
  402950:	48 89 45 00          	mov    %rax,0x0(%rbp)
  402954:	48 b8 6e 61 62 6c 65 	movabs $0x6f7420656c62616e,%rax
  40295b:	20 74 6f 
  40295e:	48 89 45 08          	mov    %rax,0x8(%rbp)
  402962:	48 b8 20 63 6f 6e 6e 	movabs $0x7463656e6e6f6320,%rax
  402969:	65 63 74 
  40296c:	48 89 45 10          	mov    %rax,0x10(%rbp)
  402970:	48 b8 20 74 6f 20 73 	movabs $0x76726573206f7420,%rax
  402977:	65 72 76 
  40297a:	48 89 45 18          	mov    %rax,0x18(%rbp)
  40297e:	66 c7 45 20 65 72    	movw   $0x7265,0x20(%rbp)
  402984:	c6 45 22 00          	movb   $0x0,0x22(%rbp)
  402988:	89 df                	mov    %ebx,%edi
  40298a:	e8 21 e3 ff ff       	callq  400cb0 <close@plt>
  40298f:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  402994:	eb 16                	jmp    4029ac <init_driver+0x1c2>
  402996:	89 df                	mov    %ebx,%edi
  402998:	e8 13 e3 ff ff       	callq  400cb0 <close@plt>
  40299d:	66 c7 45 00 4f 4b    	movw   $0x4b4f,0x0(%rbp)
  4029a3:	c6 45 02 00          	movb   $0x0,0x2(%rbp)
  4029a7:	b8 00 00 00 00       	mov    $0x0,%eax
  4029ac:	48 83 c4 18          	add    $0x18,%rsp
  4029b0:	5b                   	pop    %rbx
  4029b1:	5d                   	pop    %rbp
  4029b2:	c3                   	retq   

00000000004029b3 <driver_post>:
  4029b3:	53                   	push   %rbx
  4029b4:	48 83 ec 10          	sub    $0x10,%rsp
  4029b8:	4c 89 cb             	mov    %r9,%rbx
  4029bb:	45 85 c0             	test   %r8d,%r8d
  4029be:	74 22                	je     4029e2 <driver_post+0x2f>
  4029c0:	48 89 ce             	mov    %rcx,%rsi
  4029c3:	bf d5 33 40 00       	mov    $0x4033d5,%edi
  4029c8:	b8 00 00 00 00       	mov    $0x0,%eax
  4029cd:	e8 ae e2 ff ff       	callq  400c80 <printf@plt>
  4029d2:	66 c7 03 4f 4b       	movw   $0x4b4f,(%rbx)
  4029d7:	c6 43 02 00          	movb   $0x0,0x2(%rbx)
  4029db:	b8 00 00 00 00       	mov    $0x0,%eax
  4029e0:	eb 39                	jmp    402a1b <driver_post+0x68>
  4029e2:	48 85 ff             	test   %rdi,%rdi
  4029e5:	74 26                	je     402a0d <driver_post+0x5a>
  4029e7:	80 3f 00             	cmpb   $0x0,(%rdi)
  4029ea:	74 21                	je     402a0d <driver_post+0x5a>
  4029ec:	4c 89 0c 24          	mov    %r9,(%rsp)
  4029f0:	49 89 c9             	mov    %rcx,%r9
  4029f3:	49 89 d0             	mov    %rdx,%r8
  4029f6:	48 89 f9             	mov    %rdi,%rcx
  4029f9:	48 89 f2             	mov    %rsi,%rdx
  4029fc:	be 26 47 00 00       	mov    $0x4726,%esi
  402a01:	bf a7 2e 40 00       	mov    $0x402ea7,%edi
  402a06:	e8 9c f6 ff ff       	callq  4020a7 <submitr>
  402a0b:	eb 0e                	jmp    402a1b <driver_post+0x68>
  402a0d:	66 c7 03 4f 4b       	movw   $0x4b4f,(%rbx)
  402a12:	c6 43 02 00          	movb   $0x0,0x2(%rbx)
  402a16:	b8 00 00 00 00       	mov    $0x0,%eax
  402a1b:	48 83 c4 10          	add    $0x10,%rsp
  402a1f:	5b                   	pop    %rbx
  402a20:	c3                   	retq   

0000000000402a21 <check>:
  402a21:	89 f8                	mov    %edi,%eax
  402a23:	c1 e8 1c             	shr    $0x1c,%eax
  402a26:	85 c0                	test   %eax,%eax
  402a28:	74 1d                	je     402a47 <check+0x26>
  402a2a:	b9 00 00 00 00       	mov    $0x0,%ecx
  402a2f:	eb 0b                	jmp    402a3c <check+0x1b>
  402a31:	89 f8                	mov    %edi,%eax
  402a33:	d3 e8                	shr    %cl,%eax
  402a35:	3c 0a                	cmp    $0xa,%al
  402a37:	74 14                	je     402a4d <check+0x2c>
  402a39:	83 c1 08             	add    $0x8,%ecx
  402a3c:	83 f9 1f             	cmp    $0x1f,%ecx
  402a3f:	7e f0                	jle    402a31 <check+0x10>
  402a41:	b8 01 00 00 00       	mov    $0x1,%eax
  402a46:	c3                   	retq   
  402a47:	b8 00 00 00 00       	mov    $0x0,%eax
  402a4c:	c3                   	retq   
  402a4d:	b8 00 00 00 00       	mov    $0x0,%eax
  402a52:	c3                   	retq   

0000000000402a53 <gencookie>:
  402a53:	53                   	push   %rbx
  402a54:	83 c7 01             	add    $0x1,%edi
  402a57:	e8 c4 e1 ff ff       	callq  400c20 <srandom@plt>
  402a5c:	e8 ef e2 ff ff       	callq  400d50 <random@plt>
  402a61:	89 c3                	mov    %eax,%ebx
  402a63:	89 c7                	mov    %eax,%edi
  402a65:	e8 b7 ff ff ff       	callq  402a21 <check>
  402a6a:	85 c0                	test   %eax,%eax
  402a6c:	74 ee                	je     402a5c <gencookie+0x9>
  402a6e:	89 d8                	mov    %ebx,%eax
  402a70:	5b                   	pop    %rbx
  402a71:	c3                   	retq   
  402a72:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
  402a79:	00 00 00 
  402a7c:	0f 1f 40 00          	nopl   0x0(%rax)

0000000000402a80 <__libc_csu_init>:
  402a80:	41 57                	push   %r15
  402a82:	41 89 ff             	mov    %edi,%r15d
  402a85:	41 56                	push   %r14
  402a87:	49 89 f6             	mov    %rsi,%r14
  402a8a:	41 55                	push   %r13
  402a8c:	49 89 d5             	mov    %rdx,%r13
  402a8f:	41 54                	push   %r12
  402a91:	4c 8d 25 78 13 20 00 	lea    0x201378(%rip),%r12        # 603e10 <__frame_dummy_init_array_entry>
  402a98:	55                   	push   %rbp
  402a99:	48 8d 2d 78 13 20 00 	lea    0x201378(%rip),%rbp        # 603e18 <__init_array_end>
  402aa0:	53                   	push   %rbx
  402aa1:	4c 29 e5             	sub    %r12,%rbp
  402aa4:	31 db                	xor    %ebx,%ebx
  402aa6:	48 c1 fd 03          	sar    $0x3,%rbp
  402aaa:	48 83 ec 08          	sub    $0x8,%rsp
  402aae:	e8 15 e1 ff ff       	callq  400bc8 <_init>
  402ab3:	48 85 ed             	test   %rbp,%rbp
  402ab6:	74 1e                	je     402ad6 <__libc_csu_init+0x56>
  402ab8:	0f 1f 84 00 00 00 00 	nopl   0x0(%rax,%rax,1)
  402abf:	00 
  402ac0:	4c 89 ea             	mov    %r13,%rdx
  402ac3:	4c 89 f6             	mov    %r14,%rsi
  402ac6:	44 89 ff             	mov    %r15d,%edi
  402ac9:	41 ff 14 dc          	callq  *(%r12,%rbx,8)
  402acd:	48 83 c3 01          	add    $0x1,%rbx
  402ad1:	48 39 eb             	cmp    %rbp,%rbx
  402ad4:	75 ea                	jne    402ac0 <__libc_csu_init+0x40>
  402ad6:	48 83 c4 08          	add    $0x8,%rsp
  402ada:	5b                   	pop    %rbx
  402adb:	5d                   	pop    %rbp
  402adc:	41 5c                	pop    %r12
  402ade:	41 5d                	pop    %r13
  402ae0:	41 5e                	pop    %r14
  402ae2:	41 5f                	pop    %r15
  402ae4:	c3                   	retq   
  402ae5:	90                   	nop
  402ae6:	66 2e 0f 1f 84 00 00 	nopw   %cs:0x0(%rax,%rax,1)
  402aed:	00 00 00 

0000000000402af0 <__libc_csu_fini>:
  402af0:	f3 c3                	repz retq 

Disassembly of section .fini:

0000000000402af4 <_fini>:
  402af4:	48 83 ec 08          	sub    $0x8,%rsp
  402af8:	48 83 c4 08          	add    $0x8,%rsp
  402afc:	c3                   	retq   
