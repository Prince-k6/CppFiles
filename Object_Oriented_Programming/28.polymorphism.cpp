//polymorphism                           
//      -defination:one name and multiple forms
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

//function overloading :
// Function overloading allows us to define multiple functions with the same name but different parameters.
// It is a form of compile time polymorphism in which different functions with same name can 
// perform different jobs based on the different parameters passed.
//calculate the volume of a sphere
float volume(float r, float h){
    return 3.14*r*r*h;
}
//calculate the volume of cube
float volume(int a){
    return a*a*a;
}
//calculate the volume of cuboid
float volume(float l,float b,float h){
    return l*b*h;
}

// int main() {
//     //funtion overloading
//     cout<<"---function overoading------\n";
//     cout<<"volume of sphere: "<<volume(4,14)<<endl;
//     cout<<"volume of cube: "<<volume(4)<<endl;
//     cout<<"volume of cuboid "<<volume(4,14,5)<<endl;

//     return 0;
// }