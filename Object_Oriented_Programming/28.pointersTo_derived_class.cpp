//pointers to derivd class

/*. Base class pointer can be pointed to derived class object but it will
    only access those members & members functions that are present in the base classs.  */

#include<iostream>
using namespace std;


class base{
private:

public:
    int var_base;
    void display(){
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
    base_class_pointer=&obj2;         //base class pointer can be pointed to derived class object but it will
                                // only access those members & members functions that are present in the base classs

    base_class_pointer->var_base=9;
    // base_class_pointer->var_derived=18;      //will throw an error 
    base_class_pointer->display();         //base class display will run

    derived *derived_class_pointer;
    derived_class_pointer=&obj2;
    derived_class_pointer->var_derived=78;
    derived_class_pointer->display();

    return 0;
}