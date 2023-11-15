#include <iostream>
#include <string>
int main()
{
    int a, b, c;
    std::string name;
    // first program
    std::cout << "****** Printing Hello World Message ******* \n";
    std::cout << "Hello World\n";
    // adding two number
    std::cout << "****** Adding Two Number ******* \n";
    std::cout << "Please Provide two Number:\n";
    std::cin >> a >> b;
    c = a + b;
    std::cout << "Addition Of Two Number Is :" << c;
    // Third program
    std::cout << "\n****** Getting The Name Of The User and Print It ******* \n";
    std::cout << "Please Enter Your Name\n";
    std::cin.ignore();
    // std::cin >> name;
    std::getline(std::cin, name);
    std::cout << "Welcome " << name;
    return 0;
}