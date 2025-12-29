#include <iostream> 
#include <iomanip> 
using namespace std; 
 
class CoeffBase { 
protected: 
    double alpha; 
    double beta; 
 
public: 
    // Parameterized constructor for base coefficients 
    CoeffBase(double a, double b) : alpha(a), beta(b) { 
    cout << "[CoeffBase] Constructed with alpha=" << alpha 
             << ", beta=" << beta << '\n'; 
    } 
 
    void showBase() const { 
        cout << "alpha = " << alpha << ", beta = " << beta << '\n'; 
    } 
}; 
 
class CoeffModel : public CoeffBase { 
private: 
    double gamma; 
 
public: 
    // Derived constructor chains to base to initialize alpha & beta, 
    // then initializes gamma. 
    CoeffModel(double a, double b, double g) : CoeffBase(a, b), gamma(g) { 
        cout << "[CoeffModel] Constructed with gamma=" << gamma << '\n'; 
    } 
 
    void showAll() const { 
        cout << fixed << setprecision(2); 
        cout << "\n--- Coefficient Set ---\n"; 
        cout << "alpha = " << alpha << '\n'; 
        cout << "beta  = " << beta  << '\n'; 
        cout << "gamma = " << gamma << '\n'; 
    } 
}; 
 
int main() { 
    cout << "=== Constructor Chaining: Base(alpha,beta) + Derived(gamma) ===\n\n"; 
 
    // Example values (can be replaced with input if needed) 
    double a = 1.25, b = 2.50, g = -0.75; 
 
    // Construction order: CoeffBase first, then CoeffModel 
    CoeffModel model(a, b, g); 
 
    // Display all coefficients 
    model.showAll(); 
 
    return 0; 
} 
 
