//array operator : used to read a pointer value 

#include<iostream>
using namespace std;

class Complex{
private:
    int real;
    int img;
public:
    Complex(int a,int b){
        real=a;
        img=b;
    }
    void show_num(){
        if(img<0){
            cout<<real<<img<<"i"<<endl;
        }
        else{
            cout<<real<<"+"<<img<<"i"<<endl;
        }
    }
};


int main(){
    Complex c1(6,7);
    c1.show_num();

    Complex *ptr=&c1;
    // (*ptr).show_num();
    ptr->show_num();

    Complex *c2= new Complex(7,8);
    // (*c2).show_num();
    c2->show_num();



    return 0;
}