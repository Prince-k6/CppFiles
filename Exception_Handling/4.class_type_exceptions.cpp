//catching class type exception
/*
•Exceptions can be objects of user-defined classes
•Common in real-world programs
Useful for:
    1. Encapsulating error details
    2. Providing meaningful error information

*/
#include<iostream>
using namespace std;
#include<cstring>

class myException{
public:
    char str_what[80];
    int what;
    //constructor
    myException(){
        *str_what=0;
        what=0;
    }
    myException(const char *m, int e){
        strcpy(str_what,m);
        what=e;
    }
};

// int main(){
//     int val;
//     cout<<"enter a positive number:";
//     cin>>val;
//     try{
//         if(val<0){
//             throw myException("negative number",val);
//         }else{
//             cout<<val<<" is positive number\n";
//         }
//     }catch(myException e){
//         cout<<e.str_what<<": ";
//         cout<<e.what<<endl;
//     }
//     return 0;
// }

//exception as objects of classes
class AgeException{
public:
    char msg[50];
    int age;
    AgeException(const char *m,int a){
        strcpy(msg,m);
        age=a;
    }
};
int main(){
    int age;
    cout<<"enter age:";
    cin>>age;
    try{
        if(age<18){
            throw AgeException("underage",age);
        }else{
            cout<<"18+\n";
        }
    }catch(AgeException e){
        cout<<e.msg<<":"<<e.age<<endl;
    }
}
//need more clarity in this