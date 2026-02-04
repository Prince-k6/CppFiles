#include<iostream>
using namespace std;
#include<string>

//encapsulation : wrapping up of data and member function function in a class is called encapsulation, data hiding is apart of encapaulation
    //abstraction: hiding the implemention and only showing the necessary details is called abstraction
//polymorphism: the ability of an object,function or operator to behave differently based on the context is called polymorphism
//inheritance: the mechanism by which a class(derived) acquires the properties of another class(base) is called inheritance
class Teacher{
private:
    float salary;
public:
    string name;
    string dept;
    string subject;

    Teacher(){
        cout<<"constructor created\n";
    }

    void change_dept(string newdept){
        dept=newdept;
    }
    void set_salary(float s){
        salary=s;
    }
    float get_salary(){
        return salary;
    }
    //copy constructor
    Teacher(Teacher &obj){
        cout<<"copy constructor\n";
        this->name=obj.name;
        this->dept=obj.dept;
        this->dept=obj.subject;
        this->salary=obj.salary;
    }
    void display(){
        cout<<"name:"<<name<<endl;
        cout<<"dept:"<<dept<<endl;
        cout<<"subject:"<<subject<<endl;
        cout<<"Salary:"<<salary<<endl;
    }
    ~Teacher(){
        cout<<"object destroyed\n";
    }
};

// int main(){
//     Teacher t1;
//     t1.name="prince";
//     t1.dept="aiml";
//     t1.subject="00PS";
//     t1.set_salary(87);
//     t1.display();
//     cout<<"-----------\n";

//     Teacher t2(t1);
//     t2.display();
//     cout<<"------\n";
//     t2.name="rishh";
//     t2.display();
//     cout<<"--------\n";
//     return 0;
// }

class Student{
private:

public:
    string name;
    float *cgpa;

    Student(string n, float c){
        this->name=n;
        cgpa = new float;
        *cgpa=c;
    }
    //shallow copy
    // Student(Student &obj){
    //     this->name=obj.name;
    //     this->cgpa=obj.cgpa;
    // }
    //deep copy
    Student(Student &obj){
        this->name=obj.name;
        cgpa = new float;
        *cgpa=*obj.cgpa;
    }

    void info(){
        cout<<"Name: "<<name<<endl;
        cout<<"Cgpa: "<<*cgpa<<endl;
    }

};

int main(){
    Student s1("Rishika",10.0);
    s1.info();

    Student s2(s1);
    *(s2.cgpa)=9.2;
    s2.info();
    s1.info();

    return 0;
}
