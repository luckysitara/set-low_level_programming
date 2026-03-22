#!/bin/bash
gcc -c -Wall -Werror -Wextra -c *.c
ar -rcs liball.a *.o
