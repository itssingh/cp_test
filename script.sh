#! /bin/sh

g++ -ocode code.cpp
./code < input.txt > out.txt
diff out.txt output.txt > /dev/null
if [ $? -eq 1 ]
then
    exit 1
fi