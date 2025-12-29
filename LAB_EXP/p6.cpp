
#include <iostream> 
#include <iomanip> 
using namespace std; 
 
// Unit 1: Addition provider 
class Adder { 
public: 
    Adder() { cout << "[Adder] Ready\n"; } 
    double add(double x, double y) const { return x + y; } 
}; 
 
// Unit 2: Subtraction provider 
class Subtractor { 
public: 
    Subtractor() { cout << "[Subtractor] Ready\n"; } 
    double sub(double x, double y) const { return x - y; } 
}; 
 
// Full calculator: combines both via multiple inheritance 
class Calculator : public Adder, public Subtractor { 
private: 
    double a, b; 
 
public: 
    Calculator(double x, double y) : a(x), b(y) { 
        cout << "[Calculator] Created with a=" << a << ", b=" << b << 
"\n"; 
    } 
 
    void perform() const { 
        cout << fixed << setprecision(2); 
        double s = add(a, b);   // from Adder 
        double d = sub(a, b);   // from Subtractor 
 
        cout << "\n--- Results ---\n"; 
        cout << "a + b = " << s << "\n"; 
        cout << "a - b = " << d << "\n"; 
    } 
}; 
 
int main() { 
    cout << "=== Modular Calculator (Multiple Inheritance) ===\n\n"; 
 
    double x = 12.5, y = 7.25;   // sample values; replace with user input if desired 
    // If you want input, uncomment below: 
    // cout << "Enter two numbers: "; 
    // cin >> x >> y; 
 
    Calculator calc(x, y); 
    calc.perform(); 
 
    return 0; 
}