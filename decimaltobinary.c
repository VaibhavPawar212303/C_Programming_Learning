#include <stdio.h>
#include <math.h>

long long convertdecimaltobinary(int);
int convertbinarytodecimal(long long);

int main()
{
    int n;
    long long userbin;
    printf("Enter Your Decimal Number:");
    scanf("%d", &n);
    printf("You Have Entered %d\n", n);
    printf("Binary Number Of Decimal Number %d is %lld \n", n, convertdecimaltobinary(n));

    printf("Enter Your Binary Number:");
    scanf("%lld", &userbin);
    printf("You Have Entered : %lld\n", userbin);
    printf("Decimal Number Of Binary Number %lld is %d \n", userbin, convertbinarytodecimal(userbin));
}

long long convertdecimaltobinary(int n)
{
    int rem, i = 1;
    long long bin = 0;
    while (n != 0)
    {
        rem = n % 2;
        n = n / 2;
        bin = bin + rem * i;
        i = i * 10;
    }
    return bin;
}

int convertbinarytodecimal(long long userbin)
{
    int rem, dec = 0, i = 0;
    while (userbin != 0)
    {
        rem = userbin % 10;
        userbin = userbin / 10;
        dec = dec + rem * pow(2, i);
        i = i + 1;
    }
    return dec;
}