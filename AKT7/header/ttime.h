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

class TTime {
public:
    // Getter
    short getHour();
    short getMinute();
    short getSecond();
    
    // Setter
    void setTime(short hour, short minute, short second);
    void setHour(short hour);
    void setMinute(short minute);
    void setSecond(short second);
    
    // Print
    void print();
    
    // Constructor
    TTime(short hour, short minute, short second = 0);
    TTime();
    
private:
    short hour;
    short minute;
    short second;
};


#endif /* ttime_h */
