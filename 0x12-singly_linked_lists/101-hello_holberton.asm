section .data
	message db 'Hello, Holberton', 0
section .text
	global _start
_start:
	; print the message using printf
	mov rdi, message	; Load the address of the string info rdi
	call printf		; Call the printf function
	; Exit the program
	mov eax, 60		; System call number for exit
	xor edi, edi		; Exit code 0
	syscall			; Invoke the system call

section .extern
	extern printf		; Declare the printf function from the C library
