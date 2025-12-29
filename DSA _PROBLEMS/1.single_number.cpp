#include<iostream>
using namespace std;
#include<vector>

// single number :- means out of given doublets which number is single
int single_number(vector<int>vec){
    int ans=0;
    for(int i:vec){
        ans=ans^i;     //XOR : Both same then 0 , Both diff then 1.
    }
    return ans;
}
int main(){
    vector<int>vec={1,2,2,3,4,4,3};
    cout<<single_number(vec)<<endl;
    return 0;
}