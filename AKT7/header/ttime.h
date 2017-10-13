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
#include <stdexcept>

class TTime {
public:
    // Getter
    short getHour();
    short getMinute();
    short getSecond();
    
    // Setter
    void setTime(unsigned short hour, unsigned short minute, unsigned short second);
    void setHour(unsigned short hour);
    void setMinute(unsigned short minute);
    void setSecond(unsigned short second);
    
    // Print
    void print();
    
    // Constructor
    TTime(unsigned short hour, unsigned short minute, unsigned short second = 0);
    TTime();
    
private:
    unsigned short hour;
    unsigned short minute;
    unsigned short second;
};


#endif /* ttime_h */
