//
//  tteacher.cpp
//  AKT7
//
//  Created by Michael Radzieda on 24.11.17.
//  Copyright © 2017 de.TeamBox. All rights reserved.
//

#include "tteacher.h"

// Constructor
TTeacher::TTeacher() : TPerson() {
    this->PersonalNr = 0;
}

TTeacher::TTeacher(int personalNr, TPerson* person) : TPerson(person) {
    this->PersonalNr = personalNr;
}

//Destructor
TTeacher::~TTeacher() {
    cout << "Dozent freigegeben: " << TPerson::Name;
}

// Getter
int TTeacher::getPersonalNr() {
    return PersonalNr;
}

// Load
void TTeacher::load(ifstream* dataStream) {
    while(!dataStream->eof()) {
        string tag = XmlUtils::getNextXmlTag(dataStream);
        if(tag == "/teacher") {
            return;
            
        } else if(tag == "name") {
            string name = XmlUtils::getContentUntilCloseTag(dataStream, "/name");
            this->Name = name;
            
        } else if(tag == "address") {
            this->Address.load(dataStream);
            
        } else if(tag == "birthday") {
            this->Birthday.load(dataStream, "/birthday");
            
        } else if(tag == "personalnr") {
            string personalnr = XmlUtils::getContentUntilCloseTag(dataStream, "/personalnr");
            this->PersonalNr = stoi(personalnr);
        }
    }
}

// Print
void TTeacher::print() {
    cout << TPerson::Name << " (PersNr. " << this->PersonalNr << ")";
}
