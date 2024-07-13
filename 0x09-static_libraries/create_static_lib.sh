#!/bin/bash
# Compile all .c files in the current directory to .o files
gcc -c *.c

# Create the static library liball.a from all the .o files
ar rcs liball.a *.o

# Clean up the .o files after creating the library
rm *.o

