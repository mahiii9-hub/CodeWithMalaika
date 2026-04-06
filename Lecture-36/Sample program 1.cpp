#include <iostream>
using namespace std;

int main() {
    const int SIZE = 80;
    char buffer[SIZE];

    cout << "\nEnter a sentence: " << endl;
    
    // Reads exactly 20 characters (or until Enter is pressed)
    cin.read(buffer, 20);

    cout << "The sentence entered was: " << endl;
    
    // cin.gcount() tells how many characters were actually read
    cout.write(buffer, cin.gcount());
    
    cout << endl;
    return 0;
}
