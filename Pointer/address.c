#include <stdio.h>
int main()
{
    // pointer is a variable store the addrss of another variable
    // assign the value of i and j
    int i = 3;
    int j = 4;
    // create the pointer to store the address
    int *addressOfi;
    int *addressOfj;
    // Getting the address and value of the variable
    printf("Address of i = %u\n", &i);
    printf("Address of j = %u\n", &j);
    // get the value of the variables
    printf("value of i = %d\n", i);
    printf("value of j = %d\n", j);
    // get the value on the address
    addressOfi = &i;
    addressOfj = &j;
    // get the address and value on position
    printf("Value on Address %u is %d\n", &i, *addressOfi);
    printf("Value on Address %u is %d\n", &j, *addressOfj);
    // assign the address of i to j and j to i
    addressOfi = &j;
    addressOfj = &i;
    printf("Address of i now is %u and value on Address is %d \n", addressOfi, *addressOfi);
    printf("Address of j now is  %u and value on Address is %d \n", addressOfj, *addressOfj);
    // check the value of i and j
    printf("Value on address of i and j is %d and %d", *addressOfi, *addressOfj);
    return 0;
}