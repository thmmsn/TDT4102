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
    int length = 6;
    string list[] = {"AVBRYT", "testPart1()", "swapNumbers", "randomWithLimits()","testPart2()", "testPart3()", "playMastermind()"};

    for (int i = 0; i<=length; i++){
        cout << i << ":\t" << list[i] << endl;
    }
    
    cout << "Velg: ";
}
int inputChoice(){
    int choice;
    cin >> choice;
    return choice;
}
int waitForInput(){
    int choice;
    cout << "1 for å fortsette" << endl;
    cout << "0 for å avbryte" << endl;
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
        case 5:
            testPart3();
            break;
        case 6:
            //playMastermind();
            cout << "Play" << endl;
            break;
            
    
    }
}