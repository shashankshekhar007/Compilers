	.data
newline: .asciiz "\n"
arr:	.space	400
i:	.word	0
sum:	.word	0
arr=:	.word	0
t:	.word	0
jump:	.word	0
if:	.word	0
eq:	.word	0
n:	.word	0

	.text
	.globl main

main:
	li $v0,5
	syscall
	move $s0,$v0
	sw $v0,n
	li $s1,0
	li $s2,1
	sw $s1, i
	sw $s2, sum
	sw $s0, n
	li $v0,5
	syscall
	move $s0,$v0
	sw $v0,t
	addiu $s1,$s1,1
	li $s1,0
	li $v0,1
	move $a0,$s0
	syscall

	li $v0,4
	la $a0,newline
	syscall

	addu $s2,$s2,$s0
	addiu $s1,$s1,1
	li $v0,1
	move $a0,$s2
	syscall

	li $v0,4
	la $a0,newline
	syscall

	li $v0,10
	syscall

