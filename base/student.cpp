#include "student.h"
#include <iostream>
#include <sstream>
#include <string>

#include "address.h"
#include "date.h"

//private

//public
constructor
Student::Student() {
    Student::name = new std::string();
    Student::address = new Address();
    Student::bday = new Date();
    Student::graduation = new Date();
    Student::gpa = new float(0.0);
    Student::completedHrs = new int(0);

};

//set Student (imports data into student)
void Student::setStudent(std::string name,Address address,Date bday,Date graduation,float gpa,int completedHrs){
    *Student::name = name;
    *Student::address = address;
    *Student::bday = bday;
    *Student::graduation = graduation;
    *Student::gpa = gpa;
    *Student::completedHrs = completedHrs;

};

//destructor
Student::~Student(){
    delete name;
    delete address;
    delete bday;
    delete graduation;
    delete gpa;
    delete completedHrs;
};


//get Student (exports data from student as string)
std::string Student::getStudent(){
    std::stringstream Student;
    Student << *name << "," << address->getAddress() << "," << bday->getDate() << "," << graduation->getDate() << "," << *gpa << "," << *completedHrs;
    return Student.str();
};

