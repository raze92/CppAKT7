//
//  tschedule.cpp
//  AKT7
//
//  Created by Michael Radzieda on 12.01.18.
//  Copyright © 2018 de.TeamBox. All rights reserved.
//

#include "tschedule.h"

using namespace std;

void TSchedule::reset(string title) {
    this->Title = title;
    for(int i = 0; i < 6; i++) {
        for(int j = 0; j < 8; j++) {
            this->Schedule[i][j] = nullptr;
        }
    }
}

void TSchedule::addEvent(TEvent* event) {
    TBlock* block = event->getBlock();
    TWeekday weekday = event->getWeekday();
    this->Schedule[weekday - 1][block->getBlockNr() - 1] = event;
}

string getScheduleLine() {
    string line = "|-----|";
    for(int i = 0; i < 6; i++) {
        line += "------------------|";
    }
    return line;
}

string printScheduleHead() {
    string header = getScheduleLine() + "\n";
    header += "|     |";
    for(int i = 1; i < 7; i++) {
        header += "        " + WEEKDAY_SHORT[i] + "        |";
    }
    header += "\n" + getScheduleLine();
    return header;
}

ostream& operator<<(ostream& os, const TSchedule& dt) {
    os << dt.Title << ":" << endl;
    os << printScheduleHead() << endl;
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 3; j++) {
            if(j == 1) {
                os << "|  " << i+1 << "  |";
            } else {
                os << "|     |";
            }
            for(int k = 0; k < 6; k++) {
                os << " " << std::setfill(' ');
                os.width(17);
                if(dt.Schedule[k][i] == nullptr) {
                    os << std::left << " ";
                } else {
                    switch (j) {
                        case 0:
                            os << std::left << dt.Schedule[k][i]->getName();
                            break;
                        case 1:
                            os << std::left << dt.Schedule[k][i]->getTeacher()->getName();
                            break;
                        case 2:
                            os << std::left << dt.Schedule[k][i]->getRoom()->getName();
                            break;
                        default:
                            os << std::left << "ERROR";
                            break;
                    }
                }
                os <<"|";
            }
            os << endl;
        }
        os << getScheduleLine() << endl;
    }
    return os;
}
