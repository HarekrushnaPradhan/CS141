#!/bin/bash
echo "what is your name ?"
read USER_NAME
echo "hello $USER_NAME"
mkdir "$USER_NAME"
cd $USER_NAME
for i in 1 2 3 4 5 
do
   touch $USER_NAME"$i.cpp"
done
