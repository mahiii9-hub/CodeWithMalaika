#include <iostream>
using namespace std;

// Defining the Date class
class Date {
public:
    // Public interface of the class
    void display();          // To display the date on the screen
    void setDay(int i);      // Setter for day
    void setMonth(int i);    // Setter for month
    void setYear(int i);     // Setter for year

private:
    // Hidden part of the class (Encapsulation)
    int day, month, year;
};

// Defining the display function using the scope resolution operator (::)
void Date::display() {
    cout << "The date is " << day << "-" << month << "-" << year << endl;
}

// Setter methods to assign values to private data members
void Date::setDay(int i)   { day = i; }
void Date::setMonth(int i) { month = i; }
void Date::setYear(int i)  { year = i; }

int main() {
    Date date1, date2; // Creating objects of the Date class

    // Setting values for the first object
    date1.setDay(1);
    date1.setMonth(1);
    date1.setYear(2000);
    date1.display();

    // Setting values for the second object
    date2.setDay(10);
    date2.setMonth(12);
    date2.setYear(2002);
    date2.display();

    return 0;
}
