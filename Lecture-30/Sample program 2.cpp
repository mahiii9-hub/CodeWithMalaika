#include <iostream>
using namespace std;

int myNum = 0;  // Global variable

// Function returning a reference to an integer
int& num() {
    return myNum;
}

int main() {
    int i;
    
    i = num(); // i gets the value of myNum
    cout << "The value of i = " << i << endl;
    cout << "The value of myNum = " << myNum << endl;

    // Setting myNum to 200 using the function call on LHS
    num() = 200; 
    
    cout << "After assignment the value of myNum = " << myNum << endl;

    return 0;
}
