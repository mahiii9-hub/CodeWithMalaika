#include <iostream>
using namespace std;

struct student {
    char name[64];
    int age;
};

int main() {
    student s1 = {"Usman Khan", 21};
    student *sptr; // Declaring a pointer to the structure
    
    sptr = &s1; // Assigning the address of s1 to the pointer

    cout << "Accessing data using pointer operators:" << endl;
    
    // Method 1: Using the de-reference and dot operator
    cout << "Name (* operator): " << (*sptr).name << endl;
    
    // Method 2: Using the arrow operator (Standard way)
    cout << "Name (-> operator): " << sptr->name << endl;
    cout << "Age: " << sptr->age << endl;

    return 0;
}
