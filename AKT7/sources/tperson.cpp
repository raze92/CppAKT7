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
TPerson::TPerson() : Address() { }

TPerson::TPerson(string name, string street, string houseNr, unsigned zipcode, string city,
                 unsigned short day, unsigned short month, unsigned short year)
: Address(street, houseNr, zipcode, city), Birthday(day, month, year) {
    this->Name = name;
    this->ID = ++IdIterator;
}

TPerson::TPerson(TPerson* person) : Address(this->getAddress()), Birthday(this->getBirthday()){
    this->Name = person->getName();
    this->ID = ++IdIterator;
}

// Destructor
TPerson::~TPerson() {
    cout << "\tPerson freigegeben: " << this->Name;
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

// Print
void TPerson::print() {
    cout << Name << " (* ";
    Birthday.print();
    cout << ")";
}
void TPerson::print(ostream& os) {
    os << Name << " (* " << Birthday << ")";
}

// Operator
ostream& operator<< (ostream& out, TPerson& p) {
    p.print(out);
    return out;
}

unsigned TPerson::IdIterator = 0;
