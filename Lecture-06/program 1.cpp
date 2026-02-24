#include <iostream>
using namespace std;

int main() {
    
    int number = 1; 
    int sum = 0;

   
    while (number <= 1000) {
       
        sum = sum + number;

        
        number = number + 1; 
    }

    // After the while construct, we can display the result
    cout << "The total sum is: " << sum << endl;

    return 0;
}
