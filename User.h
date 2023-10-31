#include "libraries.h"

class User {
protected:
    std::string name;
    int age;
public:
    User(string name, int age) : name(name), age(age) {}
    virtual void displayInfo() = 0;
};