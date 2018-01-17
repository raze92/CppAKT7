//
//  tdate.cpp
//  AKT7
//
//  Created by Michael Radzieda on 07.10.17.
//  Copyright © 2017 de.TeamBox. All rights reserved.
//

#include "tdate.h"

using namespace std;

// Constructor
TDate::TDate() {
    setDate();
}

TDate::TDate(unsigned short day, unsigned short month, unsigned short year) {
    if(day > 31)
        throw invalid_argument("Invalid day value");
    if(month > 12)
        throw invalid_argument("Invalid month value");
    
    this->Day = day;
    this->Month = month;
    this->Year = year;
}

// Getter
unsigned short TDate::getDay() {
    return Day;
}
unsigned short TDate::getMonth() {
    return Month;
}
unsigned short TDate::getYear() {
    return Year;
}

// Setter
void TDate::setDate(unsigned short day, unsigned short month, unsigned short year) {
    if(day > 31)
        throw invalid_argument("Invalid day value");
    if(month > 12)
        throw invalid_argument("Invalid month value");
    
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

void TDate::setDay(unsigned short day) {
    if(day > 31)
        throw invalid_argument("Invalid day value");
    
    this->Day = day;
}

void TDate::setMonth(unsigned short month) {
    if(month > 12)
        throw invalid_argument("Invalid month value");
    
    this->Month = month;
}

void TDate::setYear(unsigned short year) {
    this->Year = year;
}

// Load
void TDate::load(ifstream* dataStream, string closingTag) {
    while(!dataStream->eof()) {
        string tag = XmlUtils::getNextXmlTag(dataStream);
        if(tag == closingTag) {
            return;
        } else if(tag == "day") {
            string day = XmlUtils::getContentUntilCloseTag(dataStream, "/day");
            this->Day = stoi(day);
        } else if(tag == "month") {
            string month = XmlUtils::getContentUntilCloseTag(dataStream, "/month");
            this->Month = stoi(month);
        } else if(tag == "year") {
            string year = XmlUtils::getContentUntilCloseTag(dataStream, "/year");
            this->Year = stoi(year);
        }
    }
}

// Print
void TDate::print() {
    cout << setfill('0') << setw(2) << Day << '.';
    cout << setfill('0') << setw(2) << Month << '.';
    cout << Year;
}

// Operator
ostream& operator<<(ostream& os, const TDate& dt) {
    os << setfill('0') << setw(2) << dt.Day << '.';
    os << setfill('0') << setw(2) << dt.Month << '.';
    os << dt.Year;
    return os;
}
