//
//  tteacher.h
//  AKT7
//
//  Created by Michael Radzieda on 24.11.17.
//  Copyright © 2017 de.TeamBox. All rights reserved.
//

#ifndef tteacher_h
#define tteacher_h

#include <iostream>
#include <fstream>

#include "tperson.h"
#include "tbooking.h"
#include "XmlUtils.h"

class TTeacher : virtual public TPerson {
public:
    // Constructor
    TTeacher();
    TTeacher(int personalNr, TPerson* person);
    
    // Destructor
    ~TTeacher();
    
    // Getter
    int getPersonalNr();
    
    // Load
    virtual void load(ifstream* dataStream);
    
    // Print
    virtual void print();
protected:
    int PersonalNr;
};

#endif /* tteacher_h */
