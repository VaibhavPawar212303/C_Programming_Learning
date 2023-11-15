#include <stdio.h>
int main()
{
    int a, b;
    int *c[10];
    int **d[10];

    printf("Enter the ten number You Want :\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &c[i]);
        d[i] = &c[i];
    }
    printf("Value Of Array That You Have Entered\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", *d[i]);
    }
    return 0;
}