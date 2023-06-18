// A program that counts down from a number printing each of the squares
// Week 3 M14C COMP1911 tutorial

#include <stdio.h>

int main(void) {
    int k;
    printf("Enter a number: ");
    scanf("%d", &k);

    // count down from k to 1
    while (k >= 1) {
        // print the square of the number
        printf("%d", k * k);
        if (k % 2 == 0) {
            printf(" - k is even\n");
        } else {
            printf(" - k is odd\n");
        }
        k = k - 1;
    }

    return 0;
}