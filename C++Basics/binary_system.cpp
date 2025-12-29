#include<iostream>
using namespace std;

int decimal_to_binary(int num){
    int bn=0,i=0;
    while (num>0){
        bn+=(num%2)*pow(10,i);
        num/=2;
        i++;
    }
    return bn;
}

// int main(){
//     int num;
//     cout<<"enter number:";
//     cin>>num;
//     cout<<num<<"="<<decimal_to_binary(num)<<endl;
//     return 0;
// }   

//find binary of 1 to 10
// int main(){
//     for(int i=1;i<=10;i++){
//         cout<<decimal_to_binary(i)<<endl;
//     }
//     return 0;
// }

void binary_to_decimal(int bn){        //bn-->binary number
    int decimal_no=0,i=0;
    while (bn>0){
        decimal_no+=(bn%10)*pow(2,i);
        bn=bn/10;
        i++;
    }
    cout<<decimal_no;
}
// int main(){
//     int bn=1100101;
//     binary_to_decimal(bn);
//     cout<<endl;
//     return 0;
// }

// int main(){
//     int a=4,b=8;
//     cout<<"(a&b)="<<(a&b)<<endl;
//     cout<<"(a|b)="<<(a|b)<<endl;
//     cout<<"(a^b)="<<(a^b)<<endl;
//     cout<<"(b^a)="<<(b^a)<<endl;

//     cout<<"left shift operator\n";
//     cout<<"(4<<1)="<<(4<<1)<<endl;
//     cout<<"(10<<2)="<<(10<<2)<<endl;

//     cout<<"right shift operator\n";
//     cout<<"(10>>1)="<<(10>>1)<<endl;
//     cout<<"(8>>2)="<<(8>>2)<<endl;
    
//     return 0;
// }
int main(){
    cout<<decimal_to_binary(7)<<"\n";
    return 0;
}
