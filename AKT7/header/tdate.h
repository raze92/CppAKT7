//
//  tdate.h
//  AKT7
//
//  Created by Michael Radzieda on 07.10.17.
//  Copyright © 2017 de.TeamBox. All rights reserved.
//

#ifndef tdate_h
#define tdate_h

#include <ctime>
#include <string>

class TDate {
public:
    // Getter
    short getDay();
    short getMonth();
    short getYear();
    
    // Setter
    void setDate(short day, short month, short year);
    void setDay(short day);
    void setMonth(short month);
    void setYear(short year);
    
    // Print
    void print();
    
    // Constructor
    TDate(short day, short month, short year);
    TDate();
    
private:
    short day;
    short month;
    short year;
};

#endif /* tdate_h */
