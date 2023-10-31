#pragma once
#include "libraries.h"


int main() {

    Student student("John Doe", 16, 10);
    student.displayInfo();

    Teacher teacher("Jane Smith", 30, "Mathematics");
    teacher.displayInfo();

    return 0;
}