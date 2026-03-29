#include <iostream>
#include <fstream>   // For File I/O
#include <string>

using namespace std;


// Function Prototype (Example of Top-Down Methodology)
void displayMessage();

int main() {

    // --- Variables and Data Types ---
    int age = 22;           // Integer variable
    float gpa = 3.5;        // Floating point variable
    char grade = 'A';       // Character variable

    // --- Decisions (If/Else) ---
    if (age >= 18) {
        cout << "Eligible to vote." << endl;
    }

    // --- Loops (For Loop example) ---
    cout << "Counting to 3: ";
    for (int i = 1; i <= 3; i++) {
        cout << i << " ";
    }
    cout << endl;

    // --- Functions (Calling) ---
    displayMessage();

    // --- Pointers ---
    int* ptr = &age; // ptr stores the address of 'age'

    // --- File I/O (Basic Writing) ---
    ofstream myFile("test.txt");
    if (myFile.is_open()) {
        myFile << "Writing structure data to file.\n";
        myFile.close();
    }

    return 0;
}

// Function Definition
void displayMessage() {
    cout << "Function called successfully!" << endl;
}
