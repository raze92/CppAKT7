//
//  tbooking.h
//  AKT7
//
//  Created by Michael Radzieda on 30.11.17.
//  Copyright © 2017 de.TeamBox. All rights reserved.
//

#ifndef tbooking_h
#define tbooking_h

#include <iostream>
#include <fstream>

#include "tsubject.h"
#include "tstudent.h"
#include "tdate.h"
#include "ttime.h"

class TBookings;

class TBooking {
public:
    // Constructor
    TBooking();
    TBooking(int bookingNr, TSubject* subject, TStudent* student, TDate* bookingDate, TTime* bookingTime);
    
    // Load
    void load(ifstream* dataStream, TBookings* bookings);
    
    // Print
    void print();
private:
    int BookingNr;
    TSubject* Subject;
    TStudent* Student;
    TDate* BookingDate;
    TTime* BookingTime;
};

#endif /* tbooking_h */
