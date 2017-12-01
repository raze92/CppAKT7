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
TRoom::TRoom() {
    
}

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

// Load
void TRoom::load(ifstream* dataStream) {
    while(!dataStream->eof()) {
        string tag = XmlUtils::getNextXmlTag(dataStream);
        if(tag == "/room") {
            return;
            
        } else if(tag == "name") {
            string name = XmlUtils::getContentUntilCloseTag(dataStream, "/name");
            this->Name = name;
            
        } else if(tag == "building") {
            string building = XmlUtils::getContentUntilCloseTag(dataStream, "/building");
            this->Building = building;
            
        } else if(tag == "seats") {
            string seats = XmlUtils::getContentUntilCloseTag(dataStream, "/seats");
            this->Seats = stoi(seats);
        }
    }
}

// Print
void TRoom::print() {
    cout << "Raum " << Name << " (" << Building << ")";
}
