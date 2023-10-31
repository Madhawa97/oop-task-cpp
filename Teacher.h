#include "libraries.h"

class Teacher : public User {
    std::string subject;
public:
    Teacher(string name, int age, string subject);
    void displayInfo();
};
