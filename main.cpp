#include <iostream>
#include "src/complex.h"

int main()
{
    Complex c(2, 4);
    Complex d(3, 1);

    std::cout << c + d << std::endl;
    return 0;
}