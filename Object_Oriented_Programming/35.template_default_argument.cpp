//templates with default arguments

#include<iostream>
using namespace std;

template <class T1=int, class T2=float,class T3=char>
class prince{
private:
    
public:
    T1 a;
    T2 b;
    T3 c;
    prince(T1 x, T2 y, T3 z):a(x),b(y), c(z){}

    void show(){
        cout<<"the value of a is :"<<a<<endl;
        cout<<"the value of b is :"<<b<<endl;
        cout<<"the value of c is :"<<c<<endl;
        cout<<"------------------------\n";

    }

};
int main(){
    prince<> obj1(5, 5.090, 'A');       //default argument list
    obj1.show();

    prince<char, float, int> obj2('B',56.9,99);
    obj2.show();
    return 0;
}