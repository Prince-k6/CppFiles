//linear search: returning the index of an element from an array or a vector.
//better way-->binary search

#include<iostream>
using namespace std;
#include<vector>

int linear_search(vector<int> vec,int tgt){
    for(int i=0;i<vec.size();i++){
        if (vec[i]==tgt){
            return i;
        }
    }
    return -1;
}

int main(){
    vector<int> arr={2,3,4,10,40};
    int target=10;
    int res=linear_search(arr,target);
    if(res!=-1){
        cout<<target<<" found at index "<<res<<endl;
    }
    else{
        cout<<target<<" not found"<<endl;
    }
    return 0;
}