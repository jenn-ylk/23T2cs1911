#include <stdio.h>

int main(void) {
    int scanfResult;
    int a, b, c;
    scanfResult = scanf("%d %d %d", &a, &b, &c);
    printf("%d %d %d %d", scanfResult, a, b, c);
}