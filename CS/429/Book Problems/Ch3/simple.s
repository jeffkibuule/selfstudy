	.section	__TEXT,__text,regular,pure_instructions
	.globl	_simple
	.align	4, 0x90
_simple:                                ## @simple
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp2:
	.cfi_def_cfa_offset 16
Ltmp3:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp4:
	.cfi_def_cfa_register %rbp
	addl	(%rdi), %esi
	movl	%esi, (%rdi)
	movl	%esi, %eax
	popq	%rbp
	ret
	.cfi_endproc


.subsections_via_symbols
