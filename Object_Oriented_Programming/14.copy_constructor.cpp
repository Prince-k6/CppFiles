//copy constructor :A copy constructor is a special type of constructor used to create a new object 
//                  using an existing object of the same class.

//Compiler creates a default copy constructor if there is no user defined constructor. 
//This compiler created constructor does a shallow copy and works well for basic types, 
//but does not work for dynamic allocated memory.




#include<iostream>
using namespace std;

class Number{
    int a;
public:
    Number(){ 
        cout<<"Default Constructor\n";          //default constructor
        a=0;
    }
    Number(int x){
        cout<<"Actual constructor\n";
        a=x;
    }
    //when no copy constructor is found, compiler supplies its own copy constructor
    Number(Number &obj){                    //an object is passed in the parameter of the function with reference
        cout<<"this is copy constructor\n";
        a=obj.a;
    }

    void display(){
        cout<<"number= "<<a<<endl;
    }
};



int main(){
    Number x,z(6909);
    cout<<"-------------------\n";
    x.display();
    z.display();
    cout<<"-------------------\n";
    Number z1(x);  //copy constructor invoked
    z1.display();
    cout<<"-------------------\n";
    Number z2;
    z2=z;       //copy constructor not invoked
    cout<<"-------------------\n";
    Number z3=z;       //copy constructor invoked
    z3.display();
    return 0;
}