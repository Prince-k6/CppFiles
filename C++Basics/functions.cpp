#include<iostream>
using namespace std;

//sum of 2 numbers
double sum(double a,double b){
    double s=a+b;
    return s;
}
//min of 2 numbers
double min(double a,double b){         //parameters
    if (a>b){
        return b;
    }else{
        return a;
    }
}

// int main(){
//     double a,b;
//     cout<<"enter a:";
//     cin>>a;
//     cout<<"enter b:";
//     cin>>b;
//     cout<<"sum="<<sum(a,b)<<"\n";        // calling sum function
//     cout<<"minimum of 2 numbers is "<<min(a,b)<<"\n";   //arguments   
//     return 0;
// }



//sum till n
int sumn(int n){
    int sum=0;
    for (int i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
}

// int main(){
//     int n;
//     cout<<"enter n:";
//     cin>>n;
//     cout<<"sum from 1 to "<<n<<"= "<<sumn(n)<<"\n";
//     return 0;

// }

//sum of digits of a number
int sum_of_digits(int num){
    int sum=0;
    while (num>=0){
        sum+=num%10;
        num=num/10;
    }
    return sum;
}
 
// int main(){
//     int x;
//     cout<<"enter the number:";
//     cin>>x;
//     cout<<"sum of digits of "<<x<<"="<<sum_of_digits(x)<<endl;
//     return 0;
// }



//finding factorial
double factorial(int n){
    double fact=1;
    if (n==0||n==1){
        return 1;
    }
    else{
        for (int i=n;i>1;i--){
            fact*=i;
        }
        return fact;
    }
}

// //finding nCr 
// double nCr(int n,int r){
//     return factorial(n)/(factorial(n-r)*factorial(r));
// }  //this function is unable to handle large numbers

//finding nCr
double nCr(int n,int r){
    double numerator=1;          //local variable...
    for(int i=n;i>(n-r);i--){
        numerator*=i;
    }
    return numerator/factorial(r);
}

// int main(){
//     int n,r;
//     cout<<"enter n:";
//     cin>>n;
//     cout<<"enter r:";
//     cin>>r;
//     cout<<n<<"C"<<r<<"="<<nCr(n,r)<<endl;
//     return 0;
// }

// return the number if it is prime
// int check_prime(int n){
//     bool isprime=true;
//     for (int i=2;i<n;i++){
//         if (n%i==0){
//             isprime=false;
//             break;
//         }
//     }
//     if (isprime==true){
//         return n; 
//     }
// }

// int main(){
//     int n;
//     cout<<"enter n:";
//     cin>>n;
//     cout<<"prime numbers\n";
//     for(int i=1;i<=n;i++){
//         int prime=check_prime(i);
//         if (prime!=1){
//             cout<<prime<<" ";
//         }
//     }
//     cout<<endl;
// }


int x=10;       //global variable....
int main(){
    cout<<"x="<<x<<endl;
    return 0;
}
