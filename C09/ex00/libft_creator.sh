#!/bin/bash

gcc -Wall -Wextra -Werror *.c;
ar -rcs libft.a *.o;
rm -f *.o;
