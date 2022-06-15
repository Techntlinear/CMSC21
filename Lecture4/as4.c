#include <stdio.h>

int main(void) {
    
    int input, n, two_n = 1;

    while(1){

        printf("\nPOWERS OF TWO\n\nInput n (from 0 - 30 only): ");
        scanf("%d", &input);

        // exponent of 31 results in miscalculation
        if (input < 0 || input >30){
            printf("Program can only calculate til power of 30."
                                            "\nPlease try again!");
        }
        else{  // input is within 0 - 30
            break;        
        }
    }

    printf("  n   2^n\n-----------\n");
    for (n = 0; n <= input; n++) {
        printf("%3d   %d\n", n, two_n);
        two_n *= 2;
    }

    printf("Thanks for using the program! Goodbye");

    return 0;
}