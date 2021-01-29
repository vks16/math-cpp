#include "complex.h"

Complex::Complex(float real, float img)
   : real(real), img(img)
   {

   }


Complex Complex::operator+(const Complex& other) {
    Complex sum(real + other.real, img + other.img);
    return sum;
}

std::ostream& operator<<(std::ostream& stream, const Complex& c){

    stream << c.real << " + " << c.img << "i";
    return stream;
}