#include <stdio.h>

/*
I prioritized the program being able to handle garbage input over
conciseness. I could've done %1d in scanf but that doesn't
prevent the user from inputting numbers that have more than 2 digits.
*/

int main(void)
{
    int number;
    // keeps asking user for input until user inputs 2-digit number.
    while(1){
        printf("\nNUMBER REVERSER\n\nPlease enter a 2-digit number: ");
        // non-numeric inputs break the program
        if(scanf("%d", &number) != 1){
            printf("Input contains non-numeric character.\nExiting program.\nPlease try again!");
            break;
        }
        // prevents user from inputting numbers that aren't 2-digit numbers
        else if(number > 99 || number < 10){
            printf("Input should be a 2-digit number. Please try again!\n");
        }
        else{ // input is 2-digit number
            int ones = number % 10;
            int tens = number / 10;
            printf("Reversed Number: %d%d", ones, tens);
            break;
        }
    }
    return 0;
}
