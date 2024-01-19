#!/bin/bash

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -fPIC -c 100-operations.c
gcc -shared -o 100-operations.so 100-operations.o
rm -f 100-operations.o
