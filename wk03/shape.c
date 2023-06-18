// A set of two dimensional loops which will print out shapes in asterisks
// Week 3 M14C COMP1911 tutorial

#include <stdio.h>

int main(void) {
    int number;
    int row, column;

    // Obtain input
    printf("Enter number: ");
    scanf("%d",&number);

    // This loop prints out a triangle in the bottom right corner
    /*
    row = 1;
    while (row <= number) {
        column = 1;
        while (column <= number) {
            // decide whether to print " " or "*"
            // boundary of asterisks has a sum of number + 1
            if (row + column <= number) {
                printf(" ");
            } else {
                printf("*");
            }
            column = column + 1;
        }
        printf("\n");
        row = row + 1;
    }
    */

    // This loop prints a diagonal going from the top left to bottom right
    row = 1;
    while (row <= number) {
        column = 1;
        while (column <= row) {
            // decide whether to print " " or "*"
            // boundary of asterisks has a sum of number + 1
            if (row == column) {
                printf("*");
            } else {
                printf(" ");
            }
            column = column + 1;
        }
        printf("\n");
        row = row + 1;
    }

    return 0;
}