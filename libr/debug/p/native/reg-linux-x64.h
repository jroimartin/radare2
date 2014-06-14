// 64bit host debugging 64bit target
return strdup (
"=pc	rip\n"
"=sp	rsp\n"
"=bp	rbp\n"
"=a0	rax\n"
"=a1	rbx\n"
"=a2	rcx\n"
"=a3	rdx\n"
"=sn	orax\n"
"# no profile defined for x86-64\n"
"gpr	r15	.64	0	0\n"
"gpr	r14	.64	8	0\n"
"gpr	r13	.64	16	0\n"
"gpr	r12	.64	24	0\n"
"gpr	rbp	.64	32	0\n"
"gpr	rbx	.64	40	0\n"
"gpr	ebx	.32	40	0\n"
"gpr	bx	.16	40	0\n"
"gpr	bh	.8	40	0\n"
"gpr	bl	.8	41	0\n"
"gpr	r11	.64	48	0\n"
"gpr	r10	.64	56	0\n"
"gpr	r9	.64	64	0\n"
"gpr	r8	.64	72	0\n"
"gpr	rax	.64	80	0\n"
"gpr	eax	.32	80	0\n"
"gpr	ax	.16	80	0\n"
"gpr	ah	.8	80	0\n"
"gpr	al	.8	81	0\n"
"gpr	rcx	.64	88	0\n"
"gpr	ecx	.32	88	0\n"
"gpr	cx	.16	88	0\n"
"gpr	ch	.8	88	0\n"
"gpr	cl	.8	89	0\n"
"gpr	rdx	.64	96	0\n"
"gpr	edx	.32	96	0\n"
"gpr	dx	.16	96	0\n"
"gpr	dh	.8	96	0\n"
"gpr	dl	.8	97	0\n"
"gpr	rsi	.64	104	0\n"
"gpr	rdi	.64	112	0\n"
"gpr	orax	.64	120	0\n"
"gpr	rip	.64	128	0\n"
"seg	cs	.64	136	0\n"
"gpr	rflags	.64	144	0	c1p.a.zstido.n.rv\n"
"gpr	eflags	.32	144	0	c1p.a.zstido.n.rv\n"
"gpr	cf	.1	.1152	0	carry\n"
"gpr	pf	.1	.1154	0	parity\n"
"gpr	af	.1	.1156	0	adjust\n"
"gpr	zf	.1	.1158	0	zero\n"
"gpr	sf	.1	.1159	0	sign\n"
"gpr	tf	.1	.1160	0	trap\n"
"gpr	if	.1	.1161	0	interrupt\n"
"gpr	df	.1	.1162	0	direction\n"
"gpr	of	.1	.1163	0	overflow\n"

"gpr	rsp	.64	152	0\n"
"seg	ss	.64	160	0\n"
"seg	fs_base	.64	168	0\n"
"seg	gs_base	.64	176	0\n"
"seg	ds	.64	184	0\n"
"seg	es	.64	192	0\n"
"seg	fs	.64	200	0\n"
"seg	gs	.64	208	0\n"
"drx	dr0	.64	0	0\n"
"drx	dr1	.64	8	0\n"
"drx	dr2	.64	16	0\n"
"drx	dr3	.64	24	0\n"
// dr4 32
// dr5 40
"drx	dr6	.64	48	0\n"
"drx	dr7	.64	56	0\n"
);

