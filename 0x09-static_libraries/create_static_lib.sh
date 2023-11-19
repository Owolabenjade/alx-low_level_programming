#!/bin/bash

/* Compile each .c file into a .o file */
gcc -c -Wall -Werror -Wextra -pedantic -std=gnu89 *.c

/* Create the static library liball.a from all .o files */
ar -rc liball.a *.o

/* Index the library for faster linking */
ranlib liball.a

/* Clean up the .o files */
rm *.o
