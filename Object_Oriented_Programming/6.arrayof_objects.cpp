//array of objects

#include<iostream>
using namespace std;

class Employee{
private:
    int id;
    int salary;
public:
    void setid(){
        salary=122;
        cout<<"enter id:";
        cin>>id;
    }
    void getid(){
        cout<<"employee id :"<<id<<endl;
    }
};

class Complex{
private:
    int real;
    int img;
public:
    void set_num(int a,int b){
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
    void complex_sum(Complex c1,Complex c2){
        real=c1.real+c2.real;
        img=c1.img+c2.img;
    }
};

int main(){
    // Employee emp[4];     //creates an 'array of objects' of class Employee
    // for(int i=0;i<4;i++){
    //     emp[i].setid();
    //     emp[i].getid();
    // }

    // Complex c[3];  //creates three objects of type complex
    // c[0].set_num(3,5);
    // c[1].set_num(5,-7);

    // c[2].complex_sum(c[0],c[1]);
    // c[2].show_num();

                                        //array of object using pointer
    int size=3;
    Complex *cmx = new Complex[size];     //allocates memory of type Complex
    Complex *view=cmx;                  //for viewing the data
    int a,b;

    for(int i=0;i<size;i++){
        cout<<"enter complex number "<<i+1<<": ";
        cin>>a>>b;
        // (*cmx).set_num(a,b);
        cmx->set_num(a,b);
        cmx++;
    }
    
    for(int i=0;i<size;i++){
        view->show_num();
        view++;
    }
    
    return 0;
}