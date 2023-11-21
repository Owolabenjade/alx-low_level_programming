; File: 101-hello_holberton.asm

section .data
	hello db 'Hello, Holberton', 0xa ; String to be printed with newline character

section .text
	global _start

_start:
	; Use the write system call to print the string
	; File descriptor 1 corresponds to standard output (stdout)
	mov rax, 1          ; System call number for write
	mov rdi, 1          ; File descriptor 1 (stdout)
	mov rsi, hello      ; Pointer to the string
	mov rdx, 17         ; Length of the string
	syscall            ; Invoke system call

	; Use the exit system call to terminate the program
	; Exit code 0 indicates successful execution
	mov rax, 60         ; System call number for exit
	xor rdi, rdi        ; Exit code 0
	syscall            ; Invoke system call
