# first include the library.
#!/bin/bash

#ask user for name
echo "What is your name ?"
read USER_NAME
echo "Hello $USER_NAME - hope you are well."
# then creat a directory of his name.
echo "I will creat you a directory called ${USER_NAME}"
mkdir "${USER_NAME}"
#then creat file of his name.
cd "$USER_NAME"
touch "${USER_NAME}.cpp"

