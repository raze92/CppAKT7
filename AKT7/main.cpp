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
    TBookings Belegungen("belegungen.xml");
    Belegungen.printPersons();
    cout << endl;
    Belegungen.printBookings();
    return 0;
}
