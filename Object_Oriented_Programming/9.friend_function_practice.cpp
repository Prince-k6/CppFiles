//more examples on friend function 
                                          // easy example
// #include<iostream>
// using namespace std;
// //forward declartion
// class Y;

// class X{
//     int data;
// public:
//     void set_data(int x){
//         data=x;
//     }
//     friend void divide(X ,Y );
// };

// class Y{
//     int num;
// public:
//     void set_num(int y){
//         num=y;
//     }
//     friend void divide(X ,Y );
// };

// void divide(X a,Y b){
//     cout<<"divide="<<a.data/b.num<<endl;
// }

// int main(){
//     X a1;
//     Y b1;
//     a1.set_data(35);
//     b1.set_num(6);
//     divide(a1,b1);

//     return 0;
// }

                                //hard example:swap 2 numbers of 2 different class

#include<iostream>
using namespace std;

class c2;

class c1{
    int num1;
public:
    void set_data(int n1){
        num1=n1;
    }
    void show_data(){
        cout<<"class1 data:"<<num1<<endl;
    }
    friend void exchange(c1 & ,c2 & );      //using call by reference
};
class c2{
    int num2;
public:
    void set_data(int n2){
        num2=n2;
    }
    void show_data(){
        cout<<"class2 data:"<<num2<<endl;
    }
    friend void exchange(c1 & ,c2 & );      //using csll by reference

};

void exchange(c1 &a, c2 &b){            //using call by reference
    int temp=a.num1;
    a.num1=b.num2;
    b.num2=temp;
}




int main(){
    c1 x;
    x.set_data(4);
    x.show_data();

    c2 y;
    y.set_data(9);
    y.show_data();

    exchange(x,y);

    x.show_data();
    y.show_data();

    return 0;
}
