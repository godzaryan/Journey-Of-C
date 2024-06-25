/*
    This program demonstrates the use of double data type
    eg of double are(-1.355,-55.215,0.333,5.258,9.1,11.11,etc)

    double is same as float but hold decimal values upto 15 places
*/
#include<stdio.h>

int main()
{
    double y; // double variable is created with the keyword double
    // Now y variable can hold the real values/ decimal values
    y=1.25456133281; // can hold the value 1.25

    // lets display the value of y
    printf("%.11Lf",y); // here, %.14lf denotes that y is a double variable, .14 says upto 11 decimal values
    // output will be 1.25456133281 as mentioned
    return 0;
}