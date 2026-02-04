//localized try catch in a function
/*

•A try catch block can be inside a function
•Each time the function is called exception handling is reset

*/
#include<iostream>
using namespace std;

void xtest(int x){         //this function throws an exception if x is not a multiple of 2
    try{
        if(x%2==0){
            cout<<x<<" is a multiple of 2"<<endl;
        }else{
            throw x;
        }
    }catch(int i){
        cout<<"exception occured, "<<i<<" is not a multiple of 2\n";
    }
}

int main(){
    xtest(4);
    xtest(8);
    xtest(9);
    xtest(56);
    xtest(87);
    return 0;
}