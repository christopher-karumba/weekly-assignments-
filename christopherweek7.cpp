#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int age;
    int serviceYear;
    double salary;

public:
    // Parameterized constructor
    Employee(string n, int a, int s, double sal) {
        name = n;
        age = a;
        serviceYear = s;
        salary = sal;
    }

    // Destructor
    ~Employee() {
        // No dynamic memory to free
    }

    // Accessor member functions
    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }

    int getServiceYear() {
        return serviceYear;
    }

    double getSalary() {
        return salary;
    }
};

int main() {
    Employee emp("John", 30, 5, 50000);

    cout << emp.getName() << endl;
    cout << emp.getAge() << endl;
    cout << emp.getServiceYear() << endl;
    cout << emp.getSalary() << endl;

    return 0;
}
