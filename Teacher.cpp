#include "libraries.h"

Teacher::Teacher(string name, int age, string subject) : User(name, age), subject(subject) {}

void Teacher::displayInfo() {
    cout << "Teacher Name: " << name << ", Age: " << age << ", Subject: " << subject << std::endl;
}
