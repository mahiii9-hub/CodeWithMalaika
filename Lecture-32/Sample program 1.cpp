#include <iostream>
using namespace std;

class Date {
private:
    int day, month, year;
    static const int daysInMonth[];

public:
    Date(int d = 1, int m = 1, int y = 1900) {
        day = d; month = m; year = y;
    }

    // Pre-increment operator (++date)
    Date operator ++ () {
        if (day == 31 && month == 12) { // Year end
            day = 1; month = 1; year++;
        } else if (day == 31) { // Simple month end (simplified logic)
            day = 1; month++;
        } else {
            day++;
        }
        return *this;
    }

    // Plus operator (date + n)
    Date operator + (int n) {
        for (int i = 0; i < n; i++) {
            ++(*this); 
        }
        return *this;
    }

    void display() {
        cout << "Date: " << day << "-" << month << "-" << year << endl;
    }
};

const int Date::daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main() {
    Date d1(30, 12, 2023);
    cout << "Original "; d1.display();
    
    ++d1; // 31-12-2023
    cout << "After ++ "; d1.display();
    
    d1 = d1 + 2; // 2-1-2024
    cout << "After +2 "; d1.display();
    
    return 0;
}
