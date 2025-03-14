#include <iostream>
#include <string>
using namespace std;

// Class BCA
class BCA {
public:
    // Non-Parameterized Constructor
    BCA() { 
        fess = 50000;  // 
        cout << "Fess: " << fess << endl;  
    }

    // Data members
    string name;
    string branch;
    string caste;
    double fess;

    // Function to change fees
    void changefess(double changefess) {
        fess = changefess;
}
};

int main() {
    BCA b1; // Constructor automatically call hoga

    // Assigning values
    b1.name = "Avni Singh";
    b1.branch = "No Branch";
    b1.caste = "General";
// fess ko update krege
    b1.changefess(70000);
    // Printing values
    cout << "Name: " << b1.name << endl;
    cout << "Branch: " << b1.branch << endl;
    cout << "Caste: " << b1.caste << endl;
    cout << "updated fess: " << b1.fess << endl;

    return 0;
}
