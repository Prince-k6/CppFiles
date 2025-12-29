#include<iostream>
using namespace std;

inline int product(int a,int b){
    return a*b;
}
//not a good pratice to use static with inline functions

int static_demo(){                
    static int c=0;             /*static variable ko function nhi bhulta
                The variable is initialized only once, the first time the function is called,  
                and retains its value across all subsequent calls to that function, for the entire lifetime of the program.
                It is stored in the data segment of memory, not on the stack like regular local variables */
    c=c+1;
    return c;
}


int main(){
    // int a,b;
    // cout<<"enter the value of a and b:";
    // cin>>a>>b;
    // cout<<"product ="<<product(a,b)<<endl;
    cout<<static_demo()<<endl;   //1
    cout<<static_demo()<<endl;   //2
    cout<<static_demo()<<endl;   //3


    return 0;
}