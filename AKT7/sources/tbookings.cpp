//
//  tbookings.cpp
//  AKT7
//
//  Created by Michael Radzieda on 30.11.17.
//  Copyright © 2017 de.TeamBox. All rights reserved.
//

#include "tbookings.h"

using namespace std;

// Constructor
TBookings::TBookings(string filename) {
    ifstream inf;
    inf.open(filename);
    if(!inf) {
        cout << "Can't open File for read!" << endl;
        exit(1);
    }
    string line;
    while(!inf.eof())
    {
        string tag = XmlUtils::getNextXmlTag(&inf);
        if(tag == "data") {
            while(!inf.eof())
            {
                tag = XmlUtils::getNextXmlTag(&inf);
                
                if(tag == "/data") {
                    continue;
                    
                } else if(tag == "room") {
                    TRoom* room = new TRoom();
                    room->load(&inf);
                    this->Rooms.push_back(room);
                    
                } else if(tag == "block") {
                    TBlock* block = new TBlock();
                    block->load(&inf);
                    this->Blocks.push_back(block);
                    
                } else if(tag == "study") {
                    TStudy* study = new TStudy();
                    study->load(&inf);
                    this->Studies.push_back(study);
                    
                } else if(tag == "student") {
                    TStudent* student = new TStudent();
                    student->load(&inf, this);
                    this->Students.push_back(student);
                    
                } else if(tag == "teacher") {
                    TTeacher* teacher = new TTeacher();
                    teacher->load(&inf);
                    this->Teachers.push_back(teacher);
                    
                } else if(tag == "subject") {
                    TSubject* subject = new TSubject();
                    subject->load(&inf, this);
                    this->Subjects.push_back(subject);
                    
                } else if(tag == "booking") {
                    TBooking* booking = new TBooking();
                    booking->load(&inf, this);
                    this->Bookings.push_back(booking);
                }
            }
        }
    }
    cout << "Datei wurde erfolgreich eingelesen!" << endl << endl;
}

// Destructor
TBookings::~TBookings() {
    cout << "Bloecke freigeben ... ";
    for(auto *block : Blocks) {
        delete block;
    }
    cout << "ok" << endl;
    
    cout << "Raeume freigeben ... ";
    for(auto *room : Rooms) {
        delete room;
    }
    cout << "ok" << endl;
    
    cout << "Studiengaenge freigeben ... ";
    for(auto *study : Studies) {
        delete study;
    }
    cout << "ok" << endl;
    
    cout << "Studenten freigeben ... ";
    for(auto *student : Students) {
        delete student;
    }
    cout << "ok" << endl;
    
    cout << "Dozenten freigeben ... ";
    for(auto *teacher : Teachers) {
        delete teacher;
    }
    cout << "ok" << endl;
    
    cout << "Faecher freigeben ... " << endl;
    for(auto *subject : Subjects) {
        delete subject;
    }
    cout << "Faecher freigeben ... ok" << endl;
    
    cout << "Dozenten freigeben ... ";
    for(auto *booking : Bookings) {
        delete booking;
    }
    cout << "ok" << endl;
}


TBlock* TBookings::findBlock(int blockNr) {
    for(auto *block : Blocks) {
        if(block->getBlockNr() == blockNr) {
            return block;
        }
    }
    return NULL;
}

TRoom* TBookings::findRoom(string name) {
    for(auto *room : Rooms) {
        if(room->getName() == name) {
            return room;
        }
    }
    return NULL;
}

TStudy* TBookings::findStudy(string name) {
    for(auto *study : Studies) {
        if(study->getName() == name) {
            return study;
        }
    }
    return NULL;
}

TStudent* TBookings::findStudent(string name)  {
    for(auto *student : Students) {
        if(student->getName() == name) {
            return student;
        }
    }
    return NULL;
}

TTeacher* TBookings::findTeacher(string name)  {
    for(auto *teacher : Teachers) {
        if(teacher->getName() == name) {
            return teacher;
        }
    }
    return NULL;
}

TSubject* TBookings::findSubject(string name)  {
    for(auto *subject : Subjects) {
        if(subject->getName() == name) {
            return subject;
        }
    }
    return NULL;
}

// Print
void TBookings::print() {
    cout << "Belegungen:" << endl << endl;
    for(auto *booking : Bookings) {
        booking->print();
        cout << endl;
    }
}
