#include <iostream>
int main()
{
    // getting the area of triangle
    int b, h;
    float area;
    std::cout << "Enter Your Breadth And Height:";
    std::cin >> b >> h;
    area = (float)b * h / 2;
    std::cout << "Area Of Triangle:" << area << std::endl;
    // getting the sum of first natual number
    int n;
    std::cout << "Please Enter Range To Calculate The Sum Of Natural Number:";
    std::cin >> n;
    int sumOfNatualNumber = n * (n + 1) / 2;
    std::cout << "Sum Of Number Of 100 Natural Number: " << sumOfNatualNumber << std::endl;
    // find the roots of quadratic equations
    // let the quadratic equation be ax+by+c = 0
    // find the roots of ax+by+c = 0
    int x, y, z;
    std::cout << "Please Enter a,b And c Values: ";
    std::cin >> x >> y >> z;
    int firstRootsOfQuadraticEquation = (-y + (y * y - 4 * x * z)) / (2 * x);
    int secondRootsOfQuadraticEquation = (-y - (y * y - 4 * x * z)) / (2 * x);
    std::cout << "First Roots Value Of Equation : " << firstRootsOfQuadraticEquation << std::endl;
    std::cout << "Second Roots Value Of Equation : " << secondRootsOfQuadraticEquation << std::endl;
    // Area of circle
    int r;
    std::cout << "Please Enter Radius: ";
    std::cin >> r;
    float areaOfCircle = 3.14 * (r * r);
    std::cout << "Area Of A Circle Is : " << areaOfCircle << std::endl;
    // calculate the distance
    int v, u, a;
    std::cout << "Please Enter Initial Velocity : ";
    std::cin >> u;
    std::cout << "Please Enter Final Velocity : ";
    std::cin >> v;
    std::cout << "Please Enter Acceleration : ";
    std::cin >> a;
    int distance = (v * v - u * u) / (2 * a);
    std::cout << "Calculated Distance Is: " << distance;
    // calculate simple interest
    // calculate volume of cylinder
    // calculate distance between two points
    // compound assignment
    //conditional loop for compare greater than 
    //check number is positive or negative 
    //odd or even 
    //
    return 0;
}