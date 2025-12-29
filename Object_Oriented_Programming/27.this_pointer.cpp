//this pointer: this is keyword which is a pointer which points to the object which invokes 
//the member function


#include<iostream>
using namespace std;


class A{
private:
    int a;                //member function
public:
    void set_data(int a){
        this->a=a;            //its pointing to the member function
    }
    void show_data(){
        cout<<"a="<<a<<endl;
    }
};
int main(){
    A obj;
    obj.set_data(9);
    obj.show_data();
    return 0;
}