//friend classes and members
#include<iostream>
using namespace std;

//we need to tell the compilor that class Complex is present forward in the code or else it throws error so for that we use forward declartion
//forward declaration
class Complex;

class calculator{
private:
    int a;
    int b;
public:
    int add(int x,int y){
        a=x;
        b=y;
        return a+b;
    }
    int sum_real_part(Complex , Complex); 
    int sum_img_part(Complex,Complex);   

};
// int calculator:: sum_real_part(Complex c1, Complex c2){     //defining it here will give error because class Complex is still not defined
//     return (c1.real+c2.real);                             // defining after class Complex is defined will not throw an errors
// }

class Complex{
    int real;
    int img;

    // //individually declaring functions as friend
    // friend int calculator :: sum_real_part(Complex, Complex);  //declared a friend function of scope calculator this means function within the class calculator can now access the private members of class Complex
    // friend int calculator :: sum_img_part(Complex, Complex);

    //alter:declaring the entire class as friend
    friend class calculator;
public:                                                 

    void set_num(int a,int b){
        real=a;
        img=b;
    }
    void show_num(Complex c){
        if (c.img<0){
            cout<<c.real<<c.img<<"i"<<endl;
        }
        else{
            cout<<c.real<<"+"<<c.img<<"i"<<endl;
        }
    }
};
int calculator:: sum_real_part(Complex c1, Complex c2){
    return (c1.real+c2.real);
}
int calculator:: sum_img_part(Complex c1, Complex c2){
    return (c1.img+c2.img);
}


int main(){
    Complex c1,c2;
    c1.set_num(3,-7);
    c1.show_num(c1);

    c2.set_num(8,9);
    c2.show_num(c2);
    
    calculator calc;            //created an object 'calc' of calculator class
    cout<<"Sum of real part="<<calc.sum_real_part(c1,c2)<<endl;                //calling sum_real_part function with c1 and c2 complex objects
    cout<<"Sum of img part="<<calc.sum_img_part(c1,c2)<<endl; 

    return 0;
}