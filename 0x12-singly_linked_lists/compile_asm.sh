#!/bin/bash
nasm -f elf64 101-hello_holberton.asm -o 101-hello_holberton.o
ld -m elf_x86_64 101-hello_holberton.o -o hello
