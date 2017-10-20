//
//  ttime.cpp
//  AKT7
//
//  Created by Michael Radzieda on 07.10.17.
//  Copyright © 2017 de.TeamBox. All rights reserved.
//

#include "ttime.h"

// Constructor
TTime::TTime(unsigned short hour, unsigned short minute, unsigned short second) {
    if(hour > 23)
        throw std::invalid_argument("Invalid hour value");
    if(minute > 59)
        throw std::invalid_argument("Invalid minute value");
    if(second > 59)
        throw std::invalid_argument("Invalid second value");
    
    this->Hour = hour;
    this->Minute = minute;
    this->Second = second;
}

TTime::TTime() {
    setTime();
}

// Getter
unsigned short TTime::getHour() {
    return this->Hour;
}
unsigned short TTime::getMinute() {
    return this->Minute;
}
unsigned short TTime::getSecond() {
    return this->Second;
}


// Setter
void TTime::setTime(unsigned short hour,unsigned short minute,unsigned short second) {
    if(hour > 23)
        throw std::invalid_argument("Invalid hour value");
    if(minute > 59)
        throw std::invalid_argument("Invalid minute value");
    if(second > 59)
        throw std::invalid_argument("Invalid second value");
    
    this->Hour = hour;
    this->Minute = minute;
    this->Second = second;
}

void TTime::setTime() {
    time_t t = time(0);
    struct tm * now = localtime(&t);
    this->Hour = now->tm_hour;
    this->Minute = now->tm_min;
    this->Second = now->tm_sec;
}

void TTime::setHour(unsigned short hour) {
    if(hour > 23)
        throw std::invalid_argument("Invalid hour value");
    
    Hour = hour;
}

void TTime::setMinute(unsigned short minute) {
    if(minute > 59)
        throw std::invalid_argument("Invalid minute value");
    Minute = minute;
}

void TTime::setSecond(unsigned short second) {
    if(second > 59)
        throw std::invalid_argument("Invalid second value");
    Second = second;
}

// Print
void TTime::print() {
    std::cout << std::setfill('0') << std::setw(2) << Hour << ':';
    std::cout << std::setfill('0') << std::setw(2) << Minute;
    if(Second != 0) {
        std::cout << ':' << std::setfill('0') << std::setw(2) << Second;
    }
}
