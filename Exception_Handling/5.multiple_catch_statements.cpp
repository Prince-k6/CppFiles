//multiple catch statements
/*
• A try block can have multiple catch blocks
• Each catch handles a different type
• Checked in order
• Only the first matching catch executes

*/
#include<iostream>
using namespace std;
template<class T>
void xhandler(T x){
    try{
        if(x==0){
            throw "value is zero\n";
        }else{
            throw x;
        }
    }catch(int i){
        cout<<i<<" is int Exception\n";
    }catch(double i){
        cout<<i<<" is float Exception\n";
    }catch(char i){
        cout<<i<<" is char Exception\n";
    }
    catch(const char *i){
        cout<<i<<" is string Exception\n";
    }
};

int main(){
    xhandler(1);
    xhandler(0);
    xhandler(9.8);
    xhandler('A');
    xhandler("abc");

    return 0;
}