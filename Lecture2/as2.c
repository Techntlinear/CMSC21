#include <stdio.h>

/*
I prioritized the program being able to handle garbage input over
conciseness. I could've done %1d in scanf but that doesn't
prevent the user from inputting numbers that have more than 3 digits.
*/

int main(void)
{
    int number;
    // keeps asking user for input until user inputs 3-digit number.
    while(1){
        printf("\nNUMBER REVERSER\n\nPlease enter a 3-digit number: ");
        // non-numeric inputs break the program
        if(scanf("%d", &number) != 1){
            printf("Input contains non-numeric character.\nExiting program.\nPlease try again!");
            break;
        }
        // prevents user from inputting numbers that aren't 3-digit numbers
        else if(number > 999 || number < 100){
            printf("Input should be a 2-digit number. Please try again!\n");
        }
        else{ // input is a 3-digit number
            int ones = number % 10;
            int tens = (number % 100) / 10;
            int hundreds = number / 100;
            printf("Reversed Number: %d%d%d", ones, tens, hundreds);
            break;
        }
    }
    return 0;
}
