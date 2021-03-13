
#pragma once
#ifndef ADDRESS_H
#define ADDRESS_H
#include <string>

class Address {
private:
    std::string *street1;
    std::string *street2;
    std::string *city;
    std::string *st;
    std::string *zip;
public:
    Address();
    ~Address();
    void setAddress();
    std::string getAddress();
    void setAddress(std::string street1, std::string street2, std::string city, std::string st, std::string zip);
};

#endif
    Race().start();
    return 0;
}
