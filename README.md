# Oops Shall We Try Again C++ edition

"This lab is dedicated to practice input validation, arrays, C-string, and libraries."

This program is a small input validation library I wrote in C++. Its main job is to make sure the user enters a valid number before the program continues.

The project has three files:

input_prot.h – the header file. It just declares the function so other files can use it.

input_prot.cpp – the source file where the function getInput is actually defined.

driver.cpp – a simple test program that calls the function and shows how it works.

How the function works

The function is called getInput. It takes four arguments: a prompt message, an error message, and the minimum and maximum allowed values. It keeps asking the user until they enter a valid integer within the given range. If the user types something that’s not a number, the program clears the input and asks again. Once the input is valid, the function returns it.

Example
Enter number (0-100): hello
Invalid! Try again:
Enter number (0-100): 150
Invalid! Try again:
Enter number (0-100): 25
Number entered: 25

Compiling and running

To compile everything, I used:

g++ driver.cpp input_prot.cpp -o oops_program


Then to run it:

./oops_program
