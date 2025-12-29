#include<iostream>
using namespace std;


// void logicOp(int a, int b)
// {
//     /*output (a&&b), (a||b), and ((!a)&&(!b))separated by spaces*/ 
//     cout<<(a&&b);
//     cout<<endl;
// }

// int main(){
//     // logicOp(6,7);
//     int a=-1,b=1;
//     cout<<(a&&b)<<endl;
//     return 0;
// }

int no_of_pairs(int x){
    int i=0;
    while(x>0){
        x=x/100;
        i++;
    }
    return i;
}
// int main(){
//     int n;
//     cout<<"enter n:";
//     cin>>n;
//     cout<<no_of_pairs(n)<<"\n";

// }
// int hammingWeight(int x) {
//     int binary_no=0,i=0;
//     while(x>0){
//         binary_no+=(x%2)*pow(10,i);
//         x/=2;
//         i++;
//     }
//     return binary_no;
// }
// int main(){
//     cout<<hammingWeight(11)<<"\n";
// }
// int main(){
//     int hw=0;
//     int binary_no=1011;
//     while(binary_no>0){
//         if(binary_no%10==1){
//             hw+=1;
//         }
//         binary_no/=10;
//     }
//     cout<<hw<<endl;
// }
int hammingWeight(int n) {
        int binary_no=0,i=0;
        while(n>0){
            binary_no+=(n%2)*pow(10,i);
            n/=2;
            i++;
        }
        int count=0;
        while(binary_no>0){
            if(binary_no%10==1){
                count+=1;
            }
            binary_no/=10;
        }
        return count;
}
int main(){
    cout<<hammingWeight(11)<<endl;
    return 0;
}
