/*
    CH08-320142
    a3_p6.cpp
    MICHAEL MAGAISA
    m.magaisa@jacobs-university.de
*/

#ifndef _COMPLEX_H_
#define _COMPLEX_H_

class Complex{
private:
    double a;//Real
    double b;// Imaginary
public:
    Complex();
    Complex(double re,double im);
    ~Complex();
    Complex(const Complex&);
    //ComPutations
    Complex conjugate(Complex src);
    Complex add(Complex src);
    Complex subtract(Complex src);
    Complex multiply(Complex src);
    //Setter methods
    void setRe(double re);//Real values setter method
    void setIm(double im);//Imaginery part setter method
    // Getter methods
    double getRe();//Real part
    double getIm();//Imaginary part
    //Print
    void print();
};

#endif