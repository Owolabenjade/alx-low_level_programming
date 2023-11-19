#!/bin/bash

/* List of excluded files (e.g., main.c) */
EXCLUDED_FILES="main.c"

/* Compile each .c file (excluding excluded files) into a .o file */
for file in *.c; do
	    if [[ ! " $EXCLUDED_FILES " =~ " $file " ]]; then
		    		gcc -c -Wall -Werror -Wextra -pedantic -std=gnu89 "$file"
					fi
				done

				/* Create the static library liball.a from all .o files (excluding excluded files) */
				ar -rc liball.a *.o

				/* Index the library for faster linking */
				ranlib liball.a

				/* Clean up the .o files */
				rm *.o
