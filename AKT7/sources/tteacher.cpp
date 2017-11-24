//
//  tteacher.cpp
//  AKT7
//
//  Created by Michael Radzieda on 24.11.17.
//  Copyright © 2017 de.TeamBox. All rights reserved.
//

#include "tteacher.h"

TTeacher::TTeacher(int personalNr, TPerson* person) : TPerson(person) {
    this->PersonalNr = personalNr;
}

void TTeacher::print() {
    cout << TPerson::Name << "(" << this->PersonalNr << ")";
}
