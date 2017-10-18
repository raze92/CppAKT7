//
//  main.cpp
//  AKT7
//
//  Created by Michael Radzieda on 07.10.17.
//  Copyright © 2017 de.TeamBox. All rights reserved.
//

#include <iostream>

using namespace std;

#include "tdate.h"
#include "ttime.h"
#include "tblock.h"
#include "troom.h"
#include "taddress.h"
#include "tperson.h"

int main()
{
    int i;
    
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
    TBlock *Bloecke[7] = { &Block1, &Block2, &Block3, &Block4, &Block5, &Block6, &Block7 };
    
    // Raeume
    TRoom D114("D 114", "Haus Bauswesen", 28);
    TRoom D117("H3 (D 117)", "Haus Bauwesen", 104);
    TRoom D419("D 419", "Haus Bauswesen", 40);
    TRoom *Raeume[3] = { &D114, &D117, &D419 };
    
    // Personen
    TPerson Student1("Anna Albrecht", "Albrechtstr.", "15a", 12045, "Berlin", 15, 9, 1989);
    TPerson Student2("Detlef Dicht", "Dichterweg", "27", 29031, "Vordertupfingen", 27, 5, 1991);
    TPerson Student3("Frank Faust", "Goethestr.", "3-5", 12345, "Berlin", 3, 11, 1987);
    TPerson Student4("Max Muster", "Meistergasse", "23", 19885, "Hintertupfingen", 19, 7, 1985);
    TAddress *Adressen[4] = { &(Student1.getAddress()), &(Student2.getAddress()),
        &(Student3.getAddress()), &(Student4.getAddress()) };
    TPerson *Studenten[4] = { &Student1, &Student2, &Student3, &Student4 };
    
    cout << "\nKlasse TBlock:" << endl;
    for (i = 0; i < 7; i++)
    {
        cout << "Block Nr. " << Bloecke[i]->getBlockNr() << " (";
        Bloecke[i]->print();
        cout << ")" << endl;
    }
    
    cout << "\nKlasse TRoom:" << endl;
    for (i = 0; i < 3; i++)
    {
        Raeume[i]->print();
        cout << endl;
    }
    
    cout << "\nKlasse TAddress:" << endl;
    for (i = 0; i < 4; i++)
    {
        Adressen[i]->print();
        cout << endl;
    }
    
    cout << "\nKlasse TPerson:" << endl;
    for (i = 0; i < 4; i++)
    {
        Studenten[i]->print();
        cout << endl;
    }
    
    return 0;
}

