#!/bin/bash

# set -e makes the script exit automatically if any line fails.
set -e

echo "Running the build script."
./build.sh
echo "Compiling basicTest with babycino."
./babycino.sh subtasks/task4/Precedence.java precedence.c
echo "Compiling resulting source with cc."
cc -o precedence.o precedence.c
echo "Running Precedence test"
./precedence.o

