//
//  tstudy.cpp
//  AKT7
//
//  Created by Michael Radzieda on 24.11.17.
//  Copyright © 2017 de.TeamBox. All rights reserved.
//

#include "tstudy.h"

TStudy::TStudy(string name, bool nc, short nrOfTerms) {
    this->Name = name;
    this->NC = nc;
    this->NrOfTerms = nrOfTerms;
}

void TStudy::print() {
    cout << Name;
    if(NC) {
        cout << "(NC)";
    }
}
