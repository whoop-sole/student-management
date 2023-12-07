// Student.h
#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

class Student {
private:
    int studentId;
    std::string firstName;
    std::string lastName;
    std::string birthDate;

public:
    Student(int id, const std::string& fName, const std::string& lName, const std::string& bDate);
    void displayStudentInfo();
};

#endif // STUDENT_H
