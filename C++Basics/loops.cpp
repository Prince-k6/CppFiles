#include<iostream>
using namespace std;

                                       //while loops
// int main(){
//     int a=1,n;
//     cout<<"enter n:";
//     cin>>n;
//     while (a<=n){
//         cout<<a<<" ";
//         a++;
//     }
//     cout<<"\n";
//     return 0;
// }   


                             //for loops

//sum till n
// int main(){
//     int n;
//     cout<<"enter n:";
//     cin>>n;
//     int sum=0;
//     for(int i=1;i<=n;i++){
//         sum+=i;
//     }
//     cout<<"sum="<<sum;
//     cout<<"\n";
//     return 0;
// }



//sum of odd
// int main(){
//     int n;
//     cout<<"enter n:";
//     cin>>n;
//     int sum=0;
//     for(int i=1;i<=n;i+=2){
//         sum+=i;
//     }
//     cout<<sum<<"\n";
//     cout<<"\n";

//     return 0;
// }

//check a number is prime or not
// int main(){
//     int n;
//     cout<<"enter n:";
//     cin>>n;
//     bool isprime=true;
//     for (int i=2;i<n;i++){
//         if(n%i==0){
//             isprime=false;
//             break;
//         }
//     }
//     if (isprime==true){
//         cout<<"prime number\n";
//     }else{
//         cout<<"not a prime\n";
//     }
//     return 0;
// }


//nested loops
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}


