//handling derived class exception

/*
• When using exception handling with inheritance, the order of catch statements is very important.
• A catch block for a base class can catch objects of its derived classes
Therefore:
    1. Derived class exceptions must be caught before base class exceptions
    2. Otherwise, the base class catch will intercept the derived exception

problem scenario
    If the base class catch comes first:
        •It will also catch exceptions of derived classes
        •The derived class catch will never execute

correct approach
    Always place the derived class catch before the base class catch

*/

#include<iostream>
using namespace std;
class Base{};
class Derived : public Base{};


int main(){
    //incorrected way
    // Derived B;
    // try{
    //     throw B;
    // }catch(Base A){
    //     cout<<"caught a base class\n";
    // }catch(Derived B){
    //     cout<<"caught a derived class\n";         //this never reaches 
    // }
    //correct way
    Derived B;
    try{
        throw B;
    }catch(Derived B){
        cout<<"caught a derived class\n";         //derived class exception is placed first
    }catch(Base A){
        cout<<"caught a base class\n";
    }
    return 0;
}