#include <iostream>
int main()
{
    int A[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << "Printing Array Elements" << std::endl;
    // getting each single array element
    for (int i = 0; i < 10; i++)
    {
        std::cout << "Array Elements: " << A[i] << std::endl;
    }
    // getting sum of the array element
    int sum;
    for (int i = 0; i < 10; i++)
    {
        sum = sum + A[i];
    }
    std::cout << "Printing Sum Of Array Elements" << std::endl;
    std::cout << "Sum Of The Array Elements: " << sum << std::endl;
}