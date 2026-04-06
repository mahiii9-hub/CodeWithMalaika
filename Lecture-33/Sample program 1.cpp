#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class String {
private:
    char *buf;

public:
    // Constructor
    String(const char *s = "") {
        buf = new char[30];
        strcpy(buf, s);
    }

    void display() {
        cout << buf << endl;
    }

    int length() const {
        return strlen(buf);
    }

    // Overloading assignment operator
    void operator = (const String &other) {
        int len;
        len = other.length();
        delete[] buf;            // Purani memory delete karna
        buf = new char[len + 1]; // Nayi memory allocate karna
        strcpy(buf, other.buf);  // Data copy karna
    }
    
    // Destructor (important for pointers)
    ~String() {
        delete[] buf;
    }
};

int main() {
    String myString("here's my string");
    cout << "My string is = ";
    myString.display();

    String yourString("there's your string");
    cout << "Your string is = ";
    yourString.display();

    yourString = myString; // Assignment operator call hoga
    cout << "After assignment, your string is = ";
    yourString.display();

    return 0;
}
