#!/bin/bash
gcc -Wall -Werror -Wextra -pediantic -std=gnu89 -c *.c
ar rc liball.a *.o
ranlib liball.a
