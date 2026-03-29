#include <iostream>
using namespace std;

class Date {
public:
    // Function Prototypes
    void display();
    void setDay(int i);
    void setMonth(int i);
    void setYear(int i);
    
    // Getter methods to retrieve values
    int getDay();
    int getMonth();
    int getYear();

    // Constructors
    Date();                         // Default Constructor
    Date(int d, int m, int y=2024); // Constructor with default arguments

private:
    int day, month, year;
};

// Default Constructor: Sets a default date automatically
Date::Date() {
    day = 1;
    month = 1;
    year = 1900;
}

// Parameterized Constructor: Sets date based on provided values
Date::Date(int theDay, int theMonth, int theYear) {
    day = theDay;
    month = theMonth;
    year = theYear;
}

// Getters: Functions that return the value of private members
int Date::getDay()   { return day; }
int Date::getMonth() { return month; }
int Date::getYear()  { return year; }

void Date::display() {
    cout << "The date is " << getDay() << "-" << getMonth() << "-" << getYear() << endl;
}

int main() {
    // Creating objects using different constructors
    Date date1;                     // Calls Default Constructor
    Date date2(1, 1, 2000);          // Calls Parameterized Constructor
    Date date3(10, 12);              // Uses Default Argument for Year

    cout << "Displaying dates using constructors:" << endl;
    date1.display();
    date2.display();
    date3.display();

    return 0;
}
