#include <iostream>
#include <cstring>
using namespace std;

class Date {
    int month, day, year;
public:
    Date() {
        cout << "\nDate -- Default constructor called ...";
        month = day = year = 0;
    }
    Date(int m, int d, int y) {
        month = m; day = d; year = y;
        cout << "\nDate -- Constructor with month=" << month << ", day=" << day << ", year=" << year << " called ...";
    }
    ~Date() { cout << "\nDate -- Destructor called ..."; }
};

class PersonInfo {
    char name[30];
    char address[60];
    Date birthday;
    Date drvLicenseDate;
public:
    PersonInfo(const char *nm, const char *addr, int m, int d, int y, int lm, int ld, int ly)
        : drvLicenseDate(lm, ld, ly), birthday(m, d, y) // Initializer list
    {
        cout << "\nPersonInfo -- Constructor called ...";
        strncpy(name, nm, 29);
        strncpy(address, addr, 59);
    }
    ~PersonInfo() { cout << "\nPersonInfo -- Destructor called ..."; }
};

int main() {
    PersonInfo pi("Abbas", "12-Y, DHS, Lahore", 12, 12, 1972, 12, 10, 1992);
    return 0;
}
