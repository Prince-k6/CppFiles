//virtual base class : when two derived classes(derived from a single base class) are used in a further derived class
//                      an ambiguity arises therefore to resolve that ambiguity we use virtual base class


#include<iostream>
using namespace std;


class student{
protected:
    int roll_no;
public:
    void set_rollno(int x){
        roll_no=x;
    }
    void print_rollno(){
        cout<<"Roll number: "<<roll_no<<endl;
    }
};
class test : virtual public student{
protected:
    float maths, phy;
public:
    void set_marks(float m1, float m2){
        maths=m1;
        phy=m2;
    }
    void print_marks(){
        cout<<"-------Marks card--------"<<endl;
        cout<<"maths: "<<maths<<endl;
        cout<<"physics: "<<phy<<endl;
    }  
};
class sports: virtual public student{
protected:
    float score;
public:
    void set_score(float y){
        score=y;
    }
    void print_score(){
        cout<<"sports score: "<<score<<endl;
    }
};

class Result: public test, public sports{
private:
    float total;
public:
    void display(){
        total=maths+phy+score;
        print_rollno();
        print_marks();
        print_score();
        cout<<"------------------------"<<endl;

        if(score<5){
            cout<<"sports retest\n";
        cout<<"------------------------"<<endl;

        }

        if(total<57){
            cout<<"student failed\n";
        }
        else{
            cout<<"your total score is: "<<total<<endl;
            cout<<"passed and promoted\n";
        }
    }

};
int main(){
    Result rish;
    rish.set_rollno(29);
    rish.set_marks(99,98);
    rish.set_score(9);
    rish.display();


    return 0;
}