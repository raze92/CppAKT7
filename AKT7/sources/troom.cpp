//
//  troom.cpp
//  AKT7
//
//  Created by Michael Radzieda on 13.10.17.
//  Copyright © 2017 de.TeamBox. All rights reserved.
//

#include "troom.h"

using namespace std;

// Constructor
TRoom::TRoom(string name, string building, unsigned short seats) {
    this->Name = name;
    this->Building = building;
    this->Seats = seats;
}

// Getter
string TRoom::getName() {
    return Name;
}

string TRoom::getBuilding() {
    return Building;
}

unsigned short TRoom::getSeats() {
    return Seats;
}

// Setter
void TRoom::setName(string name) {
    this->Name = name;
}

void TRoom::setBuilding(string building) {
    this->Building = building;
}

void TRoom::setSeats(unsigned short seats) {
    this->Seats = seats;
}

// Print
void TRoom::print() {
    cout << "Raum " << Name << " (" << Building << ")";
}
