//pointers->special vriables that store address of another variables

#include<iostream>
#include<vector>
using namespace std;

                                          //pointers introduction
// int main(){
//     int a=10;
//     int *ptr=&a;
//     int **pptr=&ptr;   //pointer to pointer 
//     //getting value of "a" using pointer
//     cout<<*ptr<<endl;         //10
//     cout<<*(&a)<<endl;        //10
//     cout<<**pptr<<endl;       //10 
//     cout<<endl;
//     //single dereferencing
//     cout<<&a<<endl;
//     cout<<ptr<<endl;
//     cout<<*pptr<<endl;
//     cout<<endl;
//     //getting address of "ptr" in several ways
//     cout<<&ptr<<endl;
//     cout<<pptr<<endl;
//     cout<<endl;
//     //double derefrencing
//     cout<<**pptr<<endl;  //gives the value of a=0
//     return 0;
// }


                                        //Null pointers
// A pointer that doesn't point to any location ->null pointer
// it canntot be dereferenced

// int main(){
//     int *ptr=NULL;
//     cout<<*ptr<<endl;  //this will give segmentation error
//     return 0;
// }

                                        //array pointers

// int main(){
//     int arr[]={1,2,3,4,5};     //address of arr is same as arr[0]
//     cout<<arr<<endl;  //pointer
//     cout<<&arr[0]<<endl;
//     cout<<*arr<<endl;  // on printing the (value of) *arr we get array's first element i.e 1 here,
//     int a=15;
//     // arr=&a;       //array pointer is a constant pointer we cannot change it
//     return 0;
// }

                                        //pointer arithematic
// int main(){
//     int arr[]={1,2,3,4,5};
//     int a=10;
//     int *ptr=&a;
//     cout<<ptr<<endl;
//     ptr++;
//     cout<<ptr<<endl;  //+4
//     ptr--;
//     cout<<ptr<<endl;  //-4
//                                      //array memory is contiguous
//     cout<<*arr<<endl;  //1
//     cout<<*(arr+1)<<endl; //2
//     cout<<*(arr+2)<<endl; //3 
//     cout<<*(arr+3)<<endl;  //4
//     return 0;
// }

//we cannot add 2 pointers but we can subtract two pointers of same data type
//also we can apply relational operators on pointers
// int main(){
//     int arr[]={1,2,3,4,5};
//     int *ptr1=&arr[3];
//     int *ptr2=&arr[1];    
//     int *ptr3=arr;     //arr itself is a pointer

//     cout<<ptr1-ptr2<<endl;
//     cout<<ptr1-ptr3<<endl;
//     return 0;
// }


