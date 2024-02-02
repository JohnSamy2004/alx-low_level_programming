section .data
    hello db "Hello, Holberton", 10, 0   ; 10 is ASCII code for newline, 0 is string terminator

section .text
    global main

    extern printf

main:
    ; Call printf with the address of the string as an argument
    mov rdi, hello   ; First argument: address of the string
    call printf      ; Call printf function

    ; Exit program
    mov rax, 60      ; syscall number for exit
    xor rdi, rdi     ; exit status 0
    syscall
