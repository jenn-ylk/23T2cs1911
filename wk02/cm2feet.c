

#include <stdio.h>

// Keep "magic numbers" out of your code by making constants with #define!
// A "magic number" refers to any number, especially one used many times whose 
// meaning is unclear if written directly into code
#define IN_CM 2.54
#define FT_IN 12

int main(void) {
    int height;
    printf("Enter your height in centimetres: ");
    scanf("%d", &height);
    
    // height_in / IN_CM is a floating point division, 
    // but since height_ft is an int, the decimal points will be removed
    int height_ft = (height_in / IN_CM) / FT_IN;
    
    printf("Your height in feet is %d\n", height_ft);

	return 0;
}
