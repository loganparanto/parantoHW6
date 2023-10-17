#!/bin/bash

# Compile the C++ application
g++ -o myCopier myCopier.cpp

# Check if compilation was successful
if [ $? -eq 0 ]; then
    echo "Compilation successful."
    echo "Example invocation: ./myCopier file1.txt file2.txt"
else
    echo "Compilation failed."
fi

