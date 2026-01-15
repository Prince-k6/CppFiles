/* 
virual function :
    •Virtual functions are member functions in a base class, declared with the virtual keyword,
    that can be redefined (overridden) in derived classes to provide specific implementations

    •Virtual function enables runtime polymorphism (dynamic dispatch)
•Properties
    1.they cannot be static
    2.they are accessed by object pointers
    3.virtual functions can be a friend of another class
    4.a virtual function in base class might not be used
    5.if a virtual function is defined in a base class there is no necessity of redefining it in the derived class

    
*/


#include<iostream>
using namespace std;


class base{
private:

public:
    int var_base;
    virtual void display(){           //using virtual function
        cout<<"Displaying base class variable var base: "<<var_base<<endl; 
    }

};

class derived: public base{
private:

public:
    int var_derived;
    void display(){
        cout<<"Displaying base class variable var base: "<<var_base<<endl; 
        cout<<"Displaying derived class variable var derived: "<<var_derived<<endl; 
    }
};

int main(){
    base *base_class_pointer;
    base obj1;
    derived obj2;
    
    base_class_pointer=&obj2;         //base class pointer can be pointed to derived class but can't access derived class member & member function
    base_class_pointer->var_base=9;
    // base_class_pointer->var_derived=18;      //will throw an error 
    base_class_pointer->display();         //derived class display will run
    cout<<"-----------------------------\n";

    derived *derived_class_pointer;
    derived_class_pointer=&obj2;         //pointing a derived class pointer to derived class object
    derived_class_pointer->var_derived=78;
    derived_class_pointer->display();          //derived class display will run

    return 0;
}
