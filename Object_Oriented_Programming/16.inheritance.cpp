//Inheritance 
//DRY principle (DONT'T REPEAT YOURSELF)

// Reusability is a very important feature of OOPs
// we can reuse a class and add additional features to it
// reusing classes saves time and money
// Reusing already tested and debugged class will save a lot of effort of developing and debugging the same thing again

// Existing class->Base class
// Inherited class->Derived class

                                //Types of inheritance
// 1.Single Inheritance : A derived class with only one base class

// 2.Multiple inheritance : A deived class with more than one base class

// 3.Hierarchical inheritance : Seveal derived class from a single base class

// 4.Mulitilevel inheritance : Deriving a class from already derived class

// 5.Hybrid inheritance : combination of multiple + multilevel inheritance 

                               //Derived class syntax
/*
class <derived_class_name> : <visibility_mode> <base_class_name>{
    memebers/methods etc...
}
note:-
1.Default visibilty mode is private: means members are derived as private members
2.public visibiltity mode :public members of the base class become public member of the derived class
2.private visibility mode :public members of the class become private members of the derived class
4.private members are never inherited 
*/

/*-------------------------------Inheritance syntax and visibiltiy-------------------------------------------------------------*/
#include<iostream>
#include<string>
using namespace std;

//base class
class Employee{
private:
    // int id; 
    // float salary; 
public:
    int id;
    float salary;
    Employee(int empid,float sal){
        id=empid;
        salary=sal; 
    }
    Employee(){

    }
 
};
//derived class
class Programmer : Employee{
public:
    int languageCode = 9;
    Programmer(int inpid){
        id=inpid;
    }
    void getdata(){
        cout<<id<<endl;
    } 


};

int main(){
    Employee prince(1,300),Rishika(2,5000);
    cout<<prince.id;cout<<prince.salary<<endl;
    cout<<Rishika.id;cout<<Rishika.salary<<endl;

    Programmer skillF(10);
    cout<<skillF.languageCode<<endl;
    skillF.getdata();



    return 0;
}