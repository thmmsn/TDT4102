//
//  menu.cpp
//  Oving3
//
//  Created by fredrik on 03/02/15.
//  Copyright (c) 2015 fredrik. All rights reserved.
//

#include "choiceMenu.h"
#include "tests.h"
#include "utilities.h"
#include <iostream>

using namespace std;

void printMenu(){
    string list[] = {"AVBRYT", "testPart1()", "swapNumbers", "randomWithLimits()" "testPart2()"};

    for (int i = 0; i<=4; i++){
        cout << i << ":\t" << list[i] << endl;
    }
    
    cout << "Velg: ";
}

int inputChoice(){
    int choice;
    cin >> choice;
    return choice;
}

void executeChoice(int choice){
    switch(choice){
        case 0:
            cout << "Avslutter. . ." << endl;
            break;
        case 1:
            testPart1();
            break;
        case 2:
            cout << "skriv inn to tall";
            int num1, num2;
            cin >> num1;
            cin >> num2;
            swapNumbers(num1, num2);
            break;
        case 3:
            cout << "Nedre grense, øvre grense" << endl;
            int low, upp;
            cin >> low;
            cin >> upp;
            randomWithLimits(low, upp);
            break;
        case 4:
            testPart2();
            break;
            
    
    }
}