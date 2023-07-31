// 

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LEN 6

void mystrncat(char str1[], char str2[], int n);

char * reverseString(char * s);

int main(void) {
    char s1[MAX_LEN] = "foo";
    char s2[MAX_LEN] = "bar";

    printf("%s\n", s1);
    mystrncat(s1, s2, MAX_LEN);
    printf("%s\n", s1);

    printf("%s\n", reverseString("hello!"));

    return 0;
}

// Concatenates str2 onto the end of str1
// n should be the maximum string length to be put in str1
void mystrncat(char str1[], char str2[], int n) {
    // TODO: modify to be in keeping with how actual strncat works
    int end = strlen(str1);
    int i = end;
    while (i < n - 1 && str2[i - end] != '\0') {
        str1[i] = str2[i - end];
        i++;
    }
    // Null terminate the string
    str1[i] = '\0';
}

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
