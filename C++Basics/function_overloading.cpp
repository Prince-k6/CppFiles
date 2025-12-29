//function overloading : Function overloading allows us to define multiple functions with the same name but different parameters.
// It is a form of compile time polymorphism in which different functions with same name can 
//perform different jobs based on the different parameters passed.
#include<iostream>
using namespace std;

int add(int a,int b){
    cout<<"using function with 2 arguemnets"<<endl;
    return a+b;
}
int add(int a,int b,int c){
    cout<<"using function with 3 arguemnets"<<endl;

    return a+b+c;
}

//calculate the volume of a sphere
float volume(float r, float h){
    return 3.14*r*r*h;
}
//calculate the volume of cube
float volume(int a){
    return a*a*a;
}
//calculate the volume of cuboid
float volume(float l,float b,float h){
    return l*b*h;
}

int main(){
    cout<<add(4,6)<<endl;
    cout<<add(4,6,8)<<endl;

    cout<<"volume of sphere: "<<volume(4,14)<<endl;
    cout<<"volume of cube: "<<volume(4)<<endl;
    cout<<"volume of sphere: "<<volume(4,14)<<endl;


    return 0;
}