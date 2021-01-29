#include "complex.h"

Complex::Complex(float real, float img)
   : real(real), img(img)
   {

   }


Complex Complex::operator+(const Complex& other) {
    Complex sum(real + other.real, img + other.img);
    return sum;
}

Complex Complex::operator-(const Complex& other) {
    Complex sub(real - other.real, img - other.img);
    return sub;
}

Complex Complex::operator*(const Complex& other) {
    Complex mul((real * other.real) - (img * other.img), (img * other.real) + (real * other.img));
    return mul;
}

Complex Complex::operator/(const Complex& other) {
    Complex div(real / other.real, img / other.img);
    return div;
}


std::ostream& operator<<(std::ostream& stream, const Complex& c){

    stream << c.real << " + " << c.img << "i";
    return stream;
}