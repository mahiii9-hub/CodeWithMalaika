//This program display the ASCII code table
#include <iostream>
using namespace std;

int main() {
    int i; 
    char c;


    for (i = 0; i < 256; i++) 
    {
       
        c = i; 
        cout << i << "\t" << c << "\n";
    }

    return 0;
}
