// exception handling
#include <iostream>
#include <string>
using namespace std;

// localised try catch in a function
//  void xhandler(int test){
//      try{
//          if(test==5 || test==2){        //if (test) //test non zero
//              throw test;
//          }else{
//              cout<<"executed"<<endl;
//          }
//      }
//      catch(int test){
//          cout<<"Exception caught : "<<test<<endl;
//      }
//  }

// int main(){
//     xhandler(0);
//     xhandler(1);
//     xhandler(2);
//     xhandler(5);

//     return 0;
// }

// class throwing an exception
//  class MyException
//  {
//  public:
//      string str_what;
//      int what;
//      MyException()
//      {
//          str_what ="";
//          what = 0;
//      }
//      MyException(string s, int e)
//      {
//          str_what=s;
//          what = e;
//      }
//  };

// int main()
// {
//     int i;
//     try
//     {
//         cout << "Enter a positive number: ";
//         cin >> i;
//         if (i < 0)
//             throw MyException("Not Positive", i);
//     }
//     catch (MyException e)
//     {
//         cout << e.str_what << ": ";
//         cout << e.what << "\n";
//     }
//     return 0;
// }

// multiple catch statements
// void Xhandler(int test)
// {
//     try
//     {
//         if (test)        //test non zero
//             throw test;
//         else
//             throw "Value is zero";
//     }
//     catch (int i)
//     {
//         cout << "Caught Exception #: " << i << '\n';
//     }
//     catch (const char *str)
//     {
//         cout << "Caught a string: ";
//         cout << str << '\n';
//     }
// }
// int main()
// {
//     cout << "Start\n";
//     Xhandler(1);
//     Xhandler(2);
//     Xhandler(0);
//     Xhandler(3);
//     cout << "End"<<endl;
//     return 0;
// }

// divide by zero error
// void divide(double a, double b)
// {
//     try{
//         if (!b){                 
//             throw b; // checkfor divide-by-zero
//         }
//         cout << "Result: " <<a/b<<endl;
//     }
//     catch (double b) {
//         cout << "Can't divide byzero.\n";
//     }
// }
void divide(double a,double b){
    try{
        if(b==0){
            throw "zero division error";
        }
        else{
            cout<<a/b<<endl;
        }
    }
    catch(char const *s){
        cout<<s<<endl;
    }
}
int main(){
    double i, j;
    do{
        cout << "Enter numerator (0tostop):";
        cin >> i;if(i==0){break;}
        cout << "Enter denominator: ";
        cin >> j;
        divide(i, j);
    } while (i != 0);
    return 0;
}
