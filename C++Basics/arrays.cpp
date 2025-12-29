#include<iostream>
using namespace std;

// int main(){
//     int nums[5];
//     // int size;
//     // size=sizeof(nums)/sizeof(int);

//     for(int i=0;i<5;i++){
//         cin>>nums[i];
//     }

//     for(int i=0;i<5;i++){
//         cout<<"nums["<<i<<"]="<<nums[i]<<endl;
//     }
//     return 0;
// }


//finding maximum value in an array
// int main(){
//     int nums[5]={2,4,5,6,7};
//     int size;
//     size =sizeof(nums)/sizeof(nums[0]);
    
//     int max=nums[0];

//     for(int i=0;i<5;i++){
//         if (max<nums[i]){
//             max=nums[i];
//         } else {
//             continue;
//         }
//     }
//     cout<<"max="<<max<<"\n";
//     return 0;
// }


//finding minimum value in an array
// int main(){
//     int nums[5]={-45,-67,78,-108,33};
//     int size;
//     size =sizeof(nums)/sizeof(nums[0]);
    
//     int min=nums[0];

//     for(int i=0;i<5;i++){
//         if (min>nums[i]){
//             min=nums[i];
//         } else {
//             continue;;
//         }
//     }
//     cout<<"min="<<min<<"\n";
//     return 0;
// }

//finding max and min value using implict functions
// int main(){
//     int nums[5]={3,4,5,6,7};
//     int size;
//     size=sizeof(nums)/sizeof(nums[0]);

//     int smallest=INT_MAX;  //smallest=+infinity
//     int largest=INT_MIN;  //largest=-infinity


//     for (int i=0;i<size;i++){
//         smallest=min(nums[i],smallest);
//         largest=max(nums[i],largest);
//     }
//     cout<<"max="<<largest<<endl;
//     cout<<"min="<<smallest<<endl;

//     //finding index of max and min
//     for(int i=0;i<size;i++){
//         if(nums[i]==largest){
//             cout<<"max at index "<<i<<endl;
//         }
//         else if(nums[i]==smallest){
//             cout<<"min at index "<<i<<endl;
//         }
//     }
//     return 0;
// }

//linear search
// int linear_search(int arr[],int sz,int target){
//     for (int i=0;i<sz;i++){
//         if(arr[i]==target){
//             return i;
//         }
//     }
//     return -1;
// }

// int main(){
//     int nums[]={2,3,4,5,6,7,8};
//     int sz=7;
//     int target =6;
//     cout<<linear_search(nums,7,target)<<endl;
//     return 0;
// }

//wap to reverse  an array using swap function
void reverse_arr(int arr[],int size){
    int start=0,end=size-1;
    if(size%2==0){
        while(start<end){
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
    }
    else{
        while(start!=end){
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

// int main(){
//     int arr[]={1,2,3,4,5,6,7};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     reverse_arr(arr,size);
//     return 0;
// }

//WAF to calculate sum and product of all the  numbers in an array
void sum_product(int arr[],int size){
    int sum=0,product=1;
    for(int i=0;i<size;i++){
        sum+=arr[i];
        product*=arr[i];
    }
    cout<<"sum="<<sum<<"\nproduct="<<product<<"\n";

}
int main(){
    int arr[5];
    cout<<"enter numbers:\n";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    sum_product(arr,5);
    return 0;
}





