//
//  main.cpp
//  AKT7
//
//  Created by Michael Radzieda on 09.11.17.
//  Copyright © 2017 de.TeamBox. All rights reserved.
//
#include <iostream>

using namespace std;

#include "tbookings.h"

int main()
{
    TBookings Belegungen("/Users/Micha/Documents/workspace/workspace-cpp/CppAKT7/AKT7/belegungen.xml");
    
    Belegungen(ofPersons);
    Belegungen(ofBookings);
    Belegungen(ofScheduleOfStudents);
    Belegungen(ofScheduleOfStudies);
    
    return 0;
}
