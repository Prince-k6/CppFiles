//The const keyword in C++ is used to specify that a variable or object is "constant" 
//and that its value cannot be modified after initialization

#include<iostream>
using namespace std;

class MyClass {
public:
    int getValue() const { // A const member function
        // this->data = 5; // Error: cannot modify data within a const function
        return data;
    }
private:
    int data;
};

int main(){
    const int a=10;
    cout<<"i="<<a<<endl;
    //a=9;        //will throw error
    cout<<"i="<<a<<endl;

    return 0;
}