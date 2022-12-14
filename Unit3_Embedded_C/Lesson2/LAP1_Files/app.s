
app.o:     file format elf32-littlearm


Disassembly of section .text:

00000000 <main>:
   0:	e92d4800 	push	{fp, lr}
   4:	e28db004 	add	fp, sp, #4
   8:	e59f0004 	ldr	r0, [pc, #4]	; 14 <main+0x14>
   c:	ebfffffe 	bl	0 <UART_Send_String>
  10:	e8bd8800 	pop	{fp, pc}
  14:	00000000 	andeq	r0, r0, r0

Disassembly of section .data:

00000000 <string_buffer>:
   0:	7261654c 	rsbvc	r6, r1, #76, 10	; 0x13000000
   4:	6e695f6e 	cdpvs	15, 6, cr5, cr9, cr14, {3}
   8:	7065645f 	rsbvc	r6, r5, pc, asr r4
   c:	3a206874 	bcc	81a1e4 <main+0x81a1e4>
  10:	72614d20 	rsbvc	r4, r1, #32, 26	; 0x800
  14:	415f6f69 	cmpmi	pc, r9, ror #30
  18:	206c6564 	rsbcs	r6, ip, r4, ror #10
	...

Disassembly of section .debug_info:

00000000 <.debug_info>:
   0:	0000007a 	andeq	r0, r0, sl, ror r0
   4:	00000002 	andeq	r0, r0, r2
   8:	01040000 	mrseq	r0, (UNDEF: 4)
   c:	0000000d 	andeq	r0, r0, sp
  10:	00002001 	andeq	r2, r0, r1
  14:	00005000 	andeq	r5, r0, r0
  18:	00000000 	andeq	r0, r0, r0
  1c:	00001800 	andeq	r1, r0, r0, lsl #16
  20:	00000000 	andeq	r0, r0, r0
  24:	07040200 	streq	r0, [r4, -r0, lsl #4]
  28:	00000000 	andeq	r0, r0, r0
  2c:	00001903 	andeq	r1, r0, r3, lsl #18
  30:	37050200 	strcc	r0, [r5, -r0, lsl #4]
  34:	02000000 	andeq	r0, r0, #0
  38:	00260801 	eoreq	r0, r6, r1, lsl #16
  3c:	01040000 	mrseq	r0, (UNDEF: 4)
  40:	0000004b 	andeq	r0, r0, fp, asr #32
  44:	00010501 	andeq	r0, r1, r1, lsl #10
  48:	18000000 	stmdane	r0, {}	; <UNPREDICTABLE>
  4c:	00000000 	andeq	r0, r0, r0
  50:	01000000 	mrseq	r0, (UNDEF: 0)
  54:	00002c05 	andeq	r2, r0, r5, lsl #24
  58:	00006400 	andeq	r6, r0, r0, lsl #8
  5c:	00640600 	rsbeq	r0, r4, r0, lsl #12
  60:	00630000 	rsbeq	r0, r3, r0
  64:	42070402 	andmi	r0, r7, #33554432	; 0x2000000
  68:	07000000 	streq	r0, [r0, -r0]
  6c:	00000034 	andeq	r0, r0, r4, lsr r0
  70:	00540301 	subseq	r0, r4, r1, lsl #6
  74:	05010000 	streq	r0, [r1, #-0]
  78:	00000003 	andeq	r0, r0, r3
	...

Disassembly of section .debug_abbrev:

00000000 <.debug_abbrev>:
   0:	25011101 	strcs	r1, [r1, #-257]	; 0x101
   4:	030b130e 	movweq	r1, #45838	; 0xb30e
   8:	110e1b0e 	tstne	lr, lr, lsl #22
   c:	10011201 	andne	r1, r1, r1, lsl #4
  10:	02000006 	andeq	r0, r0, #6
  14:	0b0b0024 	bleq	2c00ac <main+0x2c00ac>
  18:	0e030b3e 	vmoveq.16	d3[0], r0
  1c:	16030000 	strne	r0, [r3], -r0
  20:	3a0e0300 	bcc	380c28 <main+0x380c28>
  24:	490b3b0b 	stmdbmi	fp, {r0, r1, r3, r8, r9, fp, ip, sp}
  28:	04000013 	streq	r0, [r0], #-19
  2c:	0c3f002e 	ldceq	0, cr0, [pc], #-184	; ffffff7c <main+0xffffff7c>
  30:	0b3a0e03 	bleq	e83844 <main+0xe83844>
  34:	0c270b3b 	stceq	11, cr0, [r7], #-236	; 0xffffff14
  38:	01120111 	tsteq	r2, r1, lsl r1
  3c:	42960640 	addsmi	r0, r6, #64, 12	; 0x4000000
  40:	0500000c 	streq	r0, [r0, #-12]
  44:	13490101 	movtne	r0, #37121	; 0x9101
  48:	00001301 	andeq	r1, r0, r1, lsl #6
  4c:	49002106 	stmdbmi	r0, {r1, r2, r8, sp}
  50:	000b2f13 	andeq	r2, fp, r3, lsl pc
  54:	00340700 	eorseq	r0, r4, r0, lsl #14
  58:	0b3a0e03 	bleq	e8386c <main+0xe8386c>
  5c:	13490b3b 	movtne	r0, #39739	; 0x9b3b
  60:	0a020c3f 	beq	83164 <main+0x83164>
  64:	Address 0x00000064 is out of bounds.


Disassembly of section .debug_loc:

00000000 <.debug_loc>:
   0:	00000000 	andeq	r0, r0, r0
   4:	00000004 	andeq	r0, r0, r4
   8:	007d0002 	rsbseq	r0, sp, r2
   c:	00000004 	andeq	r0, r0, r4
  10:	00000008 	andeq	r0, r0, r8
  14:	087d0002 	ldmdaeq	sp!, {r1}^
  18:	00000008 	andeq	r0, r0, r8
  1c:	00000018 	andeq	r0, r0, r8, lsl r0
  20:	047b0002 	ldrbteq	r0, [fp], #-2
	...

Disassembly of section .debug_aranges:

00000000 <.debug_aranges>:
   0:	0000001c 	andeq	r0, r0, ip, lsl r0
   4:	00000002 	andeq	r0, r0, r2
   8:	00040000 	andeq	r0, r4, r0
	...
  14:	00000018 	andeq	r0, r0, r8, lsl r0
	...

Disassembly of section .debug_line:

00000000 <.debug_line>:
   0:	0000003b 	andeq	r0, r0, fp, lsr r0
   4:	00260002 	eoreq	r0, r6, r2
   8:	01020000 	mrseq	r0, (UNDEF: 2)
   c:	000d0efb 	strdeq	r0, [sp], -fp
  10:	01010101 	tsteq	r1, r1, lsl #2
  14:	01000000 	mrseq	r0, (UNDEF: 0)
  18:	00010000 	andeq	r0, r1, r0
  1c:	2e707061 	cdpcs	0, 7, cr7, cr0, cr1, {3}
  20:	00000063 	andeq	r0, r0, r3, rrx
  24:	72615500 	rsbvc	r5, r1, #0, 10
  28:	00682e74 	rsbeq	r2, r8, r4, ror lr
  2c:	00000000 	andeq	r0, r0, r0
  30:	00020500 	andeq	r0, r2, r0, lsl #10
  34:	17000000 	strne	r0, [r0, -r0]
  38:	04024b4b 	streq	r4, [r2], #-2891	; 0xb4b
  3c:	Address 0x0000003c is out of bounds.


Disassembly of section .debug_str:

00000000 <.debug_str>:
   0:	69736e75 	ldmdbvs	r3!, {r0, r2, r4, r5, r6, r9, sl, fp, sp, lr}^
   4:	64656e67 	strbtvs	r6, [r5], #-3687	; 0xe67
   8:	746e6920 	strbtvc	r6, [lr], #-2336	; 0x920
   c:	554e4700 	strbpl	r4, [lr, #-1792]	; 0x700
  10:	34204320 	strtcc	r4, [r0], #-800	; 0x320
  14:	322e372e 	eorcc	r3, lr, #12058624	; 0xb80000
  18:	6e697500 	cdpvs	5, 6, cr7, cr9, cr0, {0}
  1c:	00385f74 	eorseq	r5, r8, r4, ror pc
  20:	2e707061 	cdpcs	0, 7, cr7, cr0, cr1, {3}
  24:	6e750063 	cdpvs	0, 7, cr0, cr5, cr3, {3}
  28:	6e676973 	mcrvs	9, 3, r6, cr7, cr3, {3}
  2c:	63206465 	teqvs	r0, #1694498816	; 0x65000000
  30:	00726168 	rsbseq	r6, r2, r8, ror #2
  34:	69727473 	ldmdbvs	r2!, {r0, r1, r4, r5, r6, sl, ip, sp, lr}^
  38:	625f676e 	subsvs	r6, pc, #28835840	; 0x1b80000
  3c:	65666675 	strbvs	r6, [r6, #-1653]!	; 0x675
  40:	69730072 	ldmdbvs	r3!, {r1, r4, r5, r6}^
  44:	7974657a 	ldmdbvc	r4!, {r1, r3, r4, r5, r6, r8, sl, sp, lr}^
  48:	6d006570 	cfstr32vs	mvfx6, [r0, #-448]	; 0xfffffe40
  4c:	006e6961 	rsbeq	r6, lr, r1, ror #18
  50:	555c3a43 	ldrbpl	r3, [ip, #-2627]	; 0xa43
  54:	73726573 	cmnvc	r2, #482344960	; 0x1cc00000
  58:	72614d5c 	rsbvc	r4, r1, #92, 26	; 0x1700
  5c:	445c6f69 	ldrbmi	r6, [ip], #-3945	; 0xf69
  60:	746b7365 	strbtvc	r7, [fp], #-869	; 0x365
  64:	455c706f 	ldrbmi	r7, [ip, #-111]	; 0x6f
  68:	534b2053 	movtpl	r2, #45139	; 0xb053
  6c:	494e555c 	stmdbmi	lr, {r2, r3, r4, r6, r8, sl, ip, lr}^
  70:	45203354 	strmi	r3, [r0, #-852]!	; 0x354
  74:	6465626d 	strbtvs	r6, [r5], #-621	; 0x26d
  78:	5f646564 	svcpl	0x00646564
  7c:	454c5c43 	strbmi	r5, [ip, #-3139]	; 0xc43
  80:	4c5c3243 	lfmmi	f3, 2, [ip], {67}	; 0x43
  84:	5c315041 	ldcpl	0, cr5, [r1], #-260	; 0xfffffefc
  88:	3150414c 	cmpcc	r0, ip, asr #2
	...

Disassembly of section .comment:

00000000 <.comment>:
   0:	43434700 	movtmi	r4, #14080	; 0x3700
   4:	4728203a 			; <UNDEFINED> instruction: 0x4728203a
   8:	2029554e 	eorcs	r5, r9, lr, asr #10
   c:	2e372e34 	mrccs	14, 1, r2, cr7, cr4, {1}
  10:	Address 0x00000010 is out of bounds.


Disassembly of section .ARM.attributes:

00000000 <.ARM.attributes>:
   0:	00003141 	andeq	r3, r0, r1, asr #2
   4:	61656100 	cmnvs	r5, r0, lsl #2
   8:	01006962 	tsteq	r0, r2, ror #18
   c:	00000027 	andeq	r0, r0, r7, lsr #32
  10:	4d524105 	ldfmie	f4, [r2, #-20]	; 0xffffffec
  14:	45363239 	ldrmi	r3, [r6, #-569]!	; 0x239
  18:	00532d4a 	subseq	r2, r3, sl, asr #26
  1c:	01080506 	tsteq	r8, r6, lsl #10
  20:	04120109 	ldreq	r0, [r2], #-265	; 0x109
  24:	01150114 	tsteq	r5, r4, lsl r1
  28:	01180317 	tsteq	r8, r7, lsl r3
  2c:	011a0119 	tsteq	sl, r9, lsl r1
  30:	Address 0x00000030 is out of bounds.


Disassembly of section .debug_frame:

00000000 <.debug_frame>:
   0:	0000000c 	andeq	r0, r0, ip
   4:	ffffffff 			; <UNDEFINED> instruction: 0xffffffff
   8:	7c020001 	stcvc	0, cr0, [r2], {1}
   c:	000d0c0e 	andeq	r0, sp, lr, lsl #24
  10:	00000018 	andeq	r0, r0, r8, lsl r0
	...
  1c:	00000018 	andeq	r0, r0, r8, lsl r0
  20:	8b080e42 	blhi	203930 <main+0x203930>
  24:	42018e02 	andmi	r8, r1, #2, 28
  28:	00040b0c 	andeq	r0, r4, ip, lsl #22
