//
//  ttutor.h
//  AKT7
//
//  Created by Michael Radzieda on 28.12.17.
//  Copyright © 2017 de.TeamBox. All rights reserved.
//

#ifndef ttutor_h
#define ttutor_h

#include "tstudent.h"
#include "tteacher.h"
#include "tbookings.h"

class TTutor : public TTeacher, public TStudent {
public:
    // Constructor
    TTutor();
    
    // Destructor
    ~TTutor();
    
    // Load
    void load(ifstream *dataStream, TBookings* bookings);
    
    // Print
    void print();
    void print(ostream& os);
private:
    unsigned NrOfTemrsAsTutor;
};

#endif /* ttutor_h */
