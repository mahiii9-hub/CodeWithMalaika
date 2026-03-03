#include <iostream>
using namespace std;

// Function : takes an array and its size
void getvalues(int [], int);

main()
{
    int num[10], i;
   
    getvalues(num, 10); 
    
    // Display the values of the array to see if they changed
    cout << "\nThe array is populated with values: \n";
    for(i = 0; i < 10; i++) {
        cout << "Value " << i << " is: " << num[i] << endl;
    }
    
    return 0;
}


void getvalues(int array[], int size) {
    for(int i = 0; i < size; i++) {
        // Assigning values (e.g., 10, 20, 30...)
        array[i] = (i + 1) * 10; 
    }
}
