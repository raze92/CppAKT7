//
//  tstudy.cpp
//  AKT7
//
//  Created by Michael Radzieda on 24.11.17.
//  Copyright © 2017 de.TeamBox. All rights reserved.
//

#include "tstudy.h"

using namespace std;

// Constructor
TStudy::TStudy() { }

TStudy::TStudy(string name, bool nc, short nrOfTerms) {
    this->Name = name;
    this->NC = nc;
    this->NrOfTerms = nrOfTerms;
}

// Getter
string TStudy::getName() {
    return Name;
}

// Load
void TStudy::load(ifstream *dataStream) {
    while(!dataStream->eof()) {
        string tag = XmlUtils::getNextXmlTag(dataStream);
        if(tag == "/study") {
            return;
        } else if(tag == "name") {
            string name = XmlUtils::getContentUntilCloseTag(dataStream, "/name");
            this->Name = name;
            
        } else if(tag == "nc") {
            string nc = XmlUtils::getContentUntilCloseTag(dataStream, "/nc");
            this->NC = nc == "true";
            
        } else if(tag == "nrofterms") {
            string nrOfTerms = XmlUtils::getContentUntilCloseTag(dataStream, "/nrofterms");
            this->NrOfTerms = stoi(nrOfTerms);
        }
    }
}

// Print
void TStudy::print() {
    cout << Name;
    if(NC) {
        cout << "(NC)";
    }
}
