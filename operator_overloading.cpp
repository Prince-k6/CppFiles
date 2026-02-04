//operator overloading
//unary operators(++,--+) -> no arguments required
//binary operator(+,-,*,/)-> one argument required

#include<iostream>
using namespace std;

class Complex{
private:
    int real;
    int img;
public:
    Complex(int r, int i):real(r),img(i){}
    
    void show_num(){
        if(img<0){
            cout<<real<<img<<"i"<<endl;
        }else{
            cout<<real<<"+"<<img<<"i"<<endl;
        }
    }
    //overloading plus operator
    Complex operator+(Complex &obj){
        return Complex((this->real+obj.real),(this->img+obj.img));
    }
    //overloading + with friend function
    //in friend operator overloading
    //binary operators takes two arguments where as unary takes one argument
    friend Complex operator+(Complex c1,Complex c2);
    //overloading ++ operator (pre-increment)
    Complex operator++(){
        this->real+=1;
        this->img+=1;
        return *this;
    }
    //overloading ++ operator (post-increment)
    Complex operator++(int){
        Complex temp(this->real,this->img);
        this->real+=1;
        this->img+=1;
        return temp;
    }
};
//overloading using friend function
Complex operator+(Complex c1, Complex c2){
    Complex c3(0,0);
    c3.real=c1.real+c2.real;
    c3.img=c1.img+c2.img;
    return c3;
}

int main(){
    Complex c1(6,7);
    c1.show_num();
    Complex c2 (8,-3);
    c2.show_num();
    Complex c3 = c1+c2;
    c3.show_num();
    //++,--works on integer type but i overloaded it for complex number to increase real and img parts by 1
    Complex c4=c1++;
    c4.show_num();

    return 0;
}