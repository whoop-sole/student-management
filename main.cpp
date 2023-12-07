// main.cpp
#include "Student.h"
#include "Course.h"

int main() {
    Student student1(1, "John", "Doe", "2000-05-15");
    Student student2(2, "Jane", "Smith", "1999-08-22");

    Course course(101, "Computer Science 101");
    course.enrollStudent(student1);
    course.enrollStudent(student2);

    std::cout << "Course Information:" << std::endl;
    course.displayCourseInfo();

    return 0;
}
