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
void TDate::setDate(short day, short month, short year) {
    this->day = day;
    this->month = month;
    this->year = year;
}

void TDate::setDay(short day) {
    this->day = day;
}

void TDate::setMonth(short month) {
    this->month = month;
}

void TDate::setYear(short year) {
    this->year = year;
}

// Print
void TDate::print() {
    printf("%02d.%02d.%04d", day, month, year);
}

// Constructor
TDate::TDate(short day, short month, short year) {
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

