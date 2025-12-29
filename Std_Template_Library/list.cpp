//list: doubly linked list

#include<iostream>
#include<vector>
#include<list>
using namespace std;
int main(){
    //creating a list
    list<int> l;
    list<int> l2={1,2,3,4,5};
    //push_back() and emplace_back() function
    l.push_back(1);  //1
    l.emplace_back(2);  //1 2
    //push_front() function
    l.push_front(3); //3 1 2
    l.push_front(5);  //5 3 1 2

    //pop_back() and pop_front() function
    l.pop_back();  //5 3 1
    l.pop_front();  //3 1

    for ( int val: l){
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}

// functions like 
//size,erase,clear,begin,end,rbegin,rend,insert,front,back
//are also applicable