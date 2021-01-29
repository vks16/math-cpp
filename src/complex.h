#ifndef COMPLEX_H
#define COMPLEX_H
#include<iostream>

struct Complex{
    float real;
    float img;

    Complex(float, float);
 

    Complex operator+(const Complex& other);
};

std::ostream& operator<<(std::ostream& stream, const Complex& c);

#endif // COMPLEX_H