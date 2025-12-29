#include<iostream>
using namespace std;

#include<vector>

// int main(){
//     vector<int>vec={1,2,3,4};
//     cout<<vec[1]<<endl;
//     return 0;
// }                   //for executing this you need to write ( g++ -std=c++11  vectors.cpp )

// int main(){
//     vector<int>vec(5,1);      // 5 elements each equal to 1
//     for(int i:vec){
//         cout<<i<<endl;
//     }
//     return 0;
// }

// int main(){
//     vector<char>vec={'a','b','c','d','e','f'};      //storing charactes

//     cout<<"size="<<vec.size()<<endl;     // .size gives the size of vector


//     for(char val:vec){           //accessing elements using for loop
//         cout<<val<<endl;
//     }
//     return 0;
// }

int main(){
    vector<int>vec;

    cout<<"size="<<vec.size()<<endl;      //gives the size of vector

    vec.push_back(12);
    vec.push_back(23);     //adds the element to the vector
    vec.push_back(34);

    for(int val:vec){
        cout<<val<<endl;
    }
    cout<<"size="<<vec.size()<<"\n";   //size=3
    vec.pop_back();        //removes the last element
    for(int val:vec){
        cout<<val<<endl;
    }
    cout<<"size="<<vec.size()<<"\n";   //size=2
    cout<<"\n";
    cout<<vec.front()<<"\n";     //give the first value
    cout<<vec.back()<<endl;       // gives the last value
 
    cout<<vec.at(1)<<"\n";      //gives the value at given index
}






