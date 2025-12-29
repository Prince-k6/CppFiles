                                    //constructor overloading:when multiple constructors are defined
// #include<iostream>
// using namespace std;

// class Complex{
// private:
//     int real;
//     int img;
// public:
//     Complex(){                   //invokes when no arguments passed
//         cout<<"this is default constructor"<<endl;
//         real=0;
//         img=0;
//     }
//     Complex(int a){             //invokes when only one argument is passed
//         real=a;
//         img=0;
//     }
//     Complex(int a,int b){       //invokes when both arguments are passed
//         real=a;
//         img=b;
//     }
//     void show_num(){
//         if(img<0){
//             cout<<real<<img<<"i"<<endl;
//         }
//         else{
//             cout<<real<<"+"<<img<<"i"<<endl;
//         } 
//     } 
// };
// int main(){
//     Complex c1(6,-8);
//     c1.show_num();

//     Complex c2(8);
//     c2.show_num();

//     Complex c3;
//     c3.show_num();
//     return 0;
// }

                               //constructors with default arguments

#include<iostream>
using namespace std;

class data{
private:
    int d1,d2,d3;
public:
    data(int x,int y=10,int z=78){
        d1=x;
        d2=y;
        d3=z;
    }
    void show_data();

};
void data:: show_data(){               //defining outside the class using scope resolution operator
    cout<<"d1= "<<d1<<", d2= "<<d2<<", d3= "<<d3<<endl;
}

int main(){
    data x(3);
    x.show_data();
    
    data y(5,7);
    y.show_data();

    data z(100,99,8);
    z.show_data();
    return 0;
}