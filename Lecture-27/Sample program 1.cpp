#include <iostream>
#include <cstdlib>

using namespace std;

// Defining the Date class
class Date {
    // Interface of the class
    public:
        void display();          // To display the date on the screen
        void setDay(int i);      // Setting the day
        void setMonth(int i);    // Setting the month
        void setYear(int i);     // Setting the year
        int getDay();            // Getting the value of day
        int getMonth();          // Getting the value of month
        int getYear();           // Getting the value of year

        // Constructors of the class
        Date();                  // Default constructor
        Date(int, int);          // Constructor with two arguments
        Date(int, int, int);     // Constructor with three arguments
        
        // Destructor of the class
        ~Date();

    // Hidden part of the class
    private:
        int day, month, year;
};

// Defining the constructors
// Default constructor: setting the date to a default date
Date::Date() {
    day = 1;
    month = 1;
    year = 1900;
    cout << "The default constructor is called" << endl;
}

// Constructor with two arguments
Date::Date(int theDay, int theMonth) {
    day = theDay;
    month = theMonth;
    year = 2002;
    cout << "The constructor with two arguments is called" << endl;
}

// Constructor with three arguments
Date::Date(int theDay, int theMonth, int theYear) {
    day = theDay;
    month = theMonth;
    year = theYear;
    cout << "The constructor with three arguments is called" << endl;
}

// Destructor
Date::~Date() {
    cout << "The object has destroyed" << endl;
}

// The display function of the class
void Date::display() {
    cout << "The date is " << getDay() << "-" << getMonth() << "-" << getYear() << endl;
}

// Setting the value of the day
void Date::setDay(int i) {
    day = i;
}

// Setting the value of the month
void Date::setMonth(int i) {
    month = i;
}

// Setting the value of the year
void Date::setYear(int i) {
    year = i;
}

// Getting the value of the day
int Date::getDay() {
    return day;
}

// Getting the value of the month
int Date::getMonth() {
    return month;
}

// Getting the value of the year
int Date::getYear() {
    return year;
}

// Main program
int main() {
    // Taking objects of Date class using different constructors
    Date date1, date2(12, 12), date3(25, 12, 2002);

    // Displaying the dates on the screen
    date1.display();
    date2.display();
    date3.display();

    return 0;
}
