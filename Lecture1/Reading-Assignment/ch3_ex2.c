#include <stdio.h>

// displays 2 values in different decimal forms
int main(void)
{
    // creates integer and float variables
    int i;
    float x;

    // assigns values to the variables
    i =  40;
    x = 839.21f;

    // prints the variables in different decimal forms
    printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
    printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);

    return 0;
}