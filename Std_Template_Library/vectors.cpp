#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.emplace_back(6);

    vec.pop_back();
    //size and capacity
    cout<<"size="<<vec.size()<<" & capacity="<<vec.capacity()<<endl;

    //accessing elements
    cout<<"element at index 2="<<vec[2]<<endl;

    //front() & back()
    cout<<"front:"<<vec.front()<<endl;
    cout<<"back:"<<vec.back()<<endl;

    //erase(start,end) function
    vec.erase(vec.begin()+2 , vec.begin()+3);

    //insert(index,value) function
    vec.insert(vec.begin()+2,10);

    //clear()
    vec.clear();

    for(int val:vec){
        cout<<val<<" ";
    }
    cout<<endl;

    //empty() funcion
    cout<<"is empty:"<<vec.empty()<<endl;
    
    cout<<"size="<<vec.size()<<" & capacity="<<vec.capacity()<<endl;

    return 0;

}