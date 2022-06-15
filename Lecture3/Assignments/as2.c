#include <stdio.h>

/*
    NUMBER TO WORDS CONVERTER

    It is assumed that user will only
    input integers

    Program will not loop because code
    will look ugly if I did that ;-;

*/

int main(void){

    int number;

    // will keep asking for input until 2-digit number is inputted
    do{

        printf("NUMBER TO WORDS CONVERTER\nPlease enter a 2-digit number: ");
        scanf("%d", &number);

    } while ((10 > number )|| (number > 99));
    
    printf("\nNumber: %d\nWord form: ", number);

    // for the tens digit
    switch (number / 10){
        case 1:

            // teens always seem to special treatment :>
            switch (number % 10){

                case 0: printf("ten"); break;
                case 1: printf("eleven"); break;
                case 2: printf("twelve"); break;
                case 3: printf("thirteen"); break;
                case 4: printf("fourteen"); break;
                case 5: printf("fifteen"); break;
                case 6: printf("sixteen"); break;
                case 7: printf("seventeen"); break;
                case 8: printf("eighteen"); break;
                case 9: printf("nineteen"); break;
            }
            // no need to go through remaining code
            return 0;  
        
        case 2: printf("twenty"); break;
        case 3: printf("thirty"); break;
        case 4: printf("forty"); break;
        case 5: printf("fifty"); break;
        case 6: printf("sixty"); break;
        case 7: printf("seventy"); break;
        case 8: printf("eighty"); break;
        case 9: printf("ninety"); break;
    }

    // for the ones digit
    switch (number % 10){

        case 1: printf("-one"); break;
        case 2: printf("-two"); break;
        case 3: printf("-three"); break;
        case 4: printf("-four"); break;
        case 5: printf("-five"); break;
        case 6: printf("-six"); break;
        case 7: printf("-seven"); break;
        case 8: printf("-eight"); break;
        case 9: printf("-nine"); break;
    }
    
    printf("\n\nThanks for using the program! Goodbye");
    return 0;
}