#include <stdio.h>
int main()
{
    int a, b, c;
    a = 4;
    b = 5;

    int *x, *y;
    x = &a;
    y = &b;
    c = *x + *y;

    printf("Addition Of The Two Number is %d", c);
    return 0;
}