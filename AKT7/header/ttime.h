//
//  ttime.h
//  AKT7
//
//  Created by Michael Radzieda on 07.10.17.
//  Copyright © 2017 de.TeamBox. All rights reserved.
//

#ifndef ttime_h
#define ttime_h

#include <ctime>
#include <string>
#include <stdio.h>
#include <iomanip>
#include <iostream>
#include <stdexcept>
#include <fstream>

#include "XmlUtils.h"

class TTime {
public:
    // Constructor
    TTime();
    TTime(unsigned short hour, unsigned short minute, unsigned short second = 0);
    
    // Getter
    unsigned short getHour();
    unsigned short getMinute();
    unsigned short getSecond();
    
    // Setter
    void setTime(unsigned short hour, unsigned short minute, unsigned short second);
    void setTime();
    void setHour(unsigned short hour);
    void setMinute(unsigned short minute);
    void setSecond(unsigned short second);
    
    // Load
    void load(ifstream* dataStream, string closingTag);
    
    // Print
    void print();
    
    // Operator
    friend TTime operator+ (const TTime &a, const short &b);
    
private:
    unsigned short Hour;
    unsigned short Minute;
    unsigned short Second;
};


#endif /* ttime_h */
