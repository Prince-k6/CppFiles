//Destructor : Destructor is an instance member function that is invoked automatically whenever an object is going to be destroyed. 
//Meaning, a destructor is the last function that is going to be called before an object is destroyed.

//destructor follow FILO/LIFO principle 
//i.e object which is created at first will be destroyed at last

//Destructor never takes an argument nor does it return any value
#include<iostream>
using namespace std;


class num{
private:
    static int count;      //default initialsed with zero
public:
    num(){
        count++;
        cout<<"when constructor is called for object number "<<count<<endl;
    }
    ~num(){
        cout<<"when destructor is called for object number "<<count<<endl;
        count--;
    }
};
int num :: count =0;  //accessing using scope resolution operator


int main(){
    cout<<"inside main function"<<endl;
    cout<<"creating first object n1\n";
    num n1;
    //creating a block of code
    {
        cout<<"Entering this block\n";
        cout<<"creating two more object\n";
        num n2,n3;
        cout<<"Exiting tis block\n";
    }
    cout<<"back to main()\n";
    // num n1;
    // num n2;
    // num n3;

    return 0;
}