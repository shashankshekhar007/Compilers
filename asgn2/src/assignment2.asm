	.data
newline: .asciiz "\n"
a:	.word	0

	.text
	.globl main

main:
	li $s0,3
	addu $s0,$s0,$s0
	jal foo
	sll $0,$0,0
	li $v0,1
	move $a0,$s0
	syscall

	li $v0,4
	la $a0,newline
	syscall

	li $v0,10
	syscall

foo:
	subu $sp, $sp, 4
	sw $ra, ($sp)
	sw $s0, a
	addu $s0,$s0,$s0
	move $v0, $s1
	lw $ra, ($sp)
	addiu $sp, $sp, 4
	jr $ra

