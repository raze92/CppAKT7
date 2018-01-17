//
//  tevent.h
//  AKT7
//
//  Created by Michael Radzieda on 01.11.17.
//  Copyright © 2017 de.TeamBox. All rights reserved.
//

#ifndef tevent_h
#define tevent_h

#include <string>
#include <fstream>
#include <iostream>

#include "tperson.h"
#include "troom.h"
#include "tblock.h"
#include "tweekday.h"

class TBookings;

class TEvent {
public:
    // Constructor
    TEvent();
    TEvent(string name, TPerson* teacher, TRoom* room, TBlock* block, TWeekday weekday, short period);
    
    // Getter
    string getName();
    TPerson* getTeacher();
    TRoom* getRoom();
    TBlock* getBlock();
    TWeekday getWeekday();
    
    // Load
    void load(ifstream* dataStream, TBookings* bookings);
    
    // Print
    void print();
    
private:
    string Name;
    TPerson* Teacher;
    TRoom* Room;
    TBlock* Block;
    TWeekday Weekday;
    short Period;
};


#endif /* tevent_h */
