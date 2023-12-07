// Course.cpp
#include "Course.h"

Course::Course(int id, const std::string& cName) : courseId(id), courseName(cName) {}

void Course::enrollStudent(const Student& student) {
    enrolledStudents.push_back(student);
}

void Course::displayCourseInfo() {
    std::cout << "Course ID: " << courseId << std::endl;
    std::cout << "Course Name: " << courseName << std::endl;
    std::cout << "Enrolled Students:" << std::endl;

    for (const auto& student : enrolledStudents) {
        student.displayStudentInfo();
        std::cout << "---------------------" << std::endl;
    }
}
