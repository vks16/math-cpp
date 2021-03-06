#ifndef COMPLEX_H
#define COMPLEX_H
#include<iostream>

struct Complex{
    float real;
    float img;

    Complex(float, float);
 
    // arithmetic operatiors
    Complex operator+(const Complex& other) const; 
    Complex operator-(const Complex& other) const;
    Complex operator*(const Complex& other) const;
    Complex operator/(const Complex& other) const;

    // comparision operatiors
    bool operator==(const Complex& other) const ;
    bool operator!=(const Complex& other) const ;
    bool operator<(const Complex& other) const ;
    bool operator>(const Complex& other) const ;
    bool operator<=(const Complex& other) const ;
    bool operator>=(const Complex& other) const ;
};

std::ostream& operator<<(std::ostream& stream, const Complex& c);

#endif // COMPLEX_H