// 

#include <stdio.h>
// any other libraries required for malloc
#include <stdlib.h>

#define SIZE 5
int * f1(void){
    int nums[SIZE] = {1,2,3,4,5};
    return nums;
}

int * f2(void){
    int * nums = malloc(sizeof(int) * SIZE);
    int i = 0;
    while(i < SIZE){
        nums[i] = i+1;
        i = i + 1;
    }
    return nums;
}

int main(void) {
    int * a1 = f1();
    // int * a2 = f2();
    printf("First number of f1: %d\n", a1[0]);
    // printf("First number of f2: %d\n", a2[0]);
    return 0;
}