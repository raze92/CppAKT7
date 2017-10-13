//
//  tdate.cpp
//  AKT7
//
//  Created by Michael Radzieda on 07.10.17.
//  Copyright © 2017 de.TeamBox. All rights reserved.
//

#include "tdate.h"

// Setter
short TDate::getDay() {
    return this->day;
}
short TDate::getMonth() {
    return this->month;
}
short TDate::getYear() {
    return this->year;
}

// Getter
void TDate::setDate(unsigned short day, unsigned short month, unsigned short year) {
    if(day > 31)
        throw std::invalid_argument("Invalid day value");
    if(month > 12)
        throw std::invalid_argument("Invalid month value");
    
    this->day = day;
    this->month = month;
    this->year = year;
}

void TDate::setDay(unsigned short day) {if(day > 31)
    throw std::invalid_argument("Invalid day value");
    
    this->day = day;
}

void TDate::setMonth(unsigned short month) {
    if(month > 12)
        throw std::invalid_argument("Invalid month value");
    
    this->month = month;
}

void TDate::setYear(unsigned short year) {
    this->year = year;
}

// Print
void TDate::print() {
    printf("%02u.%02u.%04u", day, month, year);
}

// Constructor
TDate::TDate(unsigned short day, unsigned short month, unsigned short year) {
    if(day > 31)
        throw std::invalid_argument("Invalid day value");
    if(month > 12)
        throw std::invalid_argument("Invalid month value");
    
    this->day = day;
    this->month = month;
    this->year = year;
}

TDate::TDate() {
    time_t t = time(0);
    struct tm * now = localtime( & t );
    this->day = now->tm_mday;
    this->month = now->tm_mon + 1;
    this->year = now->tm_year + 1900;
}

