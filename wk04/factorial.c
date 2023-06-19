// A program which uses a function to calculate the factorial of a number
// Week 4 COMP1911 M14C tutorial

#include <stdio.h>
#include <stdlib.h>

// function prototype so that main can call the function
// to make this work for values up to 44, int should be replaced, 
// for this function and for result, with an `unsigned long long`
unsigned long long factorial(int n);

int main(void) {
    
    printf("Enter a number: ");
    int n;
    // check that an integer was scanned in
    if (scanf("%d", &n) != 1 || n < 1 || n > 44) {
        printf("Invalid input: must have a number between 1-44\n");
        return 1;
    }

    unsigned long long result = factorial(n);
    printf("%d! = %lld\n", n, result);

    return 0;
}

// Write the factorial function here, 
// it should take in an integer, n, and return the result
// Input: n - an integer from 1-45
// Returns: factorial of that number
unsigned long long factorial(int n) {
    unsigned long long result = 1;
    int i = 2;
    while (i <= n) {
        result = result * i;
        i++;
    }

    // for (int i = 2; i <= n; i++) {
    // }
    // Any function with a return type must have a value returned
    return result;
}