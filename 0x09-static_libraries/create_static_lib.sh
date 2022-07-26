#!/bin/bash
gcc -c -Wall -Wextra -pedantic -std=gnu89 *.c
ar -rc libmy.a *.o
