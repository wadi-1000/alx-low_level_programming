#!/bin/bash

# Compile all .c files in the current directory into .o files
gcc -c *.c

# Create the static library liball.a from the .o files
ar rcs liball.a *.o

# Clean up the .o files
rm *.o

echo "Static library liball.a created."

