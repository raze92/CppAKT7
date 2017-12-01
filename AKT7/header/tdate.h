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
#include <iomanip>
#include <iostream>
#include <fstream>

#include "XmlUtils.h"

class TDate {
public:
    // Constructor
    TDate();
    TDate(unsigned short day, unsigned short month, unsigned short year);
    
    // Getter
    unsigned short getDay();
    unsigned short getMonth();
    unsigned short getYear();
    
    // Setter
    void setDate(unsigned short day, unsigned short month, unsigned short year);
    void setDate();
    void setDay(unsigned short day);
    void setMonth(unsigned short month);
    void setYear(unsigned short year);
    
    // Load
    void load(ifstream* dataStream, string closingTag);
    
    // Print
    void print();
    
private:
    unsigned short Day;
    unsigned short Month;
    unsigned short Year;
};

#endif /* tdate_h */
