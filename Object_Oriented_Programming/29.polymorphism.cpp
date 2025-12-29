//polymorphism                  Two types:-Compile time and Runtime           
//      -defination:one name and multiple forms
//      -eg. function overloading, operator overloading.    : Compile time polymorphism
//      -eg. Virtual functions               : Run time polymorphism
/*
There are two types of polymorisphism in c++
    1.Compile time polymorphism
        1.1 : Function overloading
        1.2 : Operator overloading
    2.Runtime polymorphism
        2.1 : Virtual function

*/


//polymorphism :- operator overloaing
#include <iostream>
using namespace std;

class Complex {
public:
    int real, imag;
    
    Complex(int r, int i) : real(r), imag(i) {}  //initialisation list in constructor

    // Overloading the '+' operator
    Complex operator+(const Complex& obj) {
        return Complex(real + obj.real, imag + obj.imag);
    }
};

int main() {
    Complex c1(10, 5), c2(2, 4);
    
    // Adding c1 and c2 using + operator
    Complex c3 = c1 + c2;  
    cout << c3.real << " + i" << c3.imag;
    return 0;
}