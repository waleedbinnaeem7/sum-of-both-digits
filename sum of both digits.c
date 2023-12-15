#include <stdio.h>

int  Sum(int a, int b) {
 
    int s = a + b;
    return s;
}

int main() {

    int a,b;
    printf("Input number 1: ");
    scanf("%d", &a);

    printf("Input number 2: ");
    scanf("%d", &b);

    int r = Sum(a,b);
    printf("Sum: %d",r);

    return 0;
}
