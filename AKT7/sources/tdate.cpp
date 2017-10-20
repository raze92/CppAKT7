//
//  tdate.cpp
//  AKT7
//
//  Created by Michael Radzieda on 07.10.17.
//  Copyright © 2017 de.TeamBox. All rights reserved.
//

#include "tdate.h"

// Constructor
TDate::TDate(unsigned short day, unsigned short month, unsigned short year) {
    if(day > 31)
        throw std::invalid_argument("Invalid day value");
    if(month > 12)
        throw std::invalid_argument("Invalid month value");
    
    this->Day = day;
    this->Month = month;
    this->Year = year;
}

TDate::TDate() {
    setDate();
}

// Getter
short TDate::getDay() {
    return Day;
}
short TDate::getMonth() {
    return Month;
}
short TDate::getYear() {
    return Year;
}

// Setter
void TDate::setDate(unsigned short day, unsigned short month, unsigned short year) {
    if(day > 31)
        throw std::invalid_argument("Invalid day value");
    if(month > 12)
        throw std::invalid_argument("Invalid month value");
    
    this->Day = day;
    this->Month = month;
    this->Year = year;
}

void TDate::setDate() {
    time_t t = time(0);
    struct tm * now = localtime(&t);
    this->Day = now->tm_mday;
    this->Month = now->tm_mon + 1;
    this->Year = now->tm_year + 1900;
}

void TDate::setDay(unsigned short day) {if(day > 31)
    throw std::invalid_argument("Invalid day value");
    
    this->Day = day;
}

void TDate::setMonth(unsigned short month) {
    if(month > 12)
        throw std::invalid_argument("Invalid month value");
    
    this->Month = month;
}

void TDate::setYear(unsigned short year) {
    this->Year = year;
}

// Print
void TDate::print() {
    std::cout << std::setfill('0') << std::setw(2) << Day << '.';
    std::cout << std::setfill('0') << std::setw(2) << Month << '.';
    std::cout << std::setfill('0') << std::setw(2) << Year;
}
