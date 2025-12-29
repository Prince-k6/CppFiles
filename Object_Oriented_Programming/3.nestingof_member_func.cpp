//Nesting of a member function
//one member function calls another member function within the same class directly by name, without needing an object


//WAP using class that checks if a number is binary and if it is binary the find its ones compliment or else print incorrect binary sequence

#include<iostream>
#include<string>
using namespace std;
class binary{
private:
    string s;
public:
    void read(void);           //reads a number
    void chk_bin(void);         //checks if the number is binary
    void ones_compliment(void);   //finds the ones complement of the binary number

};
void binary :: read(){             //using scope resolution to define the function declared within the class
    cout<<"enter a binary number:";
    cin>>s;
}
void binary :: chk_bin(){
    for(int i=0;i<s.length();i++){
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"incorrect binary sequence\n";
            exit(0);
        }
    }
}
void binary :: ones_compliment(){
    chk_bin();                    //nesting of member function:calling a funcction within another function
    for(int i=0;i<s.length();i++){
        if(s.at(i)=='0'){
            s.at(i)='1';
        }
        else if(s.at(i)=='1'){
            s.at(i)='0';
        }
    }
    cout<<"ones compliment="<<s<<endl;
}
int main(){
    binary b;
    b.read();
    // b.chk_bin();
    b.ones_compliment();

    return 0;
}