#include <iostream>
using namespace std;

class Date {
private:
    int day, month, year;

public:
    Date(int d, int m, int y) {
        day = d; month = m; year = y;
    }

    // Greater than operator (date1 > date2)
    bool operator > (Date d) {
        if (year > d.year) return true;
        if (year == d.year && month > d.month) return true;
        if (year == d.year && month == d.month && day > d.day) return true;
        
        return false; // Otherwise false
    }
};

int main() {
    Date d1(15, 5, 2024);
    Date d2(10, 5, 2023);

    if (d1 > d2) {
        cout << "First date is greater than second date." << endl;
    } else {
        cout << "First date is NOT greater." << endl;
    }

    return 0;
}
