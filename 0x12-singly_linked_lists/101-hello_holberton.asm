section .data
    msg: db "Hello, Holberton",10,0 ; The string to be printed, followed by a new line and null terminator
    format: db "%s",0                ; Format specifier for printf

section .text
    global main
    extern printf

main:
    push rbp                        ; Save base pointer
    mov rdi, format                ; Load format specifier into rdi
    mov rsi, msg                 ; Load address of the string into rsi
    call printf                    ; Call the printf function

    pop rbp                         ; Restore base pointer
    ret                            ; Return from main
