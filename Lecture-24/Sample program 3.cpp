#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

// Define a simple structure
struct Employee {
    char name[40];
    int id;
};

int main() {
    Employee *workers;
    int num;

    cout << "How many employees do you want? ";
    cin >> num;

    // Allocate memory for an array of Employee structures
    workers = (Employee *) malloc(num * sizeof(Employee));

    // Check if memory was allocated successfully
    if (workers == NULL) {
        cout << "Unable to allocate space for employees" << endl;
        return 1;
    }

    cout << "Memory for " << num << " employees has been allocated successfully" << endl;

    // Example of accessing a member (optional logic)
    // workers[0].id = 101; 

    // Free the allocated memory
    free(workers);
    workers = NULL;

    return 0;
}
