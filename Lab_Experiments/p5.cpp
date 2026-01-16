#include <iostream> 
#include <iomanip> 
using namespace std; 
 
// ---------- Function Overloading ---------- 
int add(int a, int b) { 
    return a + b; // integer-based amounts 
} 
 
double add(double a, double b) { 
    return a + b; // floating-point amounts (e.g., interest + principal) 
} 
 
// ---------- Transaction Class (Unary - Overloading) ---------- 
class Transaction { 
private: 
    double amount; // positive = credit, negative = debit 
 
public: 
    explicit Transaction(double amt) : amount(amt) {} 
 
    // Unary minus operator: quick reversal (credit <-> debit) 
    Transaction operator-() const { 
        return Transaction(-amount); 
    } 
 
    double value() const { return amount; } 
 
    void print(const string& label = "Transaction") const { 
        cout << label << " : $" << fixed << setprecision(2) << 
amount << '\n'; 
    } 
}; 
 
int main() { 
    cout << "=== Banking Operations: Overloading Demo ===\n\n"; 
 
    // a) Function overloading (int + int) 
    int cash1 = 500, cash2 = 200; 
    int cashTotal = add(cash1, cash2); 
    cout << "Integer Addition -> " 
         << "$" << cash1 << " + $" << cash2 
         << " = $" << cashTotal << "\n"; 
 
    // a) Function overloading (double + double) 
    double f1 = 1000.75, f2 = 499.25; 
    double fTotal = add(f1, f2); 
    cout << "Floating Addition -> " 
         << "$" << fixed << setprecision(2) << f1 
         << " + $" << f2 
         << " = $" << fTotal << "\n\n"; 
 
    // b) Operator overloading (unary minus for quick reversal) 
    Transaction credit(1250.00);   // +1250 credit 
    credit.print("Original (Credit)"); 
 
    Transaction reversed = -credit; // now becomes -1250 (debit) 
    reversed.print("Reversed (Debit)"); 
 
    return 0; 
}