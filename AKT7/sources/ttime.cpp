//
//  ttime.cpp
//  AKT7
//
//  Created by Michael Radzieda on 07.10.17.
//  Copyright © 2017 de.TeamBox. All rights reserved.
//

#include "ttime.h"

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

// Getter
void TTime::setTime(short hour, short minute, short second) {
    this->hour = hour;
    this->minute = minute;
    this->second = second;
}

void TTime::setHour(short hour) {
    this->hour = hour;
}

void TTime::setMinute(short minute) {
    this->minute = minute;
}

void TTime::setSecond(short second) {
    this->second = second;
}

// Print
void TTime::print() {
    if(second == 0) {
        printf("%02d:%02d", hour, minute);
    } else {
        printf("%02d:%02d:%02d", hour, minute,second);
    }
}

// Constructor
TTime::TTime(short hour, short minute, short second) {
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
