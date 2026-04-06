#include <iostream>
#include <cstring>
using namespace std;

class String {
private:
    char str[30]; // Array to store string

public:
    // Constructor
    String() {
        strcpy(str, "");
    }

    void getString() {
        cout << "Enter the String: ";
        cin >> str;
    }

    void displayString() {
        cout << "The String is: " << str << endl;
    }

    // Declaration of overloaded + operator
    String operator + (const String &s);
};

// Definition of overloaded + operator
String String::operator + (const String &s) {
    String temp;
    strcpy(temp.str, str);      // Copy first string to temp
    strcat(temp.str, s.str);    // Append second string to temp
    return temp;
}

int main() {
    String string1, string2;

    string1.getString();
    string2.getString();

    // Using overloaded + for concatenation
    String hold = string1 + string2;

    hold.displayString();

    return 0;
}
