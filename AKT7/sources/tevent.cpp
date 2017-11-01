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
    string weekdayStr;
    switch (Weekday) {
        case Mo:
            weekdayStr = "Montag";
            break;
        case Di:
            weekdayStr = "Dienstag";
            break;
        case Mi:
            weekdayStr = "Mittwoch";
            break;
        case Do:
            weekdayStr = "Donnerstag";
            break;
        case Fr:
            weekdayStr = "Freitag";
            break;
        case Sa:
            weekdayStr = "Samstag";
            break;
        case So:
            weekdayStr = "Sonntag";
            break;
        default:
            weekdayStr = "???";
            break;
    }
    cout << weekdayStr << "\t\t";
    Block->print();
    cout << "\t\t" << Name << "\t" << Teacher->getName() << "\t" << Room->getName();
}
