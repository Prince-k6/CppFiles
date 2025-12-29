//three access modifiers : protected, private, public

//protected specifier makes members accessible inside the class itself and in its derived (child) classes, but not from outside code.
//It is mainly used in inheritance, allowing child classes to reuse or modify data and functions while still keeping them hidden from the outside world.

#include<iostream>
using namespace std;

class Employee{
private:          //can be accessed only within the class
    int a,b,c;
public:
    int d,e;
    void setdata(int a1, int b1, int c1);  //set data declaraton.  //setter function

    void showdata(){                   //getter function
        cout<<"value of a : "<<a<<endl;
        cout<<"value of b : "<<b<<endl;
        cout<<"value of c : "<<c<<endl;
        cout<<"value of d : "<<d<<endl;
        cout<<"value of e : "<<e<<endl;
    }
};

void Employee::setdata(int a1,int b1,int c1){           //scope resolution symbol(::)
    a=a1;
    b=b1;
    c=c1;
}

int main(){
    Employee emp;
    // emp.a=90;    //this will give error as it is a private member
    emp.d=67;
    emp.e=99;
    emp.setdata(11,12,31);

    emp.showdata();

}