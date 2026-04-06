#include <iostream>
#include <cstdlib>
#include <cstddef> // for size_t
using namespace std;

// Overloaded global new operator
void* operator new(size_t size) {
    void* rtn = calloc(1, size); // calloc automatically initializes memory to zero
    return rtn;
}

// Overloaded global delete operator
void operator delete(void* ptr) noexcept {
    free(ptr);
}

int main() {
    // Allocate an array. Because of overloaded 'new', it will be all zeros.
    int *ip = new int[10]; 

    cout << "Displaying the zero-filled array: " << endl;
    for (int i = 0; i < 10; i++) {
        cout << ip[i] << " ";
    }
    
    delete[] ip;
    return 0;
}
