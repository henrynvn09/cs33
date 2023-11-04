// includes the names of all functions and global variables in the bomb,
// the names of all the functions the bomb calls, and their addresses.
// You may learn something by looking at the function names

bomb:     file format elf64-x86-64

SYMBOL TABLE:
0000000000400238 l    d  .interp	0000000000000000              .interp
0000000000400254 l    d  .note.ABI-tag	0000000000000000              .note.ABI-tag
0000000000400278 l    d  .hash	0000000000000000              .hash
0000000000400348 l    d  .dynsym	0000000000000000              .dynsym
0000000000400660 l    d  .dynstr	0000000000000000              .dynstr
0000000000400798 l    d  .gnu.version	0000000000000000              .gnu.version
00000000004007e0 l    d  .gnu.version_r	0000000000000000              .gnu.version_r
0000000000400820 l    d  .rela.dyn	0000000000000000              .rela.dyn
0000000000400880 l    d  .rela.plt	0000000000000000              .rela.plt
0000000000400b38 l    d  .init	0000000000000000              .init
0000000000400b60 l    d  .plt	0000000000000000              .plt
0000000000400d40 l    d  .text	0000000000000000              .text
00000000004025c4 l    d  .fini	0000000000000000              .fini
00000000004025e0 l    d  .rodata	0000000000000000              .rodata
0000000000403164 l    d  .eh_frame_hdr	0000000000000000              .eh_frame_hdr
0000000000403288 l    d  .eh_frame	0000000000000000              .eh_frame
0000000000603e18 l    d  .init_array	0000000000000000              .init_array
0000000000603e20 l    d  .fini_array	0000000000000000              .fini_array
0000000000603e28 l    d  .dynamic	0000000000000000              .dynamic
0000000000603ff8 l    d  .got	0000000000000000              .got
0000000000604000 l    d  .got.plt	0000000000000000              .got.plt
0000000000604100 l    d  .data	0000000000000000              .data
0000000000604780 l    d  .bss	0000000000000000              .bss
0000000000000000 l    d  .comment	0000000000000000              .comment
0000000000000000 l    d  .debug_aranges	0000000000000000              .debug_aranges
0000000000000000 l    d  .debug_info	0000000000000000              .debug_info
0000000000000000 l    d  .debug_abbrev	0000000000000000              .debug_abbrev
0000000000000000 l    d  .debug_line	0000000000000000              .debug_line
0000000000000000 l    d  .debug_str	0000000000000000              .debug_str
0000000000000000 l    d  .debug_loc	0000000000000000              .debug_loc
0000000000000000 l    df *ABS*	0000000000000000              crtstuff.c
0000000000400d70 l     F .text	0000000000000000              deregister_tm_clones
0000000000400da0 l     F .text	0000000000000000              register_tm_clones
0000000000400de0 l     F .text	0000000000000000              __do_global_dtors_aux
0000000000604798 l     O .bss	0000000000000001              completed.0
0000000000603e20 l     O .fini_array	0000000000000000              __do_global_dtors_aux_fini_array_entry
0000000000400e10 l     F .text	0000000000000000              frame_dummy
0000000000603e18 l     O .init_array	0000000000000000              __frame_dummy_init_array_entry
0000000000000000 l    df *ABS*	0000000000000000              bomb.c
0000000000000000 l    df *ABS*	0000000000000000              phases.c
0000000000402760 l     O .rodata	0000000000000040              array.0
0000000000000000 l    df *ABS*	0000000000000000              support.c
00000000004012ff l     F .text	0000000000000051              sig_handler
0000000000000000 l    df *ABS*	0000000000000000              driverlib.c
0000000000401a9c l     F .text	00000000000000cc              rio_readlineb
0000000000000000 l    df *ABS*	0000000000000000              crtstuff.c
00000000004037e8 l     O .eh_frame	0000000000000000              __FRAME_END__
0000000000000000 l    df *ABS*	0000000000000000              
0000000000603e20 l       .init_array	0000000000000000              __init_array_end
0000000000603e28 l     O .dynamic	0000000000000000              _DYNAMIC
0000000000603e18 l       .init_array	0000000000000000              __init_array_start
0000000000403164 l       .eh_frame_hdr	0000000000000000              __GNU_EH_FRAME_HDR
0000000000604000 l     O .got.plt	0000000000000000              _GLOBAL_OFFSET_TABLE_
00000000004025c0 g     F .text	0000000000000002              __libc_csu_fini
0000000000401585 g     F .text	0000000000000041              skip
0000000000000000       F *UND*	0000000000000000              getenv@@GLIBC_2.2.5
0000000000401653 g     F .text	000000000000003b              phase_defused
00000000006041b0 g     O .data	0000000000000018              n31
0000000000000000       F *UND*	0000000000000000              strcasecmp@@GLIBC_2.2.5
0000000000000000       F *UND*	0000000000000000              __errno_location@@GLIBC_2.2.5
0000000000604780 g     O .bss	0000000000000008              stdout@@GLIBC_2.2.5
0000000000604100  w      .data	0000000000000000              data_start
0000000000604820 g     O .bss	0000000000000640              input_strings
0000000000000000       F *UND*	0000000000000000              strcpy@@GLIBC_2.2.5
0000000000400fcb g     F .text	000000000000004b              func_switch
0000000000604190 g     O .data	0000000000000018              n33
0000000000000000       F *UND*	0000000000000000              puts@@GLIBC_2.2.5
0000000000604788 g     O .bss	0000000000000008              stdin@@GLIBC_2.2.5
0000000000000000       F *UND*	0000000000000000              write@@GLIBC_2.2.5
0000000000604780 g       .data	0000000000000000              _edata
0000000000604250 g     O .data	0000000000000018              n44
00000000006042b0 g     O .data	0000000000000018              n46
0000000000604270 g     O .data	0000000000000018              n42
00000000006042d0 g     O .data	0000000000000018              n48
00000000004025c4 g     F .fini	0000000000000000              _fini
0000000000000000       F *UND*	0000000000000000              strlen@@GLIBC_2.2.5
0000000000604814 g     O .bss	0000000000000004              num_input_strings
0000000000000000       F *UND*	0000000000000000              printf@@GLIBC_2.2.5
0000000000401115 g     F .text	0000000000000045              phase_5
0000000000401549 g     F .text	0000000000000001              initialize_bomb_solve
000000000040154a g     F .text	000000000000003b              blank_line
0000000000401b68 g     F .text	00000000000007aa              submitr
0000000000401016 g     F .text	0000000000000067              phase_3
0000000000400f53 g     F .text	000000000000001f              phase_1
0000000000401350 g     F .text	0000000000000020              invalid_phase
000000000040233a g     F .text	00000000000001a6              init_driver
0000000000000000       F *UND*	0000000000000000              alarm@@GLIBC_2.2.5
0000000000000000       F *UND*	0000000000000000              close@@GLIBC_2.2.5
0000000000604310 g     O .data	0000000000000010              node3
0000000000000000       F *UND*	0000000000000000              read@@GLIBC_2.2.5
0000000000000000       F *UND*	0000000000000000              __libc_start_main@@GLIBC_2.2.5
0000000000000000       F *UND*	0000000000000000              fgets@@GLIBC_2.2.5
000000000040168e g     F .text	0000000000000285              explode_bomb
00000000006042f0 g     O .data	0000000000000010              node1
0000000000604100 g       .data	0000000000000000              __data_start
0000000000000000       F *UND*	0000000000000000              signal@@GLIBC_2.2.5
0000000000000000       F *UND*	0000000000000000              gethostbyname@@GLIBC_2.2.5
0000000000604330 g     O .data	0000000000000010              node5
0000000000000000       F *UND*	0000000000000000              fprintf@@GLIBC_2.2.5
0000000000000000  w      *UND*	0000000000000000              __gmon_start__
0000000000000000       F *UND*	0000000000000000              strtol@@GLIBC_2.2.5
0000000000401263 g     F .text	000000000000003d              fun7
0000000000604108 g     O .data	0000000000000000              .hidden __dso_handle
00000000004025e0 g     O .rodata	0000000000000004              _IO_stdin_used
0000000000604150 g     O .data	0000000000000018              n22
0000000000604380 g     O .data	0000000000000400              host_table
000000000040107d g     F .text	0000000000000041              func4
0000000000604110 g     O .data	0000000000000018              n1
0000000000401370 g     F .text	0000000000000019              string_length
0000000000402550 g     F .text	0000000000000065              __libc_csu_init
0000000000000000       F *UND*	0000000000000000              fflush@@GLIBC_2.2.5
000000000040149a g     F .text	00000000000000af              welcome_message
0000000000000000       F *UND*	0000000000000000              __isoc99_sscanf@@GLIBC_2.7
00000000006041d0 g     O .data	0000000000000018              n34
0000000000604170 g     O .data	0000000000000018              n32
0000000000604e60 g       .bss	0000000000000000              _end
0000000000400d40 g     F .text	0000000000000000              _start
00000000004012a0 g     F .text	000000000000005f              s3cret_phase
00000000006047a0 g     O .bss	0000000000000008              infile
0000000000401a73 g     F .text	0000000000000029              sigalrm_handler
0000000000402312 g     F .text	0000000000000028              init_timeout
0000000000604780 g       .bss	0000000000000000              __bss_start
0000000000604368 g     O .data	000000000000000a              userid
0000000000400e12 g     F .text	0000000000000141              main
0000000000604230 g     O .data	0000000000000018              n47
0000000000604290 g     O .data	0000000000000018              n43
0000000000604210 g     O .data	0000000000000018              n41
0000000000000000       F *UND*	0000000000000000              memmove@@GLIBC_2.2.5
0000000000401952 g     F .text	0000000000000121              read_line
00000000006041f0 g     O .data	0000000000000018              n45
0000000000401389 g     F .text	000000000000005c              strings_not_equal
00000000004010be g     F .text	0000000000000057              phase_4
0000000000000000       F *UND*	0000000000000000              fopen@@GLIBC_2.2.5
000000000040115a g     F .text	0000000000000109              phase_6
00000000006047c0 g     O .bss	0000000000000050              scratch
00000000004024e0 g     F .text	000000000000006a              driver_post
00000000004015c6 g     F .text	000000000000008d              send_msg
0000000000400f72 g     F .text	0000000000000059              phase_2
0000000000604810 g     O .bss	0000000000000004              trap
0000000000000000       F *UND*	0000000000000000              gethostname@@GLIBC_2.2.5
0000000000000000       F *UND*	0000000000000000              sprintf@@GLIBC_2.2.5
0000000000000000       F *UND*	0000000000000000              exit@@GLIBC_2.2.5
0000000000604374 g     O .data	0000000000000004              bomb_id
0000000000000000       F *UND*	0000000000000000              connect@@GLIBC_2.2.5
0000000000604780 g     O .data	0000000000000000              .hidden __TMC_END__
0000000000604300 g     O .data	0000000000000010              node2
0000000000604320 g     O .data	0000000000000010              node4
0000000000604350 g     O .data	0000000000000015              user_password
0000000000000000       F *UND*	0000000000000000              sleep@@GLIBC_2.2.5
0000000000604340 g     O .data	0000000000000010              node6
0000000000400b38 g     F .init	0000000000000000              _init
0000000000401913 g     F .text	000000000000003f              read_six_numbers
0000000000604130 g     O .data	0000000000000018              n21
00000000004013e5 g     F .text	00000000000000b5              initialize_bomb
0000000000000000       F *UND*	0000000000000000              __ctype_b_loc@@GLIBC_2.3
0000000000604790 g     O .bss	0000000000000008              stderr@@GLIBC_2.2.5
0000000000000000       F *UND*	0000000000000000              socket@@GLIBC_2.2.5


