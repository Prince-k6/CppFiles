//Templates : blueprint for creating function or classes that can work with any data type

#include<iostream>
#include<iostream>
using namespace std;


                                          //generic function
//a function with one generic type
template<class T>
void Swap(T &a, T &b){      //now this can work for any data type
    T temp=a;
    a=b;
    b=temp;
}
//a function with two generic type
template<class type1,class type2>
void myfunc(type1 X, type2 Y){
    cout<<X<<": "<<Y<<endl;
}

// int main(){
//     int a=10,b=20;
//     float c=11.5,d=45.67;
//     char p1='A',p2='B';
//     Swap(a,b);
//     cout<<"a="<<a<<" b="<<b<<endl;
//     Swap(c,d);
//     cout<<"c="<<c<<" d="<<d<<endl;
//     Swap(p1,p2);
//     cout<<"p1="<<p1<<" p2="<<p2<<endl;

//     myfunc("hello number",23);

//     return 0;
// }

                                       // generic class
template<class T>

class MyClass{
private:
    T data1;
    T data2;
public:
    MyClass(T d,T e){
        cout<<"class constructor\n";
        data1=d;
        data2=e;
    }
    void display(){
        cout<<"data1+data2= "<<data1+data2<<endl;
    }
};

int main(){
    MyClass<int> obj1(1,2);
    obj1.display();
    
    MyClass<float> obj2(5.4,6.7);
    obj2.display();

    MyClass<double> obj3(5.567,78.9834);
    obj3.display();

    MyClass<char>obj4('A','B');
    obj4.display();

    return 0;

}