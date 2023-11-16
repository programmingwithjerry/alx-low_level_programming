section		.text
	extern	printf
	global	main

main:
	lea	rdi, [rel msg]
	xor	eax, eax
	call	printf

section		.data
	msg db 'Hello, Holberton', 0xa, 0

