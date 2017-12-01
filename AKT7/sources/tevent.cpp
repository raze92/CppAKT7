//
//  tevent.cpp
//  AKT7
//
//  Created by Michael Radzieda on 01.11.17.
//  Copyright © 2017 de.TeamBox. All rights reserved.
//

#include "tevent.h"
#include "tbookings.h"

using namespace std;

// Constructor
TEvent::TEvent() { }

TEvent::TEvent(string name, TPerson* teacher, TRoom* room, TBlock* block, TWeekday weekday, short period)
: Name(name), Teacher(teacher), Room(room), Block(block), Weekday(weekday), Period(period) { }

// Load
void TEvent::load(ifstream* dataStream, TBookings* bookings) {
    while(!dataStream->eof()) {
        string tag = XmlUtils::getNextXmlTag(dataStream);
        if(tag == "/event") {
            return;
            
        } else if(tag == "name") {
            string name = XmlUtils::getContentUntilCloseTag(dataStream, "/name");
            this->Name = name;
            
        } else if(tag == "teacher") {
            string teacher = XmlUtils::getContentUntilCloseTag(dataStream, "/teacher");
            this->Teacher = bookings->findTeacher(teacher);
            
        } else if(tag == "room") {
            string room = XmlUtils::getContentUntilCloseTag(dataStream, "/room");
            this->Room = bookings->findRoom(room);
            
        } else if(tag == "block") {
            string block = XmlUtils::getContentUntilCloseTag(dataStream, "/block");
            this->Block = bookings->findBlock(stoi(block));
            
        } else if(tag == "weekday") {
            string weekday = XmlUtils::getContentUntilCloseTag(dataStream, "/weekday");
            this->Weekday = getWeekday(weekday);
            
        } else if(tag == "period") {
            string period = XmlUtils::getContentUntilCloseTag(dataStream, "/period");
            this->Period = stoi(period);
        }
    }
}

// Print
void TEvent::print() {
    cout << WEEKDAY[Weekday] << "\t\t";
    Block->print();
    cout << "\t\t" << Name << "\t" << Teacher->getName() << "\t" << Room->getName();
}
