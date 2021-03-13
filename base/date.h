#pragma once
#ifndef DATE_H
#define DATE_H
#include <string>

class Date {
private:
    std::string *month;
    std::string *day;
    std::string *year;
public:
    Date();
    ~Date();
    void setDate();
    std::string getDate();
    void setDate(std::string month, std::string day, std::string year);
};

#endif
