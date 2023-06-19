#include <stdio.h>


// This program allows a user to enter a number
// and prints out its reciprocal (ie. 1 divided by the number)

double reciprocal(double x);

int main(void){

    double x;
    printf("Enter a number ");
    
    scanf("%lf",&x);
    // x is only passed as a copy, in order to actually change x, 
    // we need to return the new value of x, and assign it to x in main
    x = reciprocal(x);
    
    printf("The reciprocal is %lf\n",x);
    return 0;
}

double reciprocal(double x){
    if ( x != 0 ) {
        x = 1.0/x;
    }

    return x;
}