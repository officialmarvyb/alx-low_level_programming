section .data
  msg: db "Hello, Holberton",10,0
 format: db "%s",0

section .text
    global main

extern printf

main:
    push rbp
    mov rdi, format
    mov rsi, msg
    call printf  

    mov eax, 60
    xor rdi, rdi
    syscall

    pop rbp
    ret

