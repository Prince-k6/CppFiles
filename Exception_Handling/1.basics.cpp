//Exception handling 
/*
Exception:-problems that occur  during run time of a program often due to logical errors

try block :- exception that may occur are put in try block

catch block :- immediately flows a try block
            •handles the thrown exception 

throw statement:-used to generate an exception
                •it can executed within 1) try block
                                       2) inside a function called from try block

*/

                    //basic example: divide by zero

#include<iostream>
using namespace std;

int main(){
    float a,b;
    cout<<"enter a:"; cin>>a;
    cout<<"enter b:"; cin>>b;
    try{                        //try block used for finding the exception
        if(b){
            float c=a/b;
            cout<<"a/b="<<c<<endl;
        }else{
            cout<<"hii\n";
            throw b;             //throwing the exception
        }
    }catch(float x){              //executes the exception
        cout<<"divison by "<<x<<" not possible\n";
    }
    return 0;

}
