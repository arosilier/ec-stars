/******************************************************************************

// This program will ask the user to enter five numbers and then
// print five rows of stars corresponding to the numbers entered.
// This is the resulting program after "functionalizing" the original 
// version which is in w5d2-example1a.c

*******************************************************************************/
#include <stdio.h>

/* Function Prototypes --------------------------------- */
void printStars(int number);

/* Main function  --------------------------------- */
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

/* Programmer defined functions  --------------------------------- */

// Function: printStars
// Job: print a line of stars corresponding to the number sent as input
// Input: single integer
// Output: none
void printStars(int number) {

	// Fill in this code block with the function definition

}
