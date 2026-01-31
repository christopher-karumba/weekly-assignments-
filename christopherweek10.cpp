//c++ interface files
//Employee.h
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;

class Employee {
protected:
    string firstName;
    char initial;
    string lastName;

public:
    Employee(string f, char i, string l);
    virtual ~Employee();

    virtual double getSalary() = 0; // pure virtual
};

#endif
//SalaryEmployee.h
#define SALARYEMPLOYEE_H

#include "Employee.h"

class SalaryEmployee : public Employee {
private:
    double monthlySalary;

public:
    SalaryEmployee(string f, char i, string l, double s);
    double getSalary();
};

#endif
//HourlyEmployee.h
#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H

#include "Employee.h"

class HourlyEmployee : public Employee {
private:
    double hoursWorked;
    double ratePerHour;

public:
    HourlyEmployee(string f, char i, string l, double h, double r);
    double getSalary();
};

#endif
//files implementation
//Employee.cpp
#include "Employee.h"

Employee::Employee(string f, char i, string l) {
    firstName = f;
    initial = i;
    lastName = l;
}

Employee::~Employee() {
}
//SalaryEmployee.cpp
#include "SalaryEmployee.h"

SalaryEmployee::SalaryEmployee(string f, char i, string l, double s)
    : Employee(f, i, l) {
    monthlySalary = s;
}

double SalaryEmployee::getSalary() {
    return monthlySalary;
}
//HourlyEmployee.cpp
#include "HourlyEmployee.h"

HourlyEmployee::HourlyEmployee(string f, char i, string l, double h, double r)
    : Employee(f, i, l) {
    hoursWorked = h;
    ratePerHour = r;
}

double HourlyEmployee::getSalary() {
    return hoursWorked * ratePerHour;
}

//APPLICATION
main.cpp
#include <iostream>
#include "SalaryEmployee.h"
#include "HourlyEmployee.h"
using namespace std;

int main() {
    Employee* e1 = new SalaryEmployee("John", 'A', "Doe", 50000);
    Employee* e2 = new HourlyEmployee("Mary", 'B', "Smith", 160, 300);

    cout << e1->getSalary() << endl;
    cout << e2->getSalary() << endl;

    delete e1;
    delete e2;

    return 0;
}


