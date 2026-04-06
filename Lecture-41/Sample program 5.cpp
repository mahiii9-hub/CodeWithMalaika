#include <iostream>
using namespace std;

// Template function
template <class T>
T reverse_obj(T x) {
    return (-x); // Requires operator- to be overloaded in class
}

class PhoneCall {
    int lengthOfCall;
    char billCode;
public:
    PhoneCall(int len = 0, char b = 'l') : lengthOfCall(len), billCode(b) {}

    // Overloading unary minus operator
    PhoneCall operator-() {
        billCode = 'c'; // Change code to 'c' for cancelled/reversed
        return (*this);
    }

    void showCall() {
        cout << "The duration of the call is " << lengthOfCall << endl;
        cout << "The code of the call is " << billCode << endl;
    }
};

int main() {
    PhoneCall aCall(10, 'd');
    aCall.showCall();

    // Calling template function with object
    aCall = reverse_obj(aCall);
    aCall.showCall();

    return 0;
}
