#include "complex.h"

Complex::Complex(float real, float img)
   : real(real), img(img)
   {

   }


Complex Complex::operator+(const Complex& other) const {
    Complex sum(real + other.real, img + other.img);
    return sum;
}

Complex Complex::operator-(const Complex& other) const {
    Complex sub(real - other.real, img - other.img);
    return sub;
}

Complex Complex::operator*(const Complex& other) const {
    Complex mul((real * other.real) - (img * other.img), (img * other.real) + (real * other.img));
    return mul;
}

Complex Complex::operator/(const Complex& other) const {
    Complex dOther(other.real, -other.img);
    
    Complex num = (*this) * dOther;
    
    Complex den = other * dOther;
    Complex res(num.real / den.real, num.img / den.real);
    return res;
}

bool Complex::operator==(const Complex& other) const
{
    if(real == other.real && img == other.img)
    {
        return true;
    }
    return false;
}

bool Complex::operator!=(const Complex& other) const
{
    if(real != other.real && img != other.img)
    {
        return true;
    }
    return false;
}

bool Complex::operator<(const Complex& other) const
{
    if(real < other.real){
        return true;
    }else if( real == other.real && img < other.img){
        return true;
    }

    return false;
}

bool Complex::operator>(const Complex& other) const
{
    if(real > other.real){
        return true;
    }else if( real == other.real && img > other.img){
        return true;
    }

    return false;
}

bool Complex::operator<=(const Complex& other) const
{
    if((*this == other) || (*this < other)){
        return true;
    }

    return false;
}

bool Complex::operator>=(const Complex& other) const
{
    if((*this == other) || (*this > other)){
        return true;
    }

    return false;
}

std::ostream& operator<<(std::ostream& stream, const Complex& c){

    stream << c.real << " + " << c.img << "i";
    return stream;
}