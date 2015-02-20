//
//  main.cpp
//  Oving5
//
//  Created by fredrik on 13/02/15.
//  Copyright (c) 2015 fredrik. All rights reserved.
//

#include <iostream>
#include "Matrix2x2.h"
#include "Vector2.h"

using namespace std;



int main() {
    
    bool check;
    check = true;

    double ka,kb,kc,kd,kp,kq;
    Vector2 kx;
    cout << "LINJÆRE LIGNINGSSYSTEMER" << endl << "* * VERSION 1.0 Beta 2 * *" << endl;
    cout << "ax + by = p" << endl << "cx + dy = q" << endl;
    cout << "Ax = b" << endl;
    
    while (check) {
    
    cout << "Skriv inn:" << endl;
    cout << "a: ";
    cin >> ka;
    cout << "b: ";
    cin >> kb;
    cout << "p: ";
    cin >> kp;
    cout << "c: ";
    cin >> kc;
    cout << "d: ";
    cin >> kd;
    cout << "q: ";
    cin >> kq;
    
    Matrix2x2 A(ka, kb, kc, kd);
    cout << "Matrise A\n" << A << endl;
    Vector2 b(kp, kq);
    cout << "Vektor b\n" << b << endl;
    kx = A.inverse() * b;
        
    cout << "inverse: " << A.inverse() << endl;
    cout << "Løsningen er:\n" << kx << endl;
    cout << "vil du avslutte? 0/1";
    cin >> check;
    
    }
    
}
