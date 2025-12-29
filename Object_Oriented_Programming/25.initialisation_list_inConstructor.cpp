//initialisation list in constructor

/*
syntax for initialisation list in constructors
constructor(argument-lsit): initialisation-section
{
    //assignment+body
}
example:-

class Test{
private:
    int a,b,c;
public:
    Test(int x,int y, int Z) : a(x), b(y), c(z){
        //constructor body
    }
};

*/

#include<iostream>
using namespace std;

class Test{
    int a,b;
public:
    // Test(int i,int j):a(i), b(j)
    // Test(int i,int j):a(i), b(i+j)
    // Test(int i,int j):a(i), b(2*j)
    // Test(int i,int j):b(i),a(b+i)      //this will give warning because 'a' is declared first and 'b' is declared later
    Test(int i,int j):a(i), b(a+j)
    {
        cout<<"constructor Executed\n";
    }
    void display(){
        cout<<"a: "<<a<<endl;
        cout<<"b: "<<b<<endl;

    }
};
int main(){
    Test object(3,4);
    object.display();
    return 0;
}