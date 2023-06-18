// A program which prints out five asterisks on separate lines using while
// Week 3 M14C COMP1911 tutorial

#include <stdio.h>

int main(void) {
    // initialisation
    int i = 0;
    // a loop that counts all numbers 0-4
    // condition inside the brackets (loop executes as long as this is true)
    while (i < 5) {
        // code to execute (body)
        printf("*\n");
        // increment
        i++;
    }

    return 0;
}