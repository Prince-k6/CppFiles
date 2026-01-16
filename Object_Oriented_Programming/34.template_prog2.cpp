#include<iostream>
using namespace std;

//make a template class that can take two different data type

/*
syntax:
template<class T1, class T2>
class class_name{
    //code
}


*/

template <class T1,class T2>
class myclass{
private:
    T1 data1;
    T2 data2;
public:
    myclass(T1 x, T2 y):data1(x),data2(y){}
    void show(){
        cout<<data1<<","<<data2<<endl;      //both lines will give same output
    }
};

int main(){
    myclass<float,int> obj1(8.99,67);
    obj1.show();
    myclass<char,int> obj2('D',69);
    obj2.show();
    return 0;
}