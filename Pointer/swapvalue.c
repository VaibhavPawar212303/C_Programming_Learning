#include <stdio.h>
int main()
{
    int a = 4;
    int b = 5;
    int *x = &a;
    int *y = &b;
    int t;
    printf("The previous value of a and b is %d and %d\n", a, b);
    t = *x;
    *x = *y;
    *y = t;
    printf("The value of a and b is %d and %d\n", a, b);
}