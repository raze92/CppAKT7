//
//  tblock.h
//  AKT7
//
//  Created by Michael Radzieda on 13.10.17.
//  Copyright © 2017 de.TeamBox. All rights reserved.
//

#ifndef tblock_h
#define tblock_h


#endif /* tblock_h */

#include <string>
#include <iostream>
#include "ttime.h"

using namespace std;

class TBlock {
public:
    // Constructor
    TBlock(short blockNr, TTime begin);

    // Getter
    unsigned short getBlockNr();
    TTime getBegin();
    TTime getEnd();
    
    // Setter
    void setBlockNr(unsigned short blockNr);
    void setBegin(TTime begin);
    
    // Print
    void print();
private:
    unsigned short BlockNr;
    TTime Begin;
};