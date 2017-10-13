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
    
    this->hour = hour;
    this->minute = minute;
    this->second = second;
}

TTime::TTime() {
    time_t t = time(0);
    struct tm * now = localtime( & t );
    this->hour = now->tm_hour;
    this->minute = now->tm_min;
    this->second = now->tm_sec;
}

// Getter
void TTime::setTime(unsigned short hour,unsigned short minute,unsigned short second) {
    if(hour > 23)
        throw std::invalid_argument("Invalid hour value");
    if(minute > 59)
        throw std::invalid_argument("Invalid minute value");
    if(second > 59)
        throw std::invalid_argument("Invalid second value");
    
    this->hour = hour;
    this->minute = minute;
    this->second = second;
}

void TTime::setHour(unsigned short hour) {
    if(hour > 23)
        throw std::invalid_argument("Invalid hour value");
    
    this->hour = hour;
}

void TTime::setMinute(unsigned short minute) {
    if(minute > 59)
        throw std::invalid_argument("Invalid minute value");
    this->minute = minute;
}

void TTime::setSecond(unsigned short second) {
    if(second > 59)
        throw std::invalid_argument("Invalid second value");
    this->second = second;
}

// Setter
short TTime::getHour() {
    return this->hour;
}
short TTime::getMinute() {
    return this->minute;
}
short TTime::getSecond() {
    return this->second;
}

// Print
void TTime::print() {
    if(second == 0) {
        printf("%02u:%02u", hour, minute);
    } else {
        printf("%02u:%02u:%02u", hour, minute,second);
    }
}
