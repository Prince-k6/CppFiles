//static data members
//variables declared as static are initialized only once as they are allocated space in separate 
//static storage so, the static member variables in a class are shared by the objects.

//There cannot be multiple copies of the same static variables for different objects. 
//Also because of this reason static variables cannot be initialized using constructors.

//static variables by defualt are intialised with zero

//static variables are allocated space in separate static storage

#include<iostream>
using namespace std;

class Employee{
private:
    int id;
    static int count;          //cannot be initialised here
public:
    void setdata(){
        cout<<"enter id:";
        cin>>id;
        count++;
    }
    void getdata(){
        cout<<"employee id:"<<id<<endl;
        cout<<"EMployee count : "<<count<<endl;
    }
};

int Employee :: count=1000;          //default value is 0. // counting will start from 1000
 
int main(){
    Employee e1;
    // e1.id=90;         //can't access private members
    // e1.count=1;
    e1.setdata();
    e1.getdata();

    Employee e2;
    e2.setdata();
    e2.getdata();

    Employee e3;
    e3.setdata();
    e3.getdata();
    return 0;
}

