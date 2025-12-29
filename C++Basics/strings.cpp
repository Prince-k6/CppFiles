                                         //introduction
// #include<iostream>
// using namespace std;

// int main(){
//     char str[]="Prince";  //string literal
//     int l=strlen(str);
//     cout<<"output:"<<str<<endl; //constant pointers
//     return 0;
// }

//cin.getline(str,len,delimter)-->for taking string inputs

// int main(){
//     char str[12];
    
//     cout<<"enter the string:";
//     cin.getline(str,12);

//     for(char i: str){
//         cout<<i<<" ";
//     }
//     cout<<endl;
// }



                                             //string module
#include<iostream>
#include<string>          //string class
using namespace std;

int main(){
    string str="hello world";   //contiguous in nature
    cout<<str<<endl;

    str="world";
    cout<<str<<endl;

    string str1="apna";
    string str2= "college";

    string str3=str1+str2;  //concatenation
    cout<<str3<<endl;

    cout<< (str1==str2)<<endl; //comparing 2 strings

    //taking string input
    string s;
    cout<<"enter your string:";
    getline(cin,s);

    cout<<s<<endl;
    return 0;
}


                                             //reversing a string
// #include<iostream.h>
// #include<string,h>
// using namespace std;

// int main(){
//     string str = "hello";
//     int n=str.size();
//     int st=0,end=n-1;
//     while(st<end){
//         swap(str[st],str[end]);          //swapping using double pointer method
//         st++;
//         end--;
//     }
//     cout<<str<<endl;
//     return 0;

//     // string str1="Prince";
//     // reverse(str1.begin(),str1.end());      //swapping using string reverse() method
//     // cout<<str1<<endl;
// }

  
// int main(){
//     string str1="Prince";
//     reverse(str1.begin(),str1.end());
//     cout<<str1<<endl;;
// } 