#include <iostream>
#include <cstdlib> 
#include <cstring> 

using namespace std;

int main() {
    int numStuds, totalAge, *iptr, *sptr;
    
    cout << "How many students are in the class? ";
    cin >> numStuds;

    // Allocate memory dynamically for 'numStuds' integers
    iptr = (int *) malloc(numStuds * sizeof(int));

    // Check if memory allocation was successful
    if (iptr == NULL) {
        cout << "Unable to allocate space for " << numStuds << " students" << endl;
        return 1; // Exit with error
    }

    sptr = iptr; // Use sptr to traverse the memory while keeping iptr at the start
    totalAge = 0;

    // Get the ages of students
    for (int i = 1; i <= numStuds; i++) {
        cout << "Enter the age of student " << i << ": ";
        cin >> *sptr;       // Store value in allocated memory
        totalAge += *sptr;  // Add value to total
        sptr++;             // Move pointer to the next integer space
    }

    // Calculate and display average
    // Added a float cast to ensure decimal precision in division
    cout << "The average age of the class is " << (float)totalAge / numStuds << endl;

    // Free the allocated memory to prevent memory leaks
    free(iptr);
    iptr = NULL;
    sptr = NULL;

    return 0;
}
