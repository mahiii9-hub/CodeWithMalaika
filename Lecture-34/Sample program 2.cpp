#include <iostream>
#include <cstring>
#include <cstddef>
using namespace std;

const int MAXNAMES = 100;

class Name {
private:
    char name[25];
public:
    Name(const char *s) { 
        strncpy(name, s, 24); 
        name[24] = '\0'; // ensure null termination
    }
    
    void display() const { cout << "\nName: " << name; }

    // Class-specific overloaded operators
    void* operator new(size_t size);
    void operator delete(void* ptr);
    
    ~Name() {} 
};

// Simple memory pool
char pool[MAXNAMES * sizeof(Name)];
int inuse[MAXNAMES] = {0};

void* Name::operator new(size_t size) {
    for (int p = 0; p < MAXNAMES; p++) {
        if (!inuse[p]) {
            inuse[p] = 1;
            return pool + (p * sizeof(Name));
        }
    }
    return nullptr;
}

void Name::operator delete(void* ptr) {
    if (!ptr) return;
    int p = ((char*)ptr - pool) / sizeof(Name);
    inuse[p] = 0;
}

int main() {
    Name* directory[5]; // Simplified for example
    char tempName[25];

    for (int i = 0; i < 3; i++) {
        cout << "Enter name #" << i + 1 << ": ";
        cin >> tempName;
        directory[i] = new Name(tempName);
    }

    for (int i = 0; i < 3; i++) {
        directory[i]->display();
        delete directory[i];
    }

    return 0;
}
