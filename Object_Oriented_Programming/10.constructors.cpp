//constructors: it is a special member function with the same name as that of class 
//              which gets automatically invoked whenever an object is created
//it is used to initilize the objects of its class
//it has no return type

/*
    properties/characeristics of constructors
        1.it should be declared in the public section of the class
        2.they are automatically invoked whenever an object is created 
        3.Do not have return types
*/

//Types : default and parameterized


#include<iostream>
using namespace std;

class Complex{
private:
    int real;
    int img;
public:
    Complex(){                   //default constructor : takes no parameter
        cout<<"this is default constructor"<<endl;
    }
    Complex(int a,int b){       //parameterized constructor
        real=a;
        img=b;
    }
    void show_num(){
        if(img<0){
            cout<<real<<img<<"i"<<endl;
        }
        else{
            cout<<real<<"+"<<img<<"i"<<endl;
        } 
    } 
};

int main(){
    Complex c1(99,86);
    c1.show_num();

    Complex c2(45,-67);
    c2.show_num();

    Complex c3;

    return 0;
}

