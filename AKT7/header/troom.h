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

using namespace std;

class TRoom {
public:
    // Constructor
    TRoom(string name, string building, unsigned short seats);
    
    // Getter
    string getName();
    string getBuilding();
    unsigned short getSeats();
    
    // Setter
    void setName(string name);
    void setBuilding(string building);
    void setSeats(unsigned short seats);
    
    // Print
    void print();
private:
    string Name;
    string Building;
    unsigned short Seats;
};

#endif /* troom_h */
