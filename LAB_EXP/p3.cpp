#include<iostream>
#include<string>
using namespace std;

class Contact {
private:
    string name;
    string phone;
    string email;
public:
    // Parameterized constructor
    Contact(const string& n, const string& p, const string& e) : name(n), phone(p), email(e) {
        cout << "[Constructor] Contact created for: " << name << endl;
    }    
    // Copy constructor (safe duplication of all members)
    Contact(const Contact& other) : name(other.name), phone(other.phone), email(other.email) {
        cout << "[Copy Constructor] Contact copied for: " << name <<endl;
    }
    // Destructor (cleanup / message)
    ~Contact() {
    cout << "[Destructor] Contact for " << name << " is being deleted." << endl;
    }
    // Display method
    void display() const {
        cout << "\n--- Contact ---\n";
        cout << "Name : " << name << "\n";
        cout << "Phone: " << phone << "\n";
        cout << "Email: " << email << "\n";
    }
};
int main() {
    // Original contact
    Contact c1("Kiran Kumar", "9876543210", "kiran@example.com");
    // Copy using copy constructor
    Contact c2 = c1; // invokes copy constructor
    // Show both
    cout << "\nDisplaying Original Contact:";
    c1.display();
    cout << "\nDisplaying Copied Contact:";
    c2.display();
    // Destructors will be called automatically for c2 then c1 (reverse of creation order)
    return 0;
}