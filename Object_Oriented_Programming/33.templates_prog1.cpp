#include<iostream>
using namespace std;

//WAP using classes and templates that finds the dot product of two vectors

//template class
template <class T>         //T is the place holder 
class Vector{
public:
    T size;
    T *arr;

    Vector(int m):size(m){       //constructor
        arr = new T[size];
    }
    T dotproduct(Vector &v){
        T d=0;
        for(int i=0;i<size;i++){
            d+=this->arr[i]*v.arr[i];        //this->arr[i] is the object with which it will be called and arr[i] is object which is passed 
        }
        return d;
    }
}; 

int main(){
    Vector<int> v1(3);
    v1.arr[0]=4;
    v1.arr[1]=5;
    v1.arr[2]=6;
    Vector<int> v2(3);
    v2.arr[0]=2;
    v2.arr[1]=3;
    v2.arr[2]=5;
    int res1=v1.dotproduct(v2);
    cout<<res1<<endl;
    Vector<float> v3(3);
    v3.arr[0]=4.5;
    v3.arr[1]=5;
    v3.arr[2]=6.3;
    Vector<float> v4(3);
    v4.arr[0]=2.09;
    v4.arr[1]=3.44;
    v4.arr[2]=5.01;
    float res2=v3.dotproduct(v4);
    cout<<res2<<endl;
    return 0;
}