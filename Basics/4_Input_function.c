/*
    Next we have the input function i.e - scanf()
    it takes input from the user via standard input device i.e
    the keyboard ..
*/
#include <stdio.h>

int main()
{
    // lets understand the format to take the input
    int x;   // integer variable
    float y; // floating variable
    scanf("%d", &x);
    /*
        look at the syntax , we have a variable specifier ie %d(for integer)
        followed by an ampersand(&) and variable named(x) that say to store the value at the address of x
    */
    printf("%d", x); // print the value that was taken as input

    // try
    printf("Enter Another number : ");
    scanf("%f", &y); // for floating variable %f is used while taking input
    printf("%f", y);
    return 0;
}