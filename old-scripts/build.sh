#!/bin/bash
./antlr4.sh -visitor -package babycino src/babycino/MiniJava.g4
javac -cp ".:./contrib/antlr/antlr-4.8-complete.jar:$CLASSPATH" src/babycino/*.java

