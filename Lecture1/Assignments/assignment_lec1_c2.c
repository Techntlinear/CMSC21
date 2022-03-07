#include <stdio.h>

int main(void)
{
    int num_1, num_2, difference;

    num_1 = 87;
    num_2 = 15;

    difference = num_1 - num_2;

    printf("1st number: %d\n2nd number: %d\n%d - %d = %d",
            num_1,          num_2,      num_1, num_2, difference);

    return 0;
}