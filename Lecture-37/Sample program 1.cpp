#include <iostream>
using namespace std;

class Date {
private:
    int month, day, year;

public:
    Date() {
        cout << "\nParameterless constructor called ...";
        month = day = year = 0;
    }

    friend ostream& operator<<(ostream& os, const Date& d);
    friend istream& operator>>(istream& is, Date& d);
};

ostream& operator<<(ostream& os, const Date& d) {
    os << d.day << "-" << d.month << "-" << d.year;
    return os;
}

istream& operator>>(istream& is, Date& d) {
    cout << "\nEnter day: ";   is >> d.day;
    cout << "Enter month: "; is >> d.month;
    cout << "Enter year: ";  is >> d.year;
    return is;
}

int main() {
    Date date1, date2;
    cout << "\n\nEnter two dates:";
    cin >> date1 >> date2;
    cout << "\nDate 1: " << date1 << "\nDate 2: " << date2 << endl;
    return 0;
}
