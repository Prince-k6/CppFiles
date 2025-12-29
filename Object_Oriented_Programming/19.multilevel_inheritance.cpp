//Multilevel inheritance : when a class is derived from a derived class

/*
Note:-
      if we are inheriting B from A and C from B [A-->B-->C] then
      1.A is the base clas for B and B is the base class for C
      2.A-->B-->C is called the inheritance path
*/
#include<iostream>
using namespace std;

//base class
class student{
private:
   int rollno;
public:
   void set_rollno(int n){
      rollno=n;
   }
   void get_rollno(){
      cout<<"Roll number: "<<rollno<<endl;
   }
};

//derived class1
class Exam : public student{
protected:
   float maths;
   float phy;
public:
   void set_marks(float , float );
   void get_marks();
};
void Exam::set_marks(float m1, float m2){       //using resolution to define the function
   maths=m1;
   phy=m2;
}
void Exam::get_marks(){
   cout<<"maths marks: "<<maths<<endl;
   cout<<"physics marks: "<<phy<<endl;
}

// derived class2
class Result : public Exam{
   float percentage;
public:
   void display(){
      get_rollno();
      get_marks();
      percentage=(maths+phy)/2;
      cout<<"your percentage is "<<percentage<<endl;  
   }
};

int main(){
   Result Rishika;
   Rishika.set_rollno(29);
   Rishika.set_marks(99,98);
   Rishika.display();

   return 0; 
}
