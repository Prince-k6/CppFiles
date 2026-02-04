//               throwing exception from function

/*
An exception can be thrown 
    1.outside the Try block
    2.As long as a function is called from within a Try block

*/
#include<iostream>
using namespace std;

void xtest(int x){               //this function throws the value of x if it is not  0 or 4 or 8
    if(x==0 || x==4 || x==8){
        cout<<"inside xtest function, value of x is "<<x<<"\n";
    }else{
        throw x;
    }
}

int main(){
    try{
        cout<<"inside try block\n";
        xtest(4);
        xtest(0);
        xtest(9);            //an exception is thrown only once
        xtest(7);
        xtest(8);
    }catch(int i){
        cout<<"Exception caught for x= "<<i<<endl;
    }
    cout<<"end\n";
    return 0;
}