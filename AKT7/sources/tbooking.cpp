//
//  tbooking.cpp
//  AKT7
//
//  Created by Michael Radzieda on 30.11.17.
//  Copyright © 2017 de.TeamBox. All rights reserved.
//

#include "tbooking.h"
#include "tbookings.h"

using namespace std;

// Constructor
TBooking::TBooking() { }

TBooking::TBooking(int bookingNr,
                   TSubject* subject,
                   TStudent* student,
                   TDate* bookingDate,
                   TTime* bookingTime)
                    :
                    BookingNr(bookingNr),
                    Subject(subject),
                    Student(student),
                    BookingDate(bookingDate),
                    BookingTime(bookingTime) {}

TPerson* TBooking::getStudent() {
    return this->Student;
}

TSubject* TBooking::getSubject() {
    return this->Subject;
}

// Load
void TBooking::load(ifstream* dataStream, TBookings* bookings) {
    while(!dataStream->eof()) {
        string tag = XmlUtils::getNextXmlTag(dataStream);
        if(tag == "/booking") {
            return;
            
        } else if(tag == "bookingnr") {
            string bookingNr = XmlUtils::getContentUntilCloseTag(dataStream, "/bookingnr");
            this->BookingNr = stoi(bookingNr);
            
        } else if(tag == "subject") {
            string subject = XmlUtils::getContentUntilCloseTag(dataStream, "/subject");
            this->Subject = bookings->findSubject(subject);
            
        } else if(tag == "student") {
            string student = XmlUtils::getContentUntilCloseTag(dataStream, "/student");
            this->Student = bookings->findPerson(student);
            
        }  else if(tag == "bookingdate") {
            this->BookingDate = new TDate();
            this->BookingDate->load(dataStream, "/bookingdate");
            
        }  else if(tag == "bookingtime") {
            this->BookingTime = new TTime();
            this->BookingTime->load(dataStream, "/bookingtime");
        }
    }
}

// Print
void TBooking::print() {
    cout << "Belegung Nr. " << setw(2) << BookingNr << endl;
    cout << "Am ";
    BookingDate->print();
    cout << " um ";
    BookingTime->print();
    cout << endl << "hat ";
    Student->print();
    cout << endl << "das Fach \'" << Subject->getName() << "\' belegt." << endl;
    
}
