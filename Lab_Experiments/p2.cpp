//student management system 

#include<iostream>
#include<string>
using namespace std;

class student{
private:
    string name;
    int roll_no;
    int marks[3];
    int total;
public:
    //constructor to initialise students details
    student(string n,int r,int m1,int m2,int m3){
        name=n;
        roll_no=r;
        marks[0]=m1;
        marks[1]=m2;
        marks[2]=m3;
    }
    //method to calculate total marks
    int calculateTotal(){
        int total=0;
        for(int i=0;i<3;i++){
            total+=marks[i];
        }
        return total;
        // cout<<"total marks="<<total<<endl;
    }
    //method to display detials
    void display(){
        cout<<"Name     :"<<name<<endl;
        cout<<"Roll NO. :"<<roll_no<<endl;
        cout<<"marks.   :"<<marks[0]<<" "<<marks[1]<<" "<<marks[2]<<endl;
        cout<<"total marks:"<<calculateTotal()<<endl;
    }
};

int main(){
    string name;
    int roll_no;
    int marks[3];
    cout<<"enter name:";cin>>name;
    cout<<"enter roll no:";cin>>roll_no;
    cout<<"enter mrks:";cin>>marks[0]>>marks[1]>>marks[2];
    student s1(name,roll_no,marks[0],marks[1],marks[2]);
    // s1.calculateTotal();
    s1.display();

    return 0;
}