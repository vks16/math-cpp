#include <iostream>
#include "src/complex.h"

int main()
{
    Complex c(3, 2);
    Complex d(4, -3);

    std::cout << "Sum " << c + d << std::endl;
    std::cout << "Subtract " << c - d << std::endl;
    std::cout << "Mul " << c * d << std::endl;
    std::cout << "Division " << c / d << std::endl;
    std::cout << "Equality " << bool(c == c) << std::endl;
    std::cout << "Not Equal " << bool(c != c) << std::endl;
    std::cout << "Less than " << (c < d) << std::endl;
    std::cout << "Greater than " << (c > d) << std::endl;
    std::cout << "Less than or equal to " << (c <= d) << std::endl;
    std::cout << "Greater than or equal to " << (c >= d) << std::endl;

    return 0;
}