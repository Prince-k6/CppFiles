//open ended experiment 1
// Create three classes Person, Professor and Student. The class Person should have data members name and age.
// The classes Professor and Student should inherit from the class Person.

// the class Professor should have two integer members: publications and cur_id. 
// There will be two member functions: getdata and putdata. 
// The function getdata should get the input from the user: the name, age and publications of the professor. 
// The function putdata should print the name, age, publications and the cur_id of the professor.

// The class Student should have two data members: marks, which is an array of size 6 and cur_id. 
// It has two member functions: getdata and putdata. 
// The function getdata should get the input from the user: the name, age, and the marks of the student in  6 subjects. 
// The function putdata should print the name, age, sum of the marks and the cur_id of the student.

// For each object being created of the Professor or the Student class, sequential id's should be assigned to them starting from 1
// Solve this problem using virtual functions, constructors and static variables. You can create more data members if you want.

#include<iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    virtual void getdata() = 0;
    virtual void putdata() = 0;
    virtual ~Person() {}
};

class Professor : public Person {
private:
    int publications;
    int cur_id;
    static int id_counter;

public:
    Professor() {
        cur_id = ++id_counter;
    }

    void getdata() override {
        cout<<"enter name:"; cin>>name;
        cout<<"enter age:"; cin>>age;
        cout<<"enter publications:";cin>> publications;
    }

    void putdata() override {
            cout<<"Name: "<< name << ", age: " << age << ", publications: " << publications<< ", cur_id: " << cur_id << endl;

    }
};
int Professor::id_counter = 0;

class Student : public Person {
private:
    int marks[6];
    int cur_id;
    static int id_counter;

public:
    Student() {
        cur_id = ++id_counter;
    }

    void getdata() override {
        cout<<"enter name :"; cin>>name;
        cout<<"enter age  :"; cin>>age;
        cout<<"enter marks:";
        for (int i = 0; i < 6; i++) {
            cin >> marks[i];
        }
    }

    void putdata() override {
        int sum = 0;
        for (int i = 0; i < 6; i++) {
            sum += marks[i];
        }
        cout<<"Name: "<< name << ", age: " << age << ", sum: " << sum << ", cur_id: " << cur_id << endl;
    }
};
int Student::id_counter = 0;

int main() {
    int n;
    cout<<"enter total no. of persons:";
    cin >> n;

    Person* persons[n];      //array of objects

    for (int i = 0; i < n; i++) {
        int type;
        cout<<"\nenter 1 for professor, otherwise-student :";
        cin >> type;

        if (type == 1) {
            cout<<"--Enter professor details--\n";
            persons[i] = new Professor();
        } else {
            cout<<"--Enter student details--\n";
            persons[i] = new Student(); 
        }

        persons[i]->getdata();
    }

    //for display
    cout<<"\n--Displaying the data--\n";
    for (int i = 0; i < n; i++) {
        persons[i]->putdata();
    }

    return 0;
}