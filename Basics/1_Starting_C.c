/*
    getting started with C and getting accustomed with the syntax of C-Language
*/
#include<stdio.h> // this is known as the preprocessor directive that holds the header file
// header files hold all the necessary I/O(input and output commands/functions(we'll talk later about functions))

// next comes the main() function. Every code is written in the main function 
int main() // known as the entry and exit point of the program
{
    // printf() function is a memeber of the header file <stdio.h>
    printf("hello world"); // it displays the string passed to  it onto the output unit (display)
    return 0;
}

/*
    NOTE : To run your code in the cmd prompt/shell follow the steps.
    1. Open the terminal in the directory where the file is.
    2. Type gcc file_name.c -o file_name
    3. TO run the .exe file type .\File_name
*/