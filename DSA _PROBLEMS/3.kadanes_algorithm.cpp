
//kadanes algorithm: this algorithm is used to find the sum of subarray which has maximum sum

#include<iostream>
using namespace std;

//printing maximum no of subarrays for a given array    ...mathematical formula = n*(n+1)/2

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
//     int arr[]={1,2,3,4,5};
//     int size=5;
//     max_sub_array(arr,size);
//     return 0;
// }

int maxsum_sub_array(int arr[],int n){          //function for finding the maximum sum of an array
    int maxsum=INT_MIN;
    for(int i=0;i<n;i++){
        int current_sum=0;
        for (int j=i;j<n;j++){
            current_sum+=arr[j];
            maxsum=max(maxsum,current_sum);
        }
    }
    return maxsum;
}

// int main(){
//     int arr[]={3,-4,5,4,-1,7,-8};
//     int size=7;
//     max_sub_array(arr,size);
//     cout<<"\n";
//     cout<<"maximum sum of subarray="<<maxsum_sub_array(arr,size)<<endl;

//     return 0;
// }


//more optimised solution for the above questions:-Kadanes Algorithm
int kadanesAlgorithm(vector<int> vec){
    int current_sum=0,max_sum=INT_MIN;
    for (int i: vec){
        current_sum+=i;
        max_sum=max(current_sum,max_sum);
        if(current_sum<0){
            current_sum=0;
        }
    }
    return max_sum;
}

int main(){
    vector<int> values={-2,1,-3,4,-1,2,1,-5,4};
    cout<<kadanesAlgorithm(values)<<endl;   
    return 0;
}                              //for executing this code use g++ -std=c++11 kadanes_algorithm.cpp


//for detailed revision refer DSA "kadanes algorithm" lecture by "apna college"