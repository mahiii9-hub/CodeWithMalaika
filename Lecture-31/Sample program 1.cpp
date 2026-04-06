#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    // Parameterless Constructor
    Complex() {
        real = 0;
        imag = 0;
        cout << "Parameterless Constructor called..." << endl;
    }

    // Parameterized Constructor
    Complex(double r, double i) {
        real = r;
        imag = i;
        cout << "Parameterized Constructor called..." << endl;
    }

    // Setters and Getters
    void setReal(double r) { real = r; }
    double getReal() { return real; }
    void setImag(double i) { imag = i; }
    double getImag() { return imag; }

    void display() {
        cout << "Displaying parts of complex number..." << endl;
        cout << "Real Part: " << real << endl;
        cout << "Imaginary Part: " << imag << endl;
    }

    // Declaration of overloaded + operator
    Complex operator + (const Complex &c2);
};

// Definition of overloaded + operator
Complex Complex::operator + (const Complex &c2) {
    cout << "Operator + called..." << endl;
    Complex temp;
    temp.real = real + c2.real;
    temp.imag = imag + c2.imag;
    return temp;
}

int main() {
    Complex c1(1, 2);  // Using parameterized constructor
    Complex c2(2, 3);
    
    Complex result;    // Using parameterless constructor
    result = c1 + c2;  // Calls the overloaded + operator
    
    result.display();

    return 0;
}
