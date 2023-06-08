// A program checking even/oddness of a number and sign, using if statements

#include <stdio.h>

int main(void) {

	
	printf("Please enter an integer: ");
	int num;
	scanf("%d", &num);
	
	// Check divisibility
	// the modulo operator gives the remainder of the division
	if (num % 2 == 0) {
	    printf("EVEN, ");
	} else {
	    printf("ODD, ");
	}
		
	// Check positive/negative/zero using an if/else if/else
	if (num > 0) {
	    printf("POSITIVE\n");
	} else if (num < 0) {
	    printf("NEGATIVE\n");
	} else {
	    printf("ZERO\n");
	}
		
	return 0;
}
