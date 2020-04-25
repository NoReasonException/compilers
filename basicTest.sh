#!/bin/bash

# set -e makes the script exit automatically if any line fails.
set -e

echo "Running the build script."
./build.sh
echo "Compiling basicTest with babycino."
./babycino.sh subtasks/task4/BasicTest.java basicTest.c
echo "Compiling resulting source with cc."
cc -o basicTest.o basicTest.c
echo "Running BasicTest test"
./basicTest.o

