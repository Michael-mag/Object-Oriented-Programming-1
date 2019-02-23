/*
    CH08-320142
    a3_p6.cpp
    MICHAEL MAGAISA
    m.magaisa@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include "Complex.h"
using namespace std;

int main() {
	Complex c1,c2,c3;
	double re,im;
//Getting c1
	cout <<"Enter real part of c1:" << endl;
	cin >> re;
	c1.setRe(re);
	cout <<"Enter Imaginary part of c1:" << endl;
	cin >> im;
	c1.setIm(im);
//Getting c2
	cout <<"\nEnter real part of c2:" << endl;
	cin >> re;
	c2.setRe(re);
	cout <<"Enter Imaginary part of c2:" << endl;
	cin >> im;
	c2.setIm(im);

  //Seprating input from output
cout<<endl;
cout<<"COMPUTING..."<<endl<<endl;



//conjugate c1
    cout<< "\na. The conjugate of c1 : "<<endl;
    c3 = c3.conjugate(c1);
    c3.print();
//Addition
    cout << "\nb. The sum of c1 and c2 : "<<endl;
    c3 = c1.add(c2);
    c3.print();
//Subtraction
    cout<<"\nc. Difference c2-c1 : "<<endl;
    c3 = c1.subtract(c2);
    c3.print();
//multiplication
    cout <<"\nd. Product of c1 and c2 : "<<endl;
    c3 = c1.multiply(c2);
    c3.print();
    cout<<endl<<endl;
	return 0;
}
