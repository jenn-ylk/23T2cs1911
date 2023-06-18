// A program which reads in values until one of the values is non positive
// Week 3 M14C COMP1911 tutorial

#include <stdio.h>

int main(void) {
    // initialisation
    int i = 0;
    int value;
    scanf("%d", &value);
    while (value > 0) {
        // increment the counter (this has no effect on the loop)
        i++;
        // scan the value again
        scanf("%d", &value);
    }

    printf("There were %d non positive integers\n", i);

    return 0;
}