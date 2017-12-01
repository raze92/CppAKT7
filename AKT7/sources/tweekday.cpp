//
//  tweekday.cpp
//  AKT7
//
//  Created by Michael Radzieda on 01.12.17.
//  Copyright © 2017 de.TeamBox. All rights reserved.
//

#include "tweekday.h"

TWeekday getWeekday(string weekday) {
    for(int i = 0; i < (sizeof(WEEKDAY)/sizeof(*WEEKDAY)); i++) {
        if(WEEKDAY[i] == weekday) {
            return static_cast<TWeekday>(i);
        }
    }
    return NoDay;
}
