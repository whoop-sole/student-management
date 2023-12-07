// Student.cpp
#include "Student.h"

Student::Student(int id, const std::string& fName, const std::string& lName, const std::string& bDate)
    : studentId(id), firstName(fName), lastName(lName), birthDate(bDate) {}

void Student::displayStudentInfo() {
    std::cout << "Student ID: " << studentId << std::endl;
    std::cout << "Name: " << firstName << " " << lastName << std::endl;
    std::cout << "Birthdate: " << birthDate << std::endl;
}
