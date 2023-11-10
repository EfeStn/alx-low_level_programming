assembly
section .data
    hello db "Hello, Holberton", 0
    format db "%s", 0

section .text
    global _start

_start:
    ; Set up arguments for printf
    mov rdi, format
    mov rsi, hello
    xor rax, rax  ; Clear rax register

    ; Call printf
    call printf

    ; Exit the program
    mov eax, 60
    xor edi, edi
    syscall
