//
//  ttime.cpp
//  AKT7
//
//  Created by Michael Radzieda on 07.10.17.
//  Copyright © 2017 de.TeamBox. All rights reserved.
//

#include "ttime.h"

using namespace std;

// Constructor
TTime::TTime() {
    setTime();
}

TTime::TTime(unsigned short hour, unsigned short minute, unsigned short second) {
    if(hour > 23)
        throw invalid_argument("Invalid hour value");
    if(minute > 59)
        throw invalid_argument("Invalid minute value");
    if(second > 59)
        throw invalid_argument("Invalid second value");
    
    this->Hour = hour;
    this->Minute = minute;
    this->Second = second;
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
        throw invalid_argument("Invalid hour value");
    if(minute > 59)
        throw invalid_argument("Invalid minute value");
    if(second > 59)
        throw invalid_argument("Invalid second value");
    
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
        throw invalid_argument("Invalid hour value");
    
    Hour = hour;
}

void TTime::setMinute(unsigned short minute) {
    if(minute > 59)
        throw invalid_argument("Invalid minute value");
    Minute = minute;
}

void TTime::setSecond(unsigned short second) {
    if(second > 59)
        throw invalid_argument("Invalid second value");
    Second = second;
}

// Load
void TTime::load(ifstream* dataStream, string closingTag) {
    bool hourSet = false;
    bool minuteSet = false;
    bool secondSet = false;
    
    while(!dataStream->eof()) {
        string tag = XmlUtils::getNextXmlTag(dataStream);
        if(tag == closingTag) {
            if(!hourSet) {
                this->Hour = 0;
            }
            if(!minuteSet) {
                this->Minute = 0;
            }
            if(!secondSet) {
                this->Second = 0;
            }
            return;
            
        } else if(tag == "hour") {
            string hour = XmlUtils::getContentUntilCloseTag(dataStream, "/hour");
            this->Hour = stoi(hour);
            hourSet = true;
            
        } else if(tag == "minute") {
            string month = XmlUtils::getContentUntilCloseTag(dataStream, "/minute");
            this->Minute = stoi(month);
            minuteSet = true;
            
        } else if(tag == "second") {
            string second = XmlUtils::getContentUntilCloseTag(dataStream, "/second");
            this->Second = stoi(second);
            secondSet = true;
            
        }
    }
}

// Print
void TTime::print() {
    cout << setfill('0') << setw(2) << Hour << ':';
    cout << setfill('0') << setw(2) << Minute;
    if(Second != 0) {
        cout << ':' << setfill('0') << setw(2) << Second;
    }
}
