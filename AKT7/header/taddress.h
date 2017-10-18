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

using namespace std;

class TAddress {
public:
    // Constructor
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
    
    // Print
    void print();
    
private:
    string Street;
    string HouseNr;
    unsigned Zipcode;
    string City;
};


#endif /* taddress_h */
