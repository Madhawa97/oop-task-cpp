#include "libraries.h"

class Student : public User {
    int grade;
public:
    Student(string name, int age, int grade);
    void displayInfo();
};