// A program which reads in an array and calculates the sum and product

#include <stdio.h>

#define LENGTH 5

void print_arr(int nums[], int len);
void sumProd(int nums[], int len, int *sum, int *product);

int main(void) {
    int nums[LENGTH];

    int i = 0;
    while (i < LENGTH) {
        scanf("%d", &nums[i]);
        i++;
    }

    int sum = -1;
    int prod = -1;
    print_arr(nums, LENGTH);
    // call sumProd
    sumProd(nums, LENGTH, &sum, &prod);

    printf("sum = %d\n", sum);
    printf("product = %d\n", prod);

    print_arr(nums, LENGTH);

    return 0;
}

void print_arr(int nums[], int len) {
    int i = 0;
    while (i < len) {
        printf("%d\n", nums[i]);
        i++;
    }
}

void sumProd(int nums[], int len, int *sum, int *product) {
    // TODO: calculate both the sum and the product of the array
    // set sum and prod at starting values (0 and 1)
    *sum = 0;
    *product = 1;
    int i = 0;
    while (i < len) {
        // 
        *sum = *sum + nums[i];
        // the last * is for multiplication
        *product = *product * nums[i];
        nums[i] = 0;
        i++;
    }
}