#include <stdio.h>

// adds two fractions together
int main(void)
{
    // creates integer variables for numerators and denominators
    int num1, denom1, num2, denom2, result_num, result_denom;

    // asks the user for the first fraction
    // input must be a fraction separated by '/'
    printf ( "Enter first fraction: ") ;
    scanf ( "%d/%d" , &num1, &denom1) ;

    // asks the user for the first fraction
    // input must be a fraction separated by '/'
    printf ( "Enter second fraction: " ) ;
    scanf ( " %d/%d" , &num2, &denom2) ;

    // gets the sum of the two fraction
    // assigns the resulting numerator and denominator to corresponding variables
    result_num = num1 * denom2 + num2 * denom1; 
    result_denom = denom1 * denom2; 

    // prints the resulting fraction
    // resulting fraction may not be in lowest term
    printf ( "The sum is %d/%d\n", result_num, result_denom);

    return 0;
} 