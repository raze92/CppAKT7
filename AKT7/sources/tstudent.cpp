//
//  tstudent.cpp
//  AKT7
//
//  Created by Michael Radzieda on 24.11.17.
//  Copyright © 2017 de.TeamBox. All rights reserved.
//

#include "tstudent.h"

TStudent::TStudent(int matriculationNr, unsigned short term, short credits, TStudy* study, TPerson* person)
: TPerson(person) {
    this->MatriculationNr = matriculationNr;
    this->Term = term;
    this->Credits = credits;
    this->Study = study;
}

void TStudent::print() {
    cout << TPerson::Name << "(";
    TPerson::Birthday.print();
    cout <<  ", " << this->MatriculationNr << ")";
}
