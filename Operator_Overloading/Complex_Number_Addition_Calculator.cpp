// day5+6 : OPERATOR OVERLOADING DEMONSTRATION USING A COMPLEX NUMBERS CALCULATOR
//#include "pch.h
#include <iostream>
using namespace std;

class Complex {
private:
	double real;
	double imaginery;

public:
	Complex();
	Complex(double R, double I);//this is a constructor that takes in two parameters
	Complex operator+(Complex const &exp);//overloading the operator
	//on ine 16, the word complex is the retrun type
	//the word operator is important and a must and the + is the operator to be overloaded.
	//this takes in a parameter, in this case its gonna take a complex object which is the complex const &exp.
	void print();
	void input();
};

void Complex::print() {

	imaginery>0? cout <<" \n Answer = "<< real << "+" << imaginery <<"j\n" : cout << " \n Answer = " << real << imaginery << "j \n";
}

void Complex::input() {
	cout << " \n\n Enter the real part followed by the imaginary part of \n the first then the second expression : " << endl;
}
Complex::Complex() {};//definition of default constructor
Complex::Complex(double R, double I) : real(R), imaginery(I) {};//definition of the parameterized constructor
Complex Complex::operator+(Complex const &exp) {//definition of the overload function
	Complex result;// this is an object of class complex
	result.real = real + exp.real;
	result.imaginery = imaginery + exp.imaginery;
	return result;
}
//the first Complex is a return type. Then the next represents the class and the operator and the + is the name of the fnctions.
//This is the same as when you prototype a function inside the class and want to define it outside the class, for example in this case
//void print was prototyped inside the class on line 20 and was defined outside the class on line 23
//In this case, the return type is Complex, just like void for print, and the class name is Complex, which is the same as in print.

int main() {
	double x, y,a,b;
	Complex data;
	data.input();
	cin >> x >> y>>a>>b;
	Complex exp1(x, y);
	Complex exp2(a,b);
	Complex answer;
	answer = exp1 + exp2;
	answer.print();
}
