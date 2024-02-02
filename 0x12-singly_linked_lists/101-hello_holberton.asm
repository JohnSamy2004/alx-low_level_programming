section .data
    format db "Hello, Holberton", 0    ; Define the format string terminated with null character

section .text
    extern printf

global main

main:
    ; Call printf to print the formatted string
    mov rdi, format     ; Set the first argument: address of the format string
    call printf         ; Call printf function

    ; Exit the program
    mov rax, 60         ; System call number for exit
    xor rdi, rdi        ; Exit status 0
    syscall             ; Invoke the system call
