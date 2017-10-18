//
//  tperson.h
//  AKT7
//
//  Created by Michael Radzieda on 18.10.17.
//  Copyright © 2017 de.TeamBox. All rights reserved.
//

#ifndef tperson_h
#define tperson_h

#include <string>
#include <iostream>
#include "taddress.h"
#include "tdate.h"

using namespace std;

class TPerson {
public:
    // Constructor
    TPerson(string name,
            string street, string houseNr, unsigned zipcode, string city,
            unsigned short day, unsigned short month, unsigned short year);
    
    // Getter
    unsigned getID();
    string getName();
    TAddress& getAddress();
    TDate getBirthday();
    
    // Setter
    void setID(unsigned iD);
    void setName(string name);
    
    // Print
    void print();
    
private:
    unsigned ID;
    string Name;
    TAddress Address;
    TDate Birthday;
};

#endif /* tperson_h */
