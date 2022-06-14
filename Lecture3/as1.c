#include <stdio.h>
#include <stdbool.h>

/*
    Teenager Determiner

    It is assumed that user will only input integers
    I did not account for when user inputs garbage

    I also opted to go a little extra to make it 
    more fun for the user

*/

int main(void){

    // initialization of variables
    int age, navigation;
    bool teenager;
    
    // loops for ease of use
    do{

        printf("TEENAGER DETERMINER\nPlease enter your age: ");
        scanf("%d", &age);

        // determines if user is a teenager.
        teenager = (age >= 13 && age <= 19);

        printf("You're %d, %s", age, teenager ? "you're a teenager." : 
                                        "you're not a teenager.");

        printf("\n\n{Any Key} Try Again\n{0} Exit\nWould you like to try again? ");
        scanf("%d", &navigation);

        // just a goodbye message
        if(navigation == 0){
            printf("\nThank you for using my program! Goodbye.");
        }

    } while (navigation != 0);
    
    
    return 0;
}