//
//  troom.h
//  AKT7
//
//  Created by Michael Radzieda on 13.10.17.
//  Copyright © 2017 de.TeamBox. All rights reserved.
//

#ifndef troom_h
#define troom_h

#include <string>
#include <iostream>
#include <fstream>

#include "XmlUtils.h"

class TRoom {
public:
    // Constructor
    TRoom();
    TRoom(string name, string building, unsigned short seats);
    
    // Getter
    string getName();
    string getBuilding();
    unsigned short getSeats();
    
    // Setter
    void setName(string name);
    void setBuilding(string building);
    void setSeats(unsigned short seats);
    
    // Load
    void load(ifstream* dataStream);
    
    // Print
    void print();
private:
    string Name;
    string Building;
    unsigned short Seats;
};

#endif /* troom_h */
