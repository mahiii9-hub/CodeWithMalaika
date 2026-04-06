#include <iostream>
using namespace std;

class A {
public:
    A() { cout << "\nA Constructor ..."; }
    ~A() { cout << "\nA Destructor ..."; }
};

class B {
public:
    B() { cout << "\nB Constructor ..."; }
    ~B() { cout << "\nB Destructor ..."; }
private:
    A a; // Class A ka object B ke andar
};

int main() {
    B b;
    return 0;
}
