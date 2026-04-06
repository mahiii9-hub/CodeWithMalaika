#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

class Fraction {
private:
    long numerator, denominator;
    static long gcd(long first, long second); // Greatest common factor

public:
    // Constructors
    Fraction() {
        numerator = 0;
        denominator = 1;
    }

    Fraction(long num, long den) {
        if (den == 0) den = 1; // Basic error handling
        
        int factor = gcd(abs(num), abs(den));
        numerator = (den < 0 ? -num : num) / factor;
        denominator = abs(den) / factor;
    }

    void display() const {
        cout << numerator << "/" << denominator;
    }

    // Overloaded + operator
    Fraction operator + (const Fraction &second) const {
        long common_den = denominator * second.denominator;
        long num = (numerator * second.denominator) + (second.numerator * denominator);
        return Fraction(num, common_den); // Constructor simplified result dega
    }
};

// Greatest Common Factor logic
long Fraction::gcd(long first, long second) {
    long temp;
    while (second > 0) {
        temp = first % second;
        first = second;
        second = temp;
    }
    return first;
}

int main() {
    Fraction a, b(25, 11), c(2, 3);
    
    a = b + c; // Calls overloaded +
    
    cout << "Result of b + c = ";
    a.display();
    cout << endl;

    return 0;
}
