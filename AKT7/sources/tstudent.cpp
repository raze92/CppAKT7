//
//  tstudent.cpp
//  AKT7
//
//  Created by Michael Radzieda on 24.11.17.
//  Copyright © 2017 de.TeamBox. All rights reserved.
//

#include "tstudent.h"
#include "tbookings.h"

using namespace std;

// Constructor
TStudent::TStudent() : TPerson() {
    this->MatriculationNr = 0;
    this->Term = 0;
    this->Credits = 0;
}

TStudent::TStudent(int matriculationNr, unsigned short term, short credits, TStudy* study, TPerson* person)
: TPerson(person) {
    this->MatriculationNr = matriculationNr;
    this->Term = term;
    this->Credits = credits;
    this->Study = study;
}

// Destructor
TStudent::~TStudent() {
    cout << "\tStudent freigegeben: " << TPerson::Name << endl;
}

// Getter
int TStudent::getMatriculationNr() {
    return MatriculationNr;
}

// Load
void TStudent::load(ifstream* dataStream, TBookings* bookings) {
    while(!dataStream->eof()) {
        string tag = XmlUtils::getNextXmlTag(dataStream);
        if(tag == "/student") {
            return;
            
        } else if(tag == "name") {
            string name = XmlUtils::getContentUntilCloseTag(dataStream, "/name");
            this->Name = name;
            
        } else if(tag == "address") {
            this->Address.load(dataStream);
            
        } else if(tag == "birthday") {
            this->Birthday.load(dataStream, "/birthday");
            
        } else if(tag == "matriculationnr") {
            string matriculationnr = XmlUtils::getContentUntilCloseTag(dataStream, "/matriculationnr");
            this->MatriculationNr = stoi(matriculationnr);
            
        } else if(tag == "credits") {
            string credits = XmlUtils::getContentUntilCloseTag(dataStream, "/credits");
            this->Credits = stoi(credits);
            
        } else if(tag == "study") {
            string study = XmlUtils::getContentUntilCloseTag(dataStream, "/study");
            this->Study = bookings->findStudy(study);
        }
    }
}

// Print
void TStudent::print() {
    cout << TPerson::Name << "(* ";
    TPerson::Birthday.print();
    cout <<  "; MatrNr. " << this->MatriculationNr << ")";
}
