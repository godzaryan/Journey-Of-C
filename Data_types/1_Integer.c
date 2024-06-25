/*
    This program demonstrates the use of integer data type
    eg of integer are(-1,-55,0,5,9,11,etc)
*/
#include <stdio.h> // header file

int main() // main function
{
    int x; // AN integer variable/literal is created using int(keyword)
    // here, x can only hold integral values ranging from 2^-31 to 2^31

    x = 5;    // assigning the value 5 to x , now x holds the value 5
    x = 9.02; // not allowed to store real values so it will only hold the intergral part i.e- 9

    // lets print the value of x, follow the format
    printf("%d", x); // %d is called the datatype specifier i.e it specifies the data type of the variable
    // the output will be 9 because the previous value of x is over written to 9 
    return 0;
}