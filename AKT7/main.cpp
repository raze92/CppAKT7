//
//  main.cpp
//  AKT7
//
//  Created by Michael Radzieda on 07.10.17.
//  Copyright © 2017 de.TeamBox. All rights reserved.
//
#include <iostream>

using namespace std;

#include "ttime.h"
#include "tblock.h"
#include "troom.h"
#include "tperson.h"
#include "tevent.h"
#include "tevents.h"
#include "tweekday.h"

int main()
{
    // Uhrzeiten
    TTime Zeit0800( 8,  0);
    TTime Zeit1000(10,  0);
    TTime Zeit1215(12, 15);
    TTime Zeit1415(14, 15);
    TTime Zeit1600(16,  0);
    TTime Zeit1745(17, 45);
    TTime Zeit1930(19, 30);
    
    // Bloecke
    TBlock Block1( 1, Zeit0800);
    TBlock Block2( 2, Zeit1000);
    TBlock Block3( 3, Zeit1215);
    TBlock Block4( 4, Zeit1415);
    TBlock Block5( 5, Zeit1600);
    TBlock Block6( 6, Zeit1745);
    TBlock Block7( 7, Zeit1930);
    
    // Raeume
    TRoom D114("D 114", "Haus Bauswesen",  28);
    TRoom D117("H3   ", "Haus Bauwesen ", 104);
    TRoom D136("H5   ", "Haus Bauwesen ", 104);
    TRoom D209("D 209", "Haus Bauwesen ",  35);
    TRoom D419("D 419", "Haus Bauswesen",  40);
    TRoom B301("B 301", "Haus Gauss    ", 100);
    
    // Personen
    TPerson Dozent1( "Kevin Kaufmann", "Kaiserstr.",    "38",  12075, "Berlin",          15,  6, 1959);
    TPerson Dozent2( "Nathan Neuling", "Neue Str.",     "7",   10777, "Berlin",           9,  9, 1969);
    TPerson Dozent3( "Sabine Sauber ", "Saubere Gasse", "1",   17001, "Auf dem Land",     3,  1, 1962);
    TPerson Dozent4( "Willi Witzig  ", "Wunderweg",     "99",  15911, "Nauen",            9, 11, 1976);
    
    // Veranstaltungen 
    TEvent Event1("SU Informatik I     ", &Dozent1, &D117, &Block2, Fr, 1);
    TEvent Event2("Ueb Informatik I    ", &Dozent1, &D114, &Block3, Fr, 2);
    TEvent Event3("Ueb Informatik I    ", &Dozent1, &D114, &Block4, Fr, 2);
    TEvent Event4("SU Mathe I          ", &Dozent2, &B301, &Block2, Mo, 1);
    TEvent Event5("Ueb Mathe I         ", &Dozent2, &D209, &Block2, Mi, 1);
    TEvent Event6("Englisch            ", &Dozent3, &D419, &Block5, Do, 1);
    TEvent Event7("SU Digitale Systeme ", &Dozent4, &D136, &Block5, Di, 1);
    TEvent Event8("Ueb Digitale Systeme", &Dozent4, &D114, &Block6, Di, 1);
    
    TEvents Veranstaltungen;
    
    Veranstaltungen.addEvent(&Event1);
    Veranstaltungen.addEvent(&Event2);
    Veranstaltungen.addEvent(&Event3);
    Veranstaltungen.addEvent(&Event4);
    Veranstaltungen.addEvent(&Event5);
    Veranstaltungen.addEvent(&Event6);
    Veranstaltungen.addEvent(&Event7);
    Veranstaltungen.addEvent(&Event8);
    
    Veranstaltungen.print();
    cout << endl;
    
    return 0;
}

