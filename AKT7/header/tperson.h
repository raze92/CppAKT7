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

class TPerson {
public:
    // Constructor
    TPerson();
    TPerson(string name, string street, string houseNr, unsigned zipcode, string city,
            unsigned short day, unsigned short month, unsigned short year);
    TPerson(TPerson* person);
    
    
    // Getter
    unsigned getID();
    string getName();
    TAddress& getAddress();
    TDate getBirthday();
    
    // Print
    void print();
    
protected:
    unsigned ID;
    string Name;
    TAddress Address;
    TDate Birthday;

private:
    static unsigned IdIterator;
};

#endif /* tperson_h */
