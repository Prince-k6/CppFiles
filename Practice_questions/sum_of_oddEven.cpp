#include <iostream>
using namespace std;

int main() {
    int start, end, sumEven = 0, sumOdd = 0;
    cout << "Enter start and end of range"<< endl;
    cout << "start:";
    cin >> start; 
    cout << "end:";
    cin >> end;
    for (int i = start; i <= end; i++) {
        if (i % 2 == 0) sumEven += i;
        else sumOdd += i;
    }
    cout << "Sum of even numbers: " << sumEven << endl;
    cout << "Sum of odd numbers: " << sumOdd << endl;
    return 0;
}