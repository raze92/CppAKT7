//
//  tevents.cpp
//  AKT7
//
//  Created by Michael Radzieda on 01.11.17.
//  Copyright © 2017 de.TeamBox. All rights reserved.
//

#include "tevents.h"

using namespace std;

void TEvents::addEvent(TEvent* event) {
    Events->push_back(event);
}

void TEvents::print() {
    cout << "Veranstaltungen:" << endl;
    for(int i = 0; i < Events->size(); i++) {
        cout << i + 1 << ": ";
        (*Events)[i]->print();
        cout << endl;
    }
}
