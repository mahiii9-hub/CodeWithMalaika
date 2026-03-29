#include <iostream>
#include <fstream>
using namespace std;

struct student {
    char name[30];
    int age;
    float gpa;
};

int main() {
    student s1 = {"mahii", 19, 2.5};

    // Writing data to a file
    ofstream outFile("student_record.txt");
    if(outFile.is_open()) {
        outFile << s1.name << endl << s1.age << endl << s1.gpa << endl;
        outFile.close();
        cout << "Data saved to file successfully." << endl;
    }

    // Reading data back from the file
    student s2;
    ifstream inFile("student_record.txt");
    if(inFile.is_open()) {
        inFile >> s2.name >> s2.age >> s2.gpa;
        cout << "\nData read from file:" << endl;
        cout << "Name: " << s2.name << ", Age: " << s2.age << ", GPA: " << s2.gpa << endl;
        inFile.close();
    }

    return 0;
}
