//Demonstrating constructors in derived class

/*
Case1:-
class B: class A{
    //order of execution of constructor -> first A() then B()
}

Case2:-
class C: class A, class B{
    //order of execution of constructor -> first A() then B() and then C()
}

Case3:-
class C : class A, virtual class B{
    //order of execution of constructor -> first B() then A() and then C()
}

*/

#include<iostream>
using namespace std;

class Base1{
private:
    int data1;
public:
    Base1(int i){
        data1 =i;
        cout<<"base1 class constructor is called"<<endl;
    }
    void printData(){
        cout<<"The value of data1 is: "<<data1<<endl;
    }
};
class Base2{
private:
    int data2;
public:
    Base2(int i){
        data2 =i;
        cout<<"base2 class constructor is called"<<endl;
    }
    void printData(){
        cout<<"The value of data2 is: "<<data2<<endl;
    }
};

class Derived : public Base1 ,public Base2{
private:
    int derived1, derived2;
public:
    Derived(int a, int b, int c, int d): Base1(a), Base2(b){
        derived1=c;
        derived2=d;
        cout<<"Derived class constructor\n";
    }
    void printData(){
        Base1::printData();
        Base2::printData();
        cout<<"The value of derived1 is: "<<derived1<<endl;
        cout<<"The value of derived2 is: "<<derived2<<endl;
    }

};

int main(){
    Derived object(1,2,3,4);
    object.printData();
    return 0;
}