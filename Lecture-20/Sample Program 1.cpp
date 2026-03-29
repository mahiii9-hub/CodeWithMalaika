#include <iostream>
using namespace std;

// Defining the student structure
struct student {
    char name[64];
    char course[128];
    int age;
    int year;
};

int main() {
    // Initializing the structure with sample data
    student s1 = {"Ali Hamza", "CS201 - Intro to Programming", 22, 2026};

    cout << "Displaying Student Information:" << endl;
    // Accessing members using the dot (.) operator
    cout << "Name: " << s1.name << endl;
    cout << "Course: " << s1.course << endl;
    cout << "Age: " << s1.age << endl;
    cout << "Year: " << s1.year << endl;

    // Displaying the memory size of the structure (Page 3 concept)
    cout << "\nMemory size of s1: " << sizeof(s1) << " bytes" << endl;

    return 0;
}
