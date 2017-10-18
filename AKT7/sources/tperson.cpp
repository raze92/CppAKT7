//
//  tperson.cpp
//  AKT7
//
//  Created by Michael Radzieda on 18.10.17.
//  Copyright © 2017 de.TeamBox. All rights reserved.
//

#include "tperson.h"

using namespace std;

// Constructor
TPerson::TPerson(string name,
                 string street, string houseNr, unsigned zipcode, string city,
                 unsigned short day, unsigned short month, unsigned short year)
                    : Address(street, houseNr, zipcode, city), Birthday(day, month, year) {
    this->Name = name;
}

// Getter
unsigned TPerson::getID() {
    return ID;
}
string TPerson::getName() {
    return Name;
}
TAddress& TPerson::getAddress() {
    return Address;
}
TDate TPerson::getBirthday() {
    return Birthday;
}

// Setter
void TPerson::setID(unsigned iD) {
    this->ID = iD;
}
void TPerson::setName(string name) {
    this->Name = name;
}

// Print
void TPerson::print() {
    cout << Name << " (* ";
    Birthday.print();
    cout << ")";
}
