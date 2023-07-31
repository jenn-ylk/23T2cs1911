// 

#include <stdio.h>

int main(int argc, char *argv[]) {
    // TODO: change this to take in command line arguments and print them out
    printf("%s\n", argv[0]);

    // start from the first argument that isn't the program name
    int i = 1;
    while (i < argc) {
        printf("%s\n", argv[i]);
        i++;
    }

    // For any that are integers, convert them and calculate the sum of args

    return 0;
}