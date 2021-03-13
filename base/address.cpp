#include "address.h"
#include <iostream>
#include <sstream>
#include <string>

//private

//public
//constructor
Address::Address() {
    Address::street1 = new std::string("street1");
    Address::street2 = new std::string("street2");
    Address::city = new std::string("city");
    Address::st = new std::string("st");
    Address::zip = new std::string("zip");
    
};

//set address
void Address::setAddress(std::string street1,std::string street2,std::string city,std::string st,std::string zip){
    *Address::street1 = street1;
    *Address::street2 = street2;
    *Address::city = city;
    *Address::st = st;
    *Address::zip = zip;
};

//destructor
Address::~Address(){
    delete street1;
    delete street2;
    delete city;
    delete st;
    delete zip;
};


//get address
std::string Address::getAddress(){
    std::stringstream address;
    address << street1 << ", " << street2 << ", " << city << ", "<< st << ", " << zip;
    return address.str();

};


