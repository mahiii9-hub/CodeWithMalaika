#include <iostream>
using namespace std;


void copyArray(int *source, int *dest, int size) {
    for (int i = 0; i < size; i++) {
        *(dest + i) = *(source + i); 
    }
}

int main() {
    int size = 5;
    int arr1[] = {10, 20, 30, 40, 50};
    int arr2[5]; 

    // Function call
    copyArray(arr1, arr2, size);

    cout << "Elements in Destination Array: " << endl;
    for (int i = 0; i < size; i++) {
        cout << arr2[i] << " ";
    }

    return 0;
}
