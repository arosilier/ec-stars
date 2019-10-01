/******************************************************************************

Week 5 Day 2 - Repetition
Example 1 - for loops to print stars for 5 numbers

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num1, num2, num3, num4, num5;
    int counter;
    
    printf("Please enter 5 integers: ");
    scanf("%d%d%d%d%d", &num1, &num2, &num3, &num4, &num5);
    
    for (counter = 0; counter < num1; counter++) {
        printf("*");
    }
    printf("\n");

    for (counter = 0; counter < num2; counter++) {
        printf("*");
    }
    printf("\n");
    
    for (counter = 0; counter < num3; counter++) {
        printf("*");
    }
    printf("\n");
    
    for (counter = 0; counter < num4; counter++) {
        printf("*");
    }
    printf("\n");
    
    for (counter = 0; counter < num5; counter++) {
        printf("*");
    }
    
    

    return 0;
}
