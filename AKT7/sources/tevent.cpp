//
//  tevent.cpp
//  AKT7
//
//  Created by Michael Radzieda on 01.11.17.
//  Copyright © 2017 de.TeamBox. All rights reserved.
//

#include "tevent.h"

using namespace std;

TEvent::TEvent(string name, TPerson* teacher, TRoom* room, TBlock* block, TWeekday weekday, short period)
: Name(name), Teacher(teacher), Room(room), Block(block), Weekday(weekday), Period(period) {
}

void TEvent::print() {
    cout << WEEKDAY[Weekday] << "\t\t";
    Block->print();
    cout << "\t\t" << Name << "\t" << Teacher->getName() << "\t" << Room->getName();
}
