#include "libraries.h"

Student::Student(string name, int age, int grade) : User(name, age), grade(grade) {}

void Student::displayInfo() {
    cout << "Student Name: " << name << ", Age: " << age << ", Grade: " << grade << std::endl;
}