//
//  tschedule.h
//  AKT7
//
//  Created by Michael Radzieda on 12.01.18.
//  Copyright © 2018 de.TeamBox. All rights reserved.
//

#ifndef tschedule_h
#define tschedule_h

#include <string>
#include <iostream>
#include "tevent.h"

class TSchedule {
public:
    void reset(std::string title);
    void addEvent(TEvent* event);
    
    friend ostream& operator<<(ostream& os, const TSchedule& dt);
private:
    std::string Title;
    TEvent* Schedule[6][8];
};

#endif /* tschedule_h */
