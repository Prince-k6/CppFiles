                      //overloading a generic function
#include<iostream>
using namespace std;

/*                                
•One template function
•Another normal function OR another template function with same name, but different parameters.
this is called function overloading of template functions.

properties:-
    •Function name can be same.
    •One version may be normal, others may be templates.
    •Compiler chooses the best match.
    •Templates give flexibility to work with any data type.
*/

//normal function
void Swap(int &x, int &y){
    cout<<"this is normal function\n";
    int temp=x;
    x=y;
    y=temp;
}
//template function
template <class T>
void Swap(T &x, T &y){
    cout<<"this is template function\n";
    T temp=x;
    x=y;
    y=temp;
}
int main(){
    int a=9, b=10;
    cout<<"a="<<a<<",b="<<b<<endl;
    Swap(a,b);                         //normal function will be called
    cout<<"a="<<a<<",b="<<b<<endl;

    char ch1='A',ch2='B';
    cout<<"ch1="<<ch1<<",ch2="<<ch2<<endl;
    Swap(ch1,ch2);                    //template function will be called
    cout<<"ch1="<<ch1<<",ch2="<<ch2<<endl;


    return 0;
}