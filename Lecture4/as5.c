#include <stdio.h>

/*
    CALENDAR MAKER

    It is assumed that user will only
    input integers.

*/

int main(void){

    int weekday, start_day, days;

    printf("\nCALENDAR MAKER");

    // asks for number of days in the month
    while (1){

        printf("\nEnter number of days in the month (28-31 only): ");
        scanf("%d", &days);

        if (days < 28 || days > 31){       
            printf("Invalid input!\nInput can only be from 28 to 31 only."
                                                    " Please Try again.\n");
        }
        else {      
            break;
        }
    }

    // asks for starting day of the month
    while (1){

        printf("{1} Sun - {7} Sat\nEnter the starting day of the week: ");
        scanf("%d", &start_day);

        if (start_day < 1 || start_day > 7){
            printf("Invalid input!\nInput can only be from 1 to 7 only."
                                                    "Please Try again.\n");
        }
        else {
            break;
        }
    }

    printf("Calendar:\nSu Mo Tu We Th Fr Sat\n");

    // so that first day will start on user's chosen day
    for (weekday = 1; weekday < start_day; weekday++){
        printf("   ");
    }

    // variable for end of week/row
    start_day = ((8 - start_day) % 7); 
    
    for (weekday = 1; weekday <= days; weekday++){

        printf("%2d ", weekday);
        
        // makes new row to start new week
        if ((weekday % 7) == start_day){

            printf("\n");
        }
    }

    printf("\nThanks for using the program! Goodbye");

    return 0;
}