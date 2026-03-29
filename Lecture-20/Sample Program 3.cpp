#include <iostream>
using namespace std;

struct student {
    char name[30];
    char course[15];
    int age;
    float gpa;
};

int main() {
    const int totalStudents = 3; // Reduced for quick testing
    student students[totalStudents];
    float totalGPA = 0;
    int topperIndex = 0;

    // Loop to take input from the user
    for(int i = 0; i < totalStudents; i++) {
        cout << "\n--- Enter details for Student " << i+1 << " ---" << endl;
        cout << "Name: ";
        cin >> students[i].name;
        cout << "GPA: ";
        cin >> students[i].gpa;

        totalGPA += students[i].gpa;

        // Logic to track the student with the highest GPA
        if(students[i].gpa > students[topperIndex].gpa) {
            topperIndex = i;
        }
    }

    // Calculating and displaying the average
    cout << "\nAverage GPA of the class: " << totalGPA / totalStudents << endl;
    cout << "Top Student: " << students[topperIndex].name << " with GPA: " << students[topperIndex].gpa << endl;

    return 0;
}
