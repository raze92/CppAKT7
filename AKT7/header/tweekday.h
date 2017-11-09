//
//  tweekday.h
//  AKT7
//
//  Created by Michael Radzieda on 01.11.17.
//  Copyright © 2017 de.TeamBox. All rights reserved.
//

#ifndef tweekday_h
#define tweekday_h

#include <string>

using namespace std;

enum TWeekday {
    NoDay = 0,
    Mo = 1,
    Di = 2,
    Mi = 3,
    Do = 4,
    Fr = 5,
    Sa = 6,
    So = 7
};

const string WEEKDAY[] = {
    "NoDay",
    "Montag",
    "Dienstag",
    "Mittwoch",
    "Donnerstag",
    "Freitag",
    "Samstag",
    "Sonntag"
};



#endif /* tweekday_h */
