/*
    This program demonstrates the use of char(character) data type
    eg of char data type are(a,b,c...,z and A,B,C...,Z and special character like ~.`,!,@,.,+,etc)
*/
#include <stdio.h>

int main()
{
    // here alpha is a character variable that holds a single character mentioned above
    char alpha;
    // suppose we assign a svlue to alpha
    alpha = 'A'; // character are assigned under single quotes ('passed_character')

    printf("%c", alpha); // %c specifies that alpha is a character variable
    // output is A
    return 0;
}