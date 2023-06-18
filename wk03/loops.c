// A set of loops which didn't work for various reasons
// Week 3 M14C COMP1911 tutorial

#include <stdio.h>

int main(void) {
    // this value is uninitialised!!
    /*
    int i;

    while (i < 100) {
        printf("%d\n", i);
        i = i + 1;
    }
    */

    /*
    // make sure to use "==" (also j is unnecessary (always false))
    int i = 0;
    int j = 0;

    while (j == 1 || i < 100) {
        printf("%d\n", i);
        i = i + 1;
    }
    */

    // this particular loop never ends until there is an integer overflow
    // i grows at a constant rate, but n grows at an increasing rate
    // so n is always > i
    int i = 0;
    int n = 10;
    while (i < n) {
        printf("%d\n", i);
        n = n + i;
        i = i + 1;
    }

    return 0;
}