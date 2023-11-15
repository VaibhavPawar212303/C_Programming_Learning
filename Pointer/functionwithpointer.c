#include <stdio.h>
int swapnumbypoint(int *, int *);
int main()
{
    int a, b;
    printf("Please Enter The Value Of A:");
    scanf("%d", &a);
    printf("Please Enter The Value Of B:");
    scanf("%d", &b);
    printf("You Have Enter Value Of A And B Is %d And %d Respectively\n", a, b);
    swapnumbypoint(&a, &b);
    return 0;
}

int swapnumbypoint(int *x, int *y)
{
    int t;
    printf("Address Of Value A And B Is %u And %u Respectively \n", &x, &y);
    t = *x;
    *x = *y;
    *y = t;
    printf("Value A And B Is %d And %d Respectively After Swapping \n", *x, *y);
    return 0;
}