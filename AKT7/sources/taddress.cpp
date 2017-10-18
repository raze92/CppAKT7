//
//  taddress.cpp
//  AKT7
//
//  Created by Michael Radzieda on 18.10.17.
//  Copyright © 2017 de.TeamBox. All rights reserved.
//

#include "taddress.h"

using namespace std;

// Constructor
TAddress::TAddress(string street, string houseNr, unsigned zipcode, string city) {
    this->Street = street;
    this->HouseNr = houseNr;
    this->Zipcode = zipcode;
    this->City = city;
}

// Getter
string TAddress::getStreet() {
    return Street;
}
string TAddress::getHouseNr() {
    return HouseNr;
}
unsigned TAddress::getZipcode() {
    return Zipcode;
}
string TAddress::getCity() {
    return City;
}

// Setter
void TAddress::setStreet(string street) {
    this->Street = street;
}
void TAddress::setHouseNr(string houseNr) {
    this->HouseNr = houseNr;
}
void TAddress::setZipcode(unsigned zipcode) {
    this->Zipcode = zipcode;
}
void TAddress::setCity(string city) {
    this->City = city;
}

// Print
void TAddress::print() {
    cout << Street << " " << HouseNr << endl;
    cout << Zipcode << " " << City;
}
