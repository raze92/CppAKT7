//
//  tsubject.h
//  AKT7
//
//  Created by Michael Radzieda on 24.11.17.
//  Copyright © 2017 de.TeamBox. All rights reserved.
//

#ifndef tsubject_h
#define tsubject_h

#include <string>
#include <vector>
#include <fstream>

#include "tevent.h"
#include "XmlUtils.h"

class TBookings;

class TSubject {
public:
    // Constructor
    TSubject();
    TSubject(string Name, int subjectNr);
    
    // Destructor
    ~TSubject();
    
    // Getter
    string getName();
    vector<TEvent*> getEvents();
    
    // Add
    void addEvent(TEvent* event);
    
    // Load
    void load(ifstream* dataStream, TBookings* bookings);
    
    // Print
    void print();
private:
    string Name;
    int SubjectNr;
    vector<TEvent*> Events;
};

#endif /* tsubject_h */
