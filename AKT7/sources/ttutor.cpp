//
//  ttutor.cpp
//  AKT7
//
//  Created by Michael Radzieda on 28.12.17.
//  Copyright © 2017 de.TeamBox. All rights reserved.
//

#include "ttutor.h"

using namespace std;

// Constructor
TTutor::TTutor() {
    
}

// Destructor
TTutor::~TTutor() {
    cout << "\tTutor freigegeben: " << TPerson::Name << endl;
}

// Load
void TTutor::load(ifstream *dataStream, TBookings* bookings) {
    while(!dataStream->eof()) {
        string tag = XmlUtils::getNextXmlTag(dataStream);
        if(tag == "/tutor") {
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
            
        } else if(tag == "personalnr") {
            string personalnr = XmlUtils::getContentUntilCloseTag(dataStream, "/personalnr");
            this->PersonalNr = stoi(personalnr);
            
        } else if(tag == "nroftermsastutor") {
            string nroftermsastutor = XmlUtils::getContentUntilCloseTag(dataStream, "/nroftermsastutor");
            this->NrOfTemrsAsTutor = stoi(nroftermsastutor);
            
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
void TTutor::print() {
    cout << TPerson::Name << "(* ";
    TPerson::Birthday.print();
    cout <<  "; MatrNr. " << TStudent::MatriculationNr;
    cout <<  "; PersNr. " << TTeacher::PersonalNr << ")";
}
void TTutor::print(ostream& os) {
    os << TPerson::Name << "(* " << TPerson::Birthday;
    os <<  "; MatrNr. " << TStudent::MatriculationNr;
    os <<  "; PersNr. " << TTeacher::PersonalNr << ")";
}
