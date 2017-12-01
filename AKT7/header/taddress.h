//
//  taddress.h
//  AKT7
//
//  Created by Michael Radzieda on 18.10.17.
//  Copyright © 2017 de.TeamBox. All rights reserved.
//

#ifndef taddress_h
#define taddress_h

#include <string>
#include <iostream>
#include <fstream>

#include "XmlUtils.h"

class TAddress {
public:
    // Constructor
    TAddress();
    TAddress(string street, string houseNr, unsigned zipcode, string city);
    
    // Getter
    string getStreet();
    string getHouseNr();
    unsigned getZipcode();
    string getCity();
    
    // Setter
    void setStreet(string street);
    void setHouseNr(string houseNr);
    void setZipcode(unsigned zipcode);
    void setCity(string city);
    
    // Load
    void load(ifstream* dataStream);
    
    // Print
    void print();
    
private:
    string Street;
    string HouseNr;
    unsigned Zipcode;
    string City;
};


#endif /* taddress_h */
