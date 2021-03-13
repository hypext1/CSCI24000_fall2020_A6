#include "date.h"
#include <iostream>
#include <sstream>
#include <string>

//private

//public
//constructor
Date::Date() {
    Date::month = new std::string("month");
    Date::day = new std::string("day");
    Date::year = new std::string("year");
};

//set Date
void Date::setDate(std::string month,std::string day,std::string year){
    *Date::month = month;
    *Date::day = day;
    *Date::year = year;
};

//destructor
Date::~Date(){
    delete month;
    delete day;
    delete year;
};


//get Date
std::string Date::getDate(){
    std::stringstream Date;
    Date << *month << "/" << *day << "/" << *year;
    return Date.str();
};
