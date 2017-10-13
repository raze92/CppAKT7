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
    void setDate(unsigned short day, unsigned short month, unsigned short year);
    void setDay(unsigned short day);
    void setMonth(unsigned short month);
    void setYear(unsigned short year);
    
    // Print
    void print();
    
    // Constructor
    TDate(unsigned short day, unsigned short month, unsigned short year);
    TDate();
    
private:
    unsigned short day;
    unsigned short month;
    unsigned short year;
};

#endif /* tdate_h */
