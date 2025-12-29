//protected access modifier (part of inheritance only)

#include<iostream>
using namespace std;

class base{
protected:
    int a=10;
private:
    int b=20;
public:
    int c=30;
};

/*
for a protected member
                      public derivation    private derivation    protected derivation
1.private.             not inherited        not inherited           not inherited 
2.protected              protected            private                protected
3.public                   public             private                protected

*/


/* chage the visibility mode to public or private or protected, trace the program and see the result*/
class derived : protected base{

public:
    int d=11;
};

int main(){
    base object1;
    // cout<<object1.a<<endl;     //inaccessible
    // cout<<object1.b<<endl;     //inaccessible
    cout<<object1.c<<endl;


    derived object2;
    // cout<<object2.a<<endl;      //inaccessible
    // cout<<object2.b<<endl;      //inaccessible
    // cout<<object2.c<<endl;      //inaccessible
    cout<<object2.d<<endl;      


    return 0;
}