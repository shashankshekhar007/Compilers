	.data
newline: .asciiz "\n"
a:	.word	0
d:	.word	0
c:	.word	0
e:	.word	0
f:	.word	0
g:	.word	0
h:	.word	0
i:	.word	0
k:	.word	0
l:	.word	0
m:	.word	0
n:	.word	0
o:	.word	0
p:	.word	0
q:	.word	0
r:	.word	0
s:	.word	0
t:	.word	0
u:	.word	0
v:	.word	0
w:	.word	0
x:	.word	0
y:	.word	0
z:	.word	0
a1:	.word	0
a2:	.word	0
a3:	.word	0
a4:	.word	0
a5:	.word	0
a6:	.word	0
a7:	.word	0
a8:	.word	0
a9:	.word	0
a10:	.word	0
a11:	.word	0
a12:	.word	0

	.text
	.globl main
	lw $s1, d
	move $s0,$s1
	addiu $s2,$s0,3
	lw $s4, f
	addu $s3,$s4,$s0
	lw $s6, h
	lw $s7, i
	addu $s5,$s6,$s7
	sw $s0, a
	lw $s0, k
	move $s7,$s0
	sw $s1, d
	lw $s1, l
	move $s0,$s1
	sw $s2, c
	lw $s2, m
	move $s1,$s2
	sw $s3, e
	sw $s4, f
	lw $s4, o
	move $s3,$s4
	sw $s5, g
	sw $s6, h
	lw $s6, q
	move $s5,$s6
	sw $s7, i
	sw $s0, k
	lw $s0, s
	move $s7,$s0
	sw $s1, l
	lw $s1, t
	move $s0,$s1
	sw $s2, m
	sw $s3, n
	lw $s3, v
	move $s2,$s3
	sw $s4, o
	sw $s5, p
	lw $s5, x
	move $s4,$s5
	sw $s6, q
	sw $s7, r
	lw $s7, z
	move $s6,$s7
	sw $s0, s
	sw $s1, t
	lw $s1, a2
	move $s0,$s1
	sw $s2, u
	sw $s3, v
	lw $s3, a4
	move $s2,$s3
	sw $s4, w
	sw $s5, x
	lw $s5, a6
	move $s4,$s5
	sw $s6, y
	sw $s7, z
	lw $s7, a8
	move $s6,$s7
	sw $s0, a1
	sw $s1, a2
	lw $s1, a10
	move $s0,$s1
	sw $s2, a3
	sw $s3, a4
	lw $s3, a12
	move $s2,$s3
	li $v0,10
	syscall

