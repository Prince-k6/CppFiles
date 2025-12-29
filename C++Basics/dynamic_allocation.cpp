
//dynamic allocation of memory 

/*
        dynamic allocation 
new -> allocates memory
delete ->removes the occupied memory
 
*/

#include<iostream>
using namespace std;

// int main(){
//     // Basic Example
//     int a = 4;
//     int *ptr = &a;
//     cout<<"The value of a is "<<*(ptr)<<endl;  
//     return 0;
// }

//dynamically allocated
// int main(){
//     float *p = new float(40.78);
//     cout << "The value at address p is " << *(p) << endl;
//     return 0;
// }

//dynamically allocated arrays
// int main(){
//     int *arr = new int[3];          //new keyword allocated the memory
//     arr[0] = 10;
//     arr[1] = 20;
//     arr[2] = 30;
//     cout << "The value of arr[0] is " << arr[0] << endl;
//     cout << "The value of arr[1] is " << arr[1] << endl;
//     cout << "The value of arr[2] is " << arr[2] << endl;
//     return 0;
// }


//removing the allocated memory 
int main(){
    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;
    delete[] arr;          //delete keyword deallocated the memory 

    //will show garbage values
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;
    return 0;
}