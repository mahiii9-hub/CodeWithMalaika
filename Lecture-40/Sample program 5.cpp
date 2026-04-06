#include <iostream>
using namespace std;

class Surround {
public:
    class FirstWithin {
    public:
        FirstWithin() { cout << "\nFirstWithin - default constructor"; }
        ~FirstWithin() { cout << "\nFirstWithin - destructor"; }
        int getVar() const { return variable; }
    private:
        int variable = 10;
    };
    
    FirstWithin myFirstWithin;

private:
    class SecondWithin {
    public:
        SecondWithin() { cout << "\nSecondWithin - default constructor"; }
        ~SecondWithin() { cout << "\nSecondWithin - destructor"; }
    };
};

int main() {
    Surround s;
    cout << "\nVariable from nested class: " << s.myFirstWithin.getVar() << endl;
    return 0;
}
