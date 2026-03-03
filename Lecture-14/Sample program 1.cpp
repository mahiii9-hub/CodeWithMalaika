#include <iostream>
using namespace std;


void swap(int *ptr1, int *ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

// Bubble Sort function
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Agar pehla element doosre se bada hai the swap 
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]); // Pointers pass ho rahe hain
            }
        }
    }
}

int main() {
    int data[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(data) / sizeof(data[0]);

    cout << "Original Array: ";
    for (int i = 0; i < n; i++) cout << data[i] << " ";

    bubbleSort(data, n);

    cout << "\nSorted Array:   ";
    for (int i = 0; i < n; i++) cout << data[i] << " ";

    return 0;
}
