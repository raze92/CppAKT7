//
//  tevents.h
//  AKT7
//
//  Created by Michael Radzieda on 01.11.17.
//  Copyright © 2017 de.TeamBox. All rights reserved.
//

#ifndef tevents_h
#define tevents_h

#include <iostream>
#include <vector>
#include "tevent.h"

class TEvents {
public:
    void addEvent(TEvent* event);
    void print();
    
private:
    vector<TEvent*> Events;
};

#endif /* tevents_h */
