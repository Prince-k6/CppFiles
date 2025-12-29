
//pair sum: mean find the two elements in an array or vector which adds upto target.

#include<iostream>
using namespace std;

vector<int> pair_sum(vector<int> vec,int tgt){
    vector<int> ans;
    for(int i=0;i<vec.size();i++){
        for(int j=i+1;j<=vec.size();j++){
            if (vec[i]+vec[j]==tgt){
                ans.push_back(vec[i]);
                ans.push_back(vec[j]);
            }
        }
    }
    return ans;
}


int main(){
    vector<int> vec ={2,7,11,15};
    int tgt=9;
    vector<int> ans=pair_sum(vec,tgt);
    cout<<ans[0]<<ans[1]<<endl;
    return 0;
}