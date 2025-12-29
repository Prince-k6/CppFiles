//binary_search:the most optimised way to search for an element inside a sorted array or a vector
//               by breaking the array into three parts( i.e first interval,mid value,second interval)

#include<iostream>
using namespace std;
#include<vector>

//iterative code
int binary_search(vector<int> arr,int tgt){           
    int n=arr.size();
    int st=0,end=n-1,mid;
    while(st<=end){
        mid=st+(end-st)/2;  //->> st+(end-st)/2 = (st+end)/2
        if(tgt==arr[mid]){
            return mid;
        }else if(tgt>arr[mid]){
            st=mid+1;
        }else{
            end=mid-1;
        }
    }
    return -1; 
}

// int main(){
//     vector<int> arr1={-1,0,3,4,5,9,12};
//     int tar1=3;
//     int search=binary_search(arr1,tar1);
//     if (search!=-1){
//         cout<<"element "<<tar1<<" is found at index "<<search<<endl;
//     }
//     else{
//         cout<<"element "<<tar1<<" is not found"<<endl;
//     }

//     vector<int> arr2={-1,0,3,5,9,12};
//     int tar2=9;
//     search=binary_search(arr2,tar2);
//     if (search!=-1){
//         cout<<"element "<<tar2<<" is found at index "<<search<<endl;
//     }
//     else{
//         cout<<"element "<<tar2<<" is not found"<<endl;
//     }

//     return 0;
// }


//recursive code

int bs(vector<int> arr,int tgt,int st,int end){
    if(st<=end){
        int mid=st+(end-st)/2;
        if(tgt>arr[mid]){
            return bs(arr,tgt,mid+1,end);
        }else if(tgt<arr[mid]){
            return bs(arr,tgt,st,mid-1);   
        }else{
            return mid;
        }
    }
    return -1;
}
int main(){
    vector<int> arr1={-1,0,3,4,5,9,12};
    int tar1=3;
    int st=0;
    int end=arr1.size()-1;
    cout<<bs(arr1,tar1,st,end)<<endl;
    return 0;
}