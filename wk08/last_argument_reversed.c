// 

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Reverses a string as a new string
char * reverseString(char * s) {
    // get length of s
    int len = strlen(s);
    char *new_s = malloc(sizeof(char) * (len + 1));
    int i = 0;
    // reverse counter
    int j = len - 1;
    while (i < len) {
        new_s[i] = s[j];
        i++;
        j--;
    }
    new_s[i] = '\0';
    return new_s;
}

int main(int argc, char *argv[]) {
    // change this to take in command line arguments

    // reverse the last argument (how do we find it)

    char *reversed = reverseString(argv[argc-1]);
    // confirm original string was unchanged
    printf("%s -> %s\n", argv[argc-1], reversed);

    // free the memory once you're finished
    free(reversed);
    // avoid "use after free"
    reversed = NULL;

    return 0;
}