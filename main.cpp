#include <iostream>
#include "src/complex.h"

int main()
{
    Complex c(3, 2);
    Complex d(1, 7);

    std::cout << "Sum " << c + d << std::endl;
    std::cout << "Subtract " << c - d << std::endl;
    std::cout << "Mul " << c * d << std::endl;
    return 0;
}