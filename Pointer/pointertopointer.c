#include <stdio.h>
int main()
{
    int i, *j, **k;
    i = 5;
    k = 4;
    j = &i;
    k = &j;

    printf("Address of i is %u\n", &i);
    printf("Address saved in j %u\n", j);
    printf("Address of j is %u\n", &j);
    printf("Address saved in k %u\n", k);
    printf("Address of k is %u\n", &k);
    printf("Value of i is %d\n", **k);
    printf("Value of i is %d\n", *j);
    printf("Value of i is %d\n", i);
    printf("Value of k is %d\n", k);
}