//friend function : a function declared within a class with keyword 'friend' and defined outside the class is know as friend function
//it can access private and protected members of a class

/* 
    properties of friend function
    1.not in the scope of class
    2.since it is not in the scope of class, 
        it cannot be called from the object of that class.
    3.can be invoked without the help of any function
    4.usually contains the objects as arguments
    5.can be declared inside public or private section of the class
    6.it cannot access the members directly by names 
        and need object_name.member_name to access any member through membership operator(.)
        
*/
#include<iostream>
using namespace std;

class Complex{
    int real;
    int img;
public:
    void set_num(int a,int b){
        real=a;
        img=b;
    }
    void show_num(Complex c){
        if(c.img<0){
            cout<<c.real<<c.img<<"i"<<endl;
        }else{
            cout<<c.real<<"+"<<c.img<<"i"<<endl;
        }
    }
    friend Complex sum_complex(Complex c1, Complex c2);
    friend void show();
};
Complex sum_complex(Complex c1, Complex c2){
    Complex c3;
    c3.set_num((c1.real+c2.real),(c1.img+c2.img));
    return c3;
}
void show(){
    cout<<"This is a normal show function demonstrating friend function\n";
}
int main(){
    Complex c1,c2,sum;
    c1.set_num(5,6);
    c1.show_num(c1);
    
    c2.set_num(6,-8);
    c2.show_num(c2);

    // c1.show();
    // c2.show();       //friend function is not in the scope of class hence it cannot be called/invoked from
                            // the object of that class


    sum=sum_complex(c1,c2);
    sum.show_num(sum);

    return 0;
}