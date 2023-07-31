// Author: Hayden Smith 2019

#include <stdio.h>
#include <string.h>

#define MAXLINE 1024

int strlength(char *);

int main(void) {
    char line[MAXLINE];
    fgets(line, MAXLINE, stdin);
    printf("Strlen is %d\n", strlength(line));
}

int strlength(char *s) {
    // TODO
    printf("%s", s);

    return strlen(s);
}