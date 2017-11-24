//
//  tstudent.h
//  AKT7
//
//  Created by Michael Radzieda on 24.11.17.
//  Copyright © 2017 de.TeamBox. All rights reserved.
//

#ifndef tstudent_h
#define tstudent_h

#include "tperson.h"
#include "tstudy.h"
#include <iostream>

using namespace std;

class TStudent : TPerson {
public:
    TStudent(int matriculationNr, unsigned short term, short credits, TStudy* study, TPerson* person);
    
    void print();
private:
    int MatriculationNr;
    unsigned short Term;
    short Credits;
    TStudy* Study;
};

#endif /* tstudent_h */
