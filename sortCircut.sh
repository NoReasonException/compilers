#!/bin/bash

# set -e makes the script exit automatically if any line fails.
set -e

echo "Running the build script."
./build.sh
echo "Compiling basicTest with babycino."
./babycino.sh subtasks/task4/ShortCircut.java shortCircut.c
echo "Compiling resulting source with cc."
cc -o shortCircut.o shortCircut.c
echo "Running ShortCircut test"
./shortCircut.o

