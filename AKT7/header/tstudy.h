//
//  tstudy.h
//  AKT7
//
//  Created by Michael Radzieda on 24.11.17.
//  Copyright © 2017 de.TeamBox. All rights reserved.
//

#ifndef tstudy_h
#define tstudy_h

#include <string>
#include <iostream>
#include <fstream>

#include "XmlUtils.h"

class TStudy {
public:
    // Constructor
    TStudy();
    TStudy(string name, bool nc, short NrOfTerms);
    
    // Getter
    string getName();
    
    // Load
    void load(ifstream* dataStream);
    
    // Print
    void print();
private:
    string Name;
    bool NC;
    short NrOfTerms;
};

#endif /* tstudy_h */
