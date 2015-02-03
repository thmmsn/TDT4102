//
//  utilities.cpp
//  Oving3
//
//  Created by fredrik on 03/02/15.
//  Copyright (c) 2015 fredrik. All rights reserved.
//

#include "utilities.h"
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <array>
using namespace std;

int randomWithLimits(int lower, int upper){ //genererer tilfeldig tall mellom nedre og øvre grense
    
    int d = upper - lower + 1;
    int rand1 = rand() %  d + lower;
    return rand1;

}

int swapNumbers(int num1, int num2){
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
    cout << num1 << " " << num2 << endl;
    return 0;
}

void printArray(int tabell, int size){
    
    for( int i =0; i<= size(); i++){
        cout << tabell.at(i) << endl;
    }
    
    
    
    
}