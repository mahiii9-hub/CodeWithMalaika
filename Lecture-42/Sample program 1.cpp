#include <iostream>
using namespace std;

// Template class definition
template <class T>
class Generic {
private:
    T instance;
public:
    Generic(T i);
    void print();
};

// Constructor definition outside the class
template <class T>
Generic<T>::Generic(T i) {
    instance = i;
}

// Print function definition outside the class
template <class T>
void Generic<T>::print() {
    cout << "Generic printing: " << instance << endl;
}

// Another class to be used inside the template
class Employee {
private:
    int idNum;
    double salary;
public:
    Employee(int id = 0) {
        idNum = id;
        salary = 4.9;
    }
    // Overloading << to print Employee object
    friend ostream& operator<<(ostream& out, const Employee& emp);
};

ostream& operator<<(ostream& out, const Employee& emp) {
    out << "Employee number " << emp.idNum << " Salary " << emp.salary;
    return out;
}

int main() {
    // 1. Template with int
    Generic<int> anInt(7);
    anInt.print();

    // 2. Template with double
    Generic<double> someMoney(6.65);
    someMoney.print();

    // 3. Template with a User-defined Class (Employee)
    Employee aWorker(333);
    Generic<Employee> genericEmp(aWorker);
    genericEmp.print();

    return 0;
}
