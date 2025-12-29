//how to resolve ambiguity resolution in inheritance

#include<iostream>
using namespace std;


class base1{
public:
    void greet(){
        cout<<"how are you?"<<endl;
    }
};
class base2{
public:
    void greet(){
        cout<<"ap kaise ho?"<<endl;
    }
};
class derived: public base1, public base2{
    int a;
public:
    void greet(){
        base2::greet();
    }
};

class B{
    public:
        void say(){
            cout<<"Hello world"<<endl;
        }
};

class D: public B{
    int a;
    // D's new say() method will override base class's say() method
    public:
        void say()
        {
            cout << "Hello my beautiful people" << endl;
        }
};
int main(){
    //ambiguity 1
    // base1 obj1;
    // obj1.greet();
    // base2 obj2;
    // obj2.greet();

    // derived obj;
    // obj.greet();
    // Ambibuity 2
    B b;
    b.say();

    D d;
    d.say();
    return 0;
}