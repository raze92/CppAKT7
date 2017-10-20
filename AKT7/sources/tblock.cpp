//
//  tblock.cpp
//  AKT7
//
//  Created by Michael Radzieda on 13.10.17.
//  Copyright © 2017 de.TeamBox. All rights reserved.
//

#include "tblock.h"

using namespace std;

// Constructor
TBlock::TBlock(short blockNr, TTime begin) {
    this->BlockNr = blockNr;
    this->Begin = begin;
}

// Getter
unsigned short TBlock::getBlockNr() {
    return BlockNr;
}
TTime TBlock::getBegin() {
    return Begin;
}

TTime TBlock::getEnd() {
    unsigned short endHour = Begin.getHour();
    unsigned short endMinute = Begin.getMinute() + 90;
    endHour += endMinute / 60;
    endMinute %= 60;
    endHour %= 24;
    return TTime(endHour, endMinute);
}

// Setter
void TBlock::setBlockNr(unsigned short blockNr) {
    this->BlockNr = blockNr;
}
void TBlock::setBegin(TTime begin) {
    this->Begin = begin;
}

// Print
void TBlock::print() {
    Begin.print();
    cout << " - ";
    getEnd().print();
}
