#!/bin/bash
gcc -Wall -Werror -Wextra -pediantic -std=gnu89 -c *.c
ar -rc libmy.a *.o
ranlib libmy.a
