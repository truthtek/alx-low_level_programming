#!/bin/bash

# Compile all .c files into .o object files
for c_file in *.c; do
    gcc -fPIC -c $c_file
done

# Create the dynamic library
gcc -shared -o liball.so *.o

# Clean up object files
rm *.o

# Confirm dynamic library creation
nm -D --defined-only liball.so
