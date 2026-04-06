#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

// Class definition
class String {
private:
    char *c;
public:
    // Copy function
    void copy(const char *s) {
        if (c != NULL) delete[] c; // Clean up old memory
        c = new char[strlen(s) + 1];
        strcpy(c, s);
    }

    // Getting the length of the string
    int length() const {
        return strlen(c);
    }

    // Default Constructor
    String() {
        c = NULL;
    }

    // Constructor with parameter
    String(const char *s) {
        c = new char[strlen(s) + 1];
        strcpy(c, s);
    }

    // Copy Constructor Declaration
    String(const String &other);

    // Display the string
    void print() {
        if (c != NULL)
            cout << c << endl;
    }

    // Destructor
    ~String() {
        delete[] c;
    }
};

// Definition of Copy Constructor
// This performs a DEEP COPY so each object has its own memory
String::String(const String &other) {
    int len = other.length();
    c = new char[len + 1];
    strcpy(c, other.c);
}

int main() {
    String s1("test1");
    cout << "The string of s1 is : ";
    s1.print();

    // Copy constructor is called here
    String s2(s1); 
    cout << "The string of s2 is : ";
    s2.print();

    // Changing s1 to prove s2 stays the same
    s1.copy("A new string");
    
    cout << "The string of s1 is : ";
    s1.print();
    
    cout << "The string of s2 is : ";
    s2.print(); // s2 has its own previous value because of deep copy

    return 0;
}
