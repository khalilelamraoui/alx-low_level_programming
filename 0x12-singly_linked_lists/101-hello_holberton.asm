section .data
    hello db "Hello, Holberton", 10
    hello_len equ $ - hello

section .text
    global main
    extern printf

main:
    sub rsp, 8
    mov rdi, hello
    call printf
    add rsp, 8
    ret
