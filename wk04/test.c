// A program which tests the return values of scanf
// for running this without errors from uninitialised values, make sure to 
// compile with `gcc -o test test.c`, x and y will have random values in them 
// if uninitialised which you can see if compiled with gcc with no warnings
// Week 4 COMP1911 M14C tutorial

#include <stdio.h>

int main(void) {

    int x,y;
    int numValuesRead = scanf("%d %d",&x,&y);
    printf("I read in %d values : x = %d y = %d\n",numValuesRead,x,y);
    
    return 0;
}