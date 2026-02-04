//class :blueprint of an object
//object: real world entities 

#include<iostream>
using namespace std;
#include<string>

class teacher{                        //a class named "teacher" is declared and defined
private:                                          //access modifiers:(public,private protected)
    float salary;

public:
    //properties or attributes 
    string name;
    string dept;
    string subject;

    //methods or member functions
    void change_dept(string newdept){
        dept=newdept;
    }
    void set_salary(double s){         //setter member function
        salary=s;
    }
    double get_salary(){               //getter member function
        return salary;
    }
};                                 //class defination should end with a semicolon

int main(){
    teacher t1;
    t1.name="Prince";
    t1.subject="C++";
    t1.dept="CSE";
    //t1.salary=25000;   //salary cannot be accessed within the main function as it is private member of the class (will give error)
    cout<<"name:"<<t1.name<<endl;
    cout<<"dept:"<<t1.dept<<endl;
    cout<<"subject:"<<t1.subject<<endl;
    //cout<<"salary:"<<t1.salary<<endl; //salary cannot be accesed as it is a private member(will give error)
    t1.set_salary(25000);
    cout<<"salary:"<<t1.get_salary()<<endl;

    return 0; 
} 


//WAP to show the concept of classes and objects

// #include <iostream>
// #include <string>
// using namespace std;

// // Define a class called 'Car'
// class Car {
// public:
//     // Attributes (member variables)
//     string brand;
//     string model;
//     int year;

//     // Method (member function) to display car details
//     void displayDetails() {
//         cout << "Brand: " << brand << endl;
//         cout << "Model: " << model << endl;
//         cout << "Year: " << year << endl;
//     }
// };

// int main() {
//     // Create objects of the 'Car' class
//     Car car1; // Object 1
//     Car car2; // Object 2

//     // Assign values to the attributes of the objects
//     car1.brand = "Toyota";
//     car1.model = "Corolla";
//     car1.year = 2022;

//     car2.brand = "Honda";
//     car2.model = "Civic";
//     car2.year = 2024;

//     // Call the method for each object to display their details
//     cout << "Details of Car 1:" << endl;
//     car1.displayDetails();
//     cout << std::endl;

//     cout << "Details of Car 2:" << endl;
//     car2.displayDetails();

//     return 0;
// }
