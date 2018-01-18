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
#include "ttutor.h"
#include "tsubject.h"
#include "tbooking.h"
#include "tschedule.h"
#include "XmlUtils.h"
#include "tlist.h"

class TStudent;
class TSubject;

enum OutputFormat {
    ofPersons,
    ofBookings,
    ofScheduleOfStudents,
    ofScheduleOfStudies
};

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
    TPerson* findPerson(string name);
    TSubject* findSubject(string name);
    
    // Print
    void printBookings();
    void printPersons();
    
    void operator() (OutputFormat format);
    
private:
    vector<TBlock*> Blocks;
    vector<TRoom*> Rooms;
    vector<TStudy*> Studies;
    TList<TPerson*> Persons;
    vector<TSubject*> Subjects;
    vector<TBooking*> Bookings;
    TSchedule Schedule;
    
    void printScheduleOfStudents(TPerson* student);
    void printScheduleOfStudies(TStudy* study);
};

#endif /* tbookings_h */
