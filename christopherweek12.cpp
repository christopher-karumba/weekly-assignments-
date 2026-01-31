#include <iostream>
#include <string>
using namespace std;

// Department class (association)
class Department {
private:
    string name;
public:
    Department(string n) { name = n; }
    string getName() { return name; }
};

// Student class
class Student {
private:
    string name;
    int id;
public:
    Student(string n, int i) { name = n; id = i; }
    string getName() { return name; }
    int getId() { return id; }
};

// Course class
class Course {
private:
    string courseName;
public:
    Course(string cn) { courseName = cn; }
    string getCourseName() { return courseName; }
};

// Registration class (dependency)
class Registration {
private:
    Student* student;
    Course* course;
public:
    Registration(Student* s, Course* c) { student = s; course = c; }
    void displayRegistration() {
        cout << "Student: " << student->getName() 
             << " (ID: " << student->getId() << ")"
             << " registered for " << course->getCourseName() << endl;
    }
};

int main() {
    Department department("COETEC");

    Student student1("Alice", 101);
    Student student2("Bob", 102);

    Course course1("Mathematics");
    Course course2("Physics");

    Registration reg1(&student1, &course1);
    Registration reg2(&student2, &course2);

    reg1.displayRegistration();
    reg2.displayRegistration();

    return 0;
}

