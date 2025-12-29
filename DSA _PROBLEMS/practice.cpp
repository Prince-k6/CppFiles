#include<iostream>
using namespace std;
#include<vector>

int max_sum_subarray(int arr[],int n){
    int max_sum=INT_MIN;
    for (int i=0;i<n;i++){
        int curr_sum=0;
        for(int j=i;j<n;j++){
            curr_sum+=arr[j];
            max_sum=max(max_sum,curr_sum);
        }
    }
    return max_sum;
}

// int main(){
//     int arr[]={-2,1,-3,4,-1,2,1,-5,4};
//     cout<<"max_sum="<<max_sum_subarray(arr,9)<<"\n";
//     return 0;
// }
void max_sub_array(int arr[],int n){               //function for printing all the subarrays
    for(int i=0;i<n;i++){
        for (int j=i;j<n;j++){
            for (int k=i;k<=j;k++){
                cout<<arr[k];
            }
            cout<<"  ";
        }
        cout<<"\n";
    }
}

// int main(){
//     int vec[]={5,0,0,0};
//     max_sub_array(vec,4);
    
//     return 0;
// }

//third max element
int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int max=nums.back();
        while(max==nums.back()){
            nums.pop_back();
        }
        int sec_max=nums.back();
        while(sec_max==nums.back()){
            nums.pop_back();
        }
        if(nums.empty()){
            return max;
        }
        return nums.back();      
}
int main(){
    vector<int> vec={1,2,7,7,5,5,5};
    cout<<thirdMax(vec);
    return 0;
}