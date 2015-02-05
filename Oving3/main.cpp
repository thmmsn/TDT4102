//
//  main.cpp
//  Øving:   3
//  Uke  :   6
//  Created by fredrik thommesen on 03/02/15.
//  Copyright (c) 2015 fredrik. All rights reserved.
//

#include <iostream>
#include "choiceMenu.h"

using namespace std;

int main(){
    srand(time(NULL));
    int choice = 1;
    while(choice != 0){
        printMenu();
        choice = inputChoice();
        executeChoice(choice);
//        choice = waitForInput();
//        executeChoice(choice);

    }
}

