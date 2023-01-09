#!/bin/bash
gcc -wall -wextrab -werror -pedantic -c *.c
ar rc liball.a *.o

