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

int main()
{
    TDate D1, D2(3, 10, 2017);
    TTime T1, T2(14, 15), T3(6, 17, 43);
    
    cout << "\nKlasse TDate:" << endl;
    cout << "Standardkonstruktor Heutiges Datum D1:        ";   D1.print();   cout << endl;
    cout << "Konstruktor         Tag der dt. Einheit (D2): ";   D2.print();   cout << endl;
    
    cout << "\nKlasse TTime:" << endl;
    cout << "Standardkonstruktor Aktuelle Uhrzeit T1:      ";   T1.print();   cout << endl;
    cout << "Konstruktor         Beginn der SU (T2):       ";   T2.print();   cout << endl;
    cout << "Konstruktor         Zeit zum Aufstehen (T3):  ";   T3.print();   cout << endl;
    
    return 0;
}

