//open ended experiment
// Kristen is a contender for valedictorian of her high school. 
// She wants to know how many students (if any) have scored higher than her in the 5 exams given during this semester.

// Create a class named student with the following specifications:
// An instance variable named 'scores' to hold a student's 5 exam scores.
// A void input() function that reads 5 integers and saves them to scores.
// An int calculateTotalScore() function that returns the sum of the student's scores.

#include <iostream>
using namespace std;

class Student {
private:
    int scores[5];

public:
    void input() {
        for (int i = 0; i < 5; i++) {
            cin >> scores[i];
        }
    }

    int calculateTotalScore() {
        int total = 0;
        for (int i = 0; i < 5; i++) {
            total += scores[i];
        }
        return total;
    }
};

int main() {
    int n;
    cout<<"enter total no.of students:";
    cin >> n;

    Student students[n];         //array of objects (of type student)

    cout<<"--enter students scores in 5 exams--\n";
    for (int i = 0; i < n; i++) {
        cout<<"student "<<i+1<<" scores: ";
        students[i].input();
    }

    //1'st student will be kristen
    int kristenScore = students[0].calculateTotalScore();
    int count = 0;

    for (int i = 1; i < n; i++) {
        if (students[i].calculateTotalScore() > kristenScore) {
            count++;
        }
    }

    cout <<"total no.of students who scored more than kristen:"<< count<<endl;
    return 0;
}