/*
    let's talk about the output function i.e the printf()
*/

#include <stdio.h>

int main()
{
    /*
        The printf() is used for printing strings or variables to the standard
        output i.e the screen via terminal or command prompt
    */
    int x = 10;
    printf("Any string or statements to print");
    // now we can have multipe values passed to the printf() separated by commas ,

    // eg:
    printf("The valve of x is : %d", x);
    // or 
    printf("Here are some values : %d %d %f",10,20,20.56);
    return 0;
}