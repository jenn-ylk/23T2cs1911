// A program which Makes some basic use of arrays, 
// both inserting values, and reading values
// Week 4 COMP1911 M14C tutorial

// try compiling these with both gcc and dcc to see the difference in usefulness of the error messages

#include <stdio.h>

#define SIZE 10

#define MAX_INPUT 10000

int main(void) {

    // create an array and fill it with the squares of numbers 1-10
    // Arrays are a collection of values of the same type
    // They are stored "contiguously" in memory (next to each other)
    // int numbers[10];
    // initialise all values to 0
    // int numbers[10] = {0};
    // initialise from 1-10

    // int numbers[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // // print all numbers
    // int i = 0;
    // while (i < SIZE) {
    //     printf("Value #%d is %d\n", i, numbers[i]);
    //     i++;
    // }

    // Write a C program which reads numbers until non-numeric data is entered and then prints the middle number. 
    int numbers[MAX_INPUT];
    int len = 0;
    int result = scanf("%d", &numbers[len]);
    while (result == 1 && len < MAX_INPUT) {
        // "increment" step for a scanning loop 
        // (HINT: you will need something similar to this for assignment 1)
        len++;
        result = scanf("%d", &numbers[len]);
    }

    int i = 0;
    while (i < len) {
        printf("Value #%d is %d\n", i, numbers[i]);
        i++;
    }



    return 0;
}