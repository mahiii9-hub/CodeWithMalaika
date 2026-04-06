#include <iostream>
using namespace std;

struct VehicleParts {
    int wheels, seats;
    VehicleParts() { cout << "\nVehicleParts - default constructor"; }
    VehicleParts(int w, int s) : wheels(w), seats(s) {
        cout << "\nVehicleParts - parameterized constructor";
    }
    ~VehicleParts() { cout << "\nVehicleParts - destructor" << endl; }
};

class Vehicle {
    VehicleParts parts;
public:
    Vehicle() { cout << "\nVehicle - default constructor" << endl; }
    Vehicle(int w, int s) : parts(w, s) {
        cout << "\nVehicle - parameterized constructor" << endl;
    }
    ~Vehicle() { cout << "\nVehicle - destructor" << endl; }
    
    void display() {
        cout << "\nWheels: " << parts.wheels << ", Seats: " << parts.seats << endl;
    }
};

int main() {
    Vehicle car(4, 2);
    car.display();
    return 0;
}
