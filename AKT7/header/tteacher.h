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

class TTeacher : public TPerson {
public:
    // Constructor
    TTeacher();
    TTeacher(int personalNr, TPerson* person);
    
    // Getter
    int getPersonalNr();
    
    // Load
    void load(ifstream* dataStream);
    
    // Print
    void print();
private:
    int PersonalNr;
};

#endif /* tteacher_h */
