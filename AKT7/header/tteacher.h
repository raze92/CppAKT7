//
//  tteacher.h
//  AKT7
//
//  Created by Michael Radzieda on 24.11.17.
//  Copyright © 2017 de.TeamBox. All rights reserved.
//

#ifndef tteacher_h
#define tteacher_h

#include "tperson.h"
#include <iostream>

using namespace std;

class TTeacher : TPerson {
public:
    TTeacher(int personalNr, TPerson* person);
    void print();
private:
    int PersonalNr;
};

#endif /* tteacher_h */
