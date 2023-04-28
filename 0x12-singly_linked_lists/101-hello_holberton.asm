section .data
	hello: db 'Hello, Holberton'
oAh, 00

section .text
	global main
	extern printf
main:
	push rbp
	mov rbp, rsp

	mov rdi, hello
	xor rax, rax
	call printf

	mov resp, rdp
	pop rdp
	xor eax, eax
	ret
