#!/bin/bash

# set -e makes the script exit automatically if any line fails.
set -e

#echo "Running the build script."
#./build.sh
#echo "Compiling sample factorial program with babycino."
#./babycino.sh progs/appel/Factorial.java factorial.c
echo "Compiling resulting source with cc."
cc -o minimal.o minimal.c
echo "Running factorial program."
./minimal.o

