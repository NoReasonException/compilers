#!/bin/bash

# set -e makes the script exit automatically if any line fails.
set -e

echo "Running the build script."
./build.sh
echo "Compiling basicTest with babycino."
./babycino.sh subtasks/task4/LeftAsc.java leftAsc.c
echo "Compiling resulting source with cc."
cc -o leftAsc.o leftAsc.c
echo "Running LeftAsc test"
./leftAsc.o

