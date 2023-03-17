	.file	"102-print_comb5.c"
	.intel_syntax noprefix
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	endbr64
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	DWORD PTR -16[rbp], 0
	jmp	.L2
.L9:
	mov	eax, DWORD PTR -16[rbp]
	add	eax, 48
	mov	edi, eax
	call	putchar@PLT
	mov	eax, DWORD PTR -12[rbp]
	add	eax, 48
	mov	edi, eax
	call	putchar@PLT
	mov	eax, DWORD PTR -16[rbp]
	mov	DWORD PTR -12[rbp], eax
	jmp	.L3
.L8:
	mov	DWORD PTR -8[rbp], 1
	jmp	.L4
.L7:
	mov	DWORD PTR -4[rbp], 1
	jmp	.L5
.L6:
	mov	edi, 32
	call	putchar@PLT
	mov	eax, DWORD PTR -8[rbp]
	add	eax, 48
	mov	edi, eax
	call	putchar@PLT
	mov	eax, DWORD PTR -4[rbp]
	add	eax, 48
	mov	edi, eax
	call	putchar@PLT
	add	DWORD PTR -4[rbp], 1
.L5:
	cmp	DWORD PTR -4[rbp], 98
	jle	.L6
	add	DWORD PTR -8[rbp], 1
.L4:
	cmp	DWORD PTR -8[rbp], 98
	jle	.L7
	add	DWORD PTR -12[rbp], 1
.L3:
	cmp	DWORD PTR -12[rbp], 98
	jle	.L8
	add	DWORD PTR -16[rbp], 1
.L2:
	cmp	DWORD PTR -16[rbp], 98
	jle	.L9
	mov	eax, 0
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 11.3.0-1ubuntu1~22.04) 11.3.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	1f - 0f
	.long	4f - 1f
	.long	5
0:
	.string	"GNU"
1:
	.align 8
	.long	0xc0000002
	.long	3f - 2f
2:
	.long	0x3
3:
	.align 8
4:
