//static member functions:, static member functions also [do not depend on the object] of the class. 
//We are allowed to invoke a static member function using the object and the '.' operator but 
//it is recommended to invoke the static members using the class name and the scope resolution operator.

//static member functions are allowed to acess ony static data members or static member functions functions
//they cannot access non static data members or non static member functions

#include<iostream>
using namespace std;

class Employee{
private:
    int id;
    static int count;          //cannot be initialised here only declared
public:
    void setdata(){
        cout<<"enter id:";
        cin>>id;
        count++;
    }
    void getdata(){
        cout<<"employee id:"<<id<<endl;
    }
    static void getcount(){
        cout<<"Employee count:"<<count<<endl;
    }
};

int Employee :: count;          //default value is 0
 
int main(){
    Employee e1;
    e1.setdata();
    e1.getdata();
    Employee::getcount();

    Employee e2;
    e2.setdata();
    e2.getdata();
    Employee::getcount();

    Employee e3;
    e3.setdata();
    e3.getdata();
    Employee::getcount();
    return 0;
}