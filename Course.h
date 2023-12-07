// Course.h
#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <string>
#include <vector>
#include "Student.h"

class Course {
private:
    int courseId;
    std::string courseName;
    std::vector<Student> enrolledStudents;

public:
    Course(int id, const std::string& cName);
    void enrollStudent(const Student& student);
    void displayCourseInfo();
};

#endif // COURSE_H
