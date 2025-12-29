//single inheritance

#include<iostream>
using namespace std;

class base{
    int data1;   // by default its private and is not inheritable
public:
    int data2;
    void setdata(){
        data1=10;
        data2=20;
    }

    int getdata1();
    int getdata2();

};
int base :: getdata1(){           //defined using scope resolution operator
    return data1;
}
int base :: getdata2(){
    return data2;
}

//try changing the visibilty mode to private and then trace the program
class derived : public base{      //class is being derived publically
    int data3;
public:
    void process(){
        // setdata();  
        data3=data2*getdata1();
    }
    void display(){
        cout<<"value of data 1 is " <<getdata1()<<endl;
        cout<<"value of data 2 is "<<data2<<endl;
        cout<<"value of data 3 is "<<data3<<endl;
    }

};



int main(){
    derived der;
    der.setdata();
    der.process();
    der.display();

    return 0;
}