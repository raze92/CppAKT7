//
//  tbookings.h
//  AKT7
//
//  Created by Michael Radzieda on 30.11.17.
//  Copyright © 2017 de.TeamBox. All rights reserved.
//

#ifndef tbookings_h
#define tbookings_h

#include <vector>
#include <string>
#include <fstream>

#include "troom.h"
#include "tblock.h"
#include "tstudy.h"
#include "tstudent.h"
#include "tteacher.h"
#include "tsubject.h"
#include "tbooking.h"
#include "XmlUtils.h"

class TStudent;
class TSubject;

class TBookings {
public:
    // Constructor
    TBookings(string filename);
    
    // Destructor
    ~TBookings();
    
    // Finder
    TBlock* findBlock(int blockNr);
    TRoom* findRoom(string name);
    TStudy* findStudy(string name);
    TStudent* findStudent(string name);
    TTeacher* findTeacher(string name);
    TSubject* findSubject(string name);
    
    // Print
    void print();
    
private:
    vector<TBlock*> Blocks;
    vector<TRoom*> Rooms;
    vector<TStudy*> Studies;
    vector<TStudent*> Students;
    vector<TTeacher*> Teachers;
    vector<TSubject*> Subjects;
    vector<TBooking*> Bookings;
};

#endif /* tbookings_h */
