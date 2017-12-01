//
//  tsubject.cpp
//  AKT7
//
//  Created by Michael Radzieda on 24.11.17.
//  Copyright © 2017 de.TeamBox. All rights reserved.
//

#include "tsubject.h"

// Constructor
TSubject::TSubject() { }

TSubject::TSubject(string Name, int subjectNr) {
    this->Name = Name;
    this->SubjectNr = subjectNr;
}

// Destructor
TSubject::~TSubject() {
    cout << "\tVeranstaltungen freigeben ... ";
    for(auto *event : Events) {
        delete event;
    }
    cout << "ok" << endl;
}

// Getter
string TSubject::getName() {
    return Name;
}

// Add
void TSubject::addEvent(TEvent* event) {
    Events.push_back(event);
}

// Load
void TSubject::load(ifstream* dataStream, TBookings* bookings) {
    while(!dataStream->eof()) {
        string tag = XmlUtils::getNextXmlTag(dataStream);
        if(tag == "/subject") {
            return;
            
        } else if(tag == "name") {
            string name = XmlUtils::getContentUntilCloseTag(dataStream, "/name");
            this->Name = name;
            
        } else if(tag == "subjectnr") {
            string subjectNr = XmlUtils::getContentUntilCloseTag(dataStream, "/subjectnr");
            this->SubjectNr = stoi(subjectNr);
            
        } else if(tag == "event") {
            TEvent* event = new TEvent();
            event->load(dataStream, bookings);
            this->Events.push_back(event);
        }
    }
}

// Print
void TSubject::print() {
    cout << Name << "(" << SubjectNr << ")";
}

