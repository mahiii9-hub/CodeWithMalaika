#include <iostream>
using namespace std;

//  Takes an array and its size
void getvalues(int [], int);

int main() {
    int num[10]; 
    
    // Passing the array 'num' to the function
    getvalues(num, 10); 
    
    cout << "Values in the array after function call:" << endl;
    for(int i = 0; i < 10; i++) {
        cout << "Index [" << i << "] = " << num[i] << endl;
    }
    
    return 0;
}

// Function that populates the original array
void getvalues(int array[], int size) {
    for(int i = 0; i < size; i++) {
        // Populating with values (10, 20, 30...)
        array[i] = (i + 1) * 10; 
    }
}
