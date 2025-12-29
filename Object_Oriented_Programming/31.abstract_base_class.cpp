//abstract base class and pure virtual funtion

/*
Abstract class: base class having atleast one virtual function which is overridden in derived classes

pure virtual function: virtual functions within derived class initialised with zero
                    •initialisation with zero means it does nothing

*/


#include<iostream>
#include<iomanip>       //for setprecision()
#include<cmath>     //pow() function

using namespace std;

class shape{                     //abstract class
private:

public:
   virtual void area()=0;     //pure virtual function
};

class square : public shape{
private:
    float side;
public:
    square(float s):side(s){}

    void area(){
        // return side*side;
        cout<<"Area of square: "<<side*side<<endl;
    }
};
class circle : public shape{
private:
    float radius;
public:
    circle(float r):radius(r){}

    void area(){
        cout<<"Area of circle: "<<M_PI*pow(radius,2)<<setprecision(4)<<endl;
    }
};


int main(){
    // shape s;     //this will give error saying object of abstract class not allowed

    square s(7);
    circle c(9);
    s.area();
    c.area();

    // shape *s= new square(9);                //pointer to abstractt class
    // s->area();
    // delete s;


    return 0;
}