#pragma  once
#ifndef STUDENT_H
#define STUDENT_H
#include <string>

#include "address.h"
#include "date.h"

class Student {
private:
    std::string *name;
    Address *address;
    Date *bday;
    Date *graduation;
    float *gpa;
    int *completedHrs;
public:
    Student();
    ~Student();
    std::string getStudent();
    void setStudent(std::string name,Address address,Date bday,Date graduation,float gpa,int completedHrs);
};

#endif
    Race().start();
    return 0;
}
