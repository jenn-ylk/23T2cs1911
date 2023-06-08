// A program which reads an integer from the user and then prints it out

#include <stdio.h>

int main(void) {
	// Make sure to initialise your number, it doesn't need to have a value yet
	int num = 42;
	printf("Enter a number: ");
	// Scan the number, make sure to put "&" before the variable name
	// (this is to get the memory address, we will cover pointers later)
	scanf("%d", &num);
	printf("Your number was %d\n", num);
	
	return 0;
}
