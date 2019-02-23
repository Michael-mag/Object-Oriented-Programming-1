/*
    CH08-320142
    a3_p6.cpp
    MICHAEL MAGAISA
    m.magaisa@jacobs-university.de
*/


#include <iostream>
#include "Complex.h"

using namespace std;
Complex::Complex():a(0),b(0){
}
Complex::Complex(double re,double im):a(re),b(im){
}
Complex::~Complex(){
}
void Complex::setRe(double re){
    a = re;
}
void Complex::setIm(double im){
    b = im;
}
Complex::Complex(const Complex& src){
    a = src.a;
    b = src.b;
}
//Computations
Complex Complex::conjugate(Complex src){
    double re,im;
    re = src.getRe();
    im = -1*(src.getIm());
    return Complex(re,im);
}
Complex Complex::add(Complex src){
    double re,im;
    re = a + src.getRe();
    im = b + src.getIm();
    return Complex(re,im);

}
Complex Complex::subtract(Complex src){
    double re,im;
    re = src.getRe()-a;
    im = src.getIm()-b;
    return Complex(re,im);
}
Complex Complex::multiply(Complex src){
    double re,im;
    re = a*src.getRe()-b*src.getIm();
    im = b*src.getRe()+a*src.getIm();
    return Complex(re,im);
}
// Getter methods
double Complex::getRe(){
    return a;
}
double Complex::getIm(){
    return b;
}
//Print
void Complex::print() {
	if (b) {
		cout << noshowpos << a << showpos << b << "i" << endl;
	} else {
		cout << noshowpos << a << showpos << endl;
	}

}
