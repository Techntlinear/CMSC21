#include <stdio.h>

int main(void){
    int i;

    i = 20;  // test variable
    printf("VALUE: %d\nWHILE LOOP: ", i);
    while (i < 10) {

        printf("%d ", i);
        i++;
    }

    i = 20;  // test variable
    printf("\nFOR LOOP: ");
    for (;i < 10;) {

        printf("%d ", i);
        i++;
    }

    i = 20;  // test variable
    printf("\nDO WHILE LOOP: ");
    do{

        printf("%d ", i);
        i++;
    } while (i < 10);

    return 0;
}