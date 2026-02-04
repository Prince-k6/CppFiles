//Multiple inheritance: when a class is derived from multiple base class

#include<iostream>
using namespace std;

class base1{
protected:
    int base1;
public:
    void set_base1(int x){
        base1=x;
    }
};

class base2{
protected:
    int base2;
public:
    void set_base2(int y){
        base2=y;
    }
};
class base3{
protected:
    int base3;
public:
    void set_base3(int z){
        base3=z;
    }
};

class derived : public base1, public base2, public base3{
public:
    void show(){
        cout<<"the value of base1 is "<<base1<<endl;
        cout<<"the value of base2 is "<<base2<<endl;
        cout<<"the value of base3 is "<<base3<<endl;
        cout<<"the sum of these values is "<<base1+base2+base3<<endl;
    }
};
/*
the inherited class or the derived class in this will look something like this
Data members
    base1-->protected
    base2-->protected
    base3-->protected
member functions
    set_base1-->public
    set_base2-->public
    set_base3-->public
*/


int main(){
    derived obj;
    obj.set_base1(4);
    obj.set_base2(5);
    obj.set_base3(9);
    obj.show();

    return 0;
}