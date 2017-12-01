//
//  tstudent.h
//  AKT7
//
//  Created by Michael Radzieda on 24.11.17.
//  Copyright © 2017 de.TeamBox. All rights reserved.
//

#ifndef tstudent_h
#define tstudent_h

#include <iostream>
#include <string>
#include <fstream>

#include "tperson.h"
#include "tstudy.h"
//#include "tbookings.h"
#include "XmlUtils.h"

class TBookings;

class TStudent : public TPerson {
public:
    // Constructor
    TStudent();
    TStudent(int matriculationNr, unsigned short term, short credits, TStudy* study, TPerson* person);
    
    // Getter
    int getMatriculationNr();
    
    // Load
    void load(ifstream* dataStream, TBookings* bookings);
    
    // Print
    void print();
private:
    int MatriculationNr;
    unsigned short Term;
    short Credits;
    TStudy* Study;
};

#endif /* tstudent_h */
