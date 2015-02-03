//
//  tests.cpp
//  Oving3
//
//  Created by fredrik on 03/02/15.
//  Copyright (c) 2015 fredrik. All rights reserved.
//

#include "tests.h"
#include <iostream>
#include <array>

using namespace std;

int incrementByValueNumTimes(int startValue, int increment, int numTimes){
    
    for (int i = 0; i < numTimes; i++) {
        startValue += increment;
    }
    return startValue;
    
}

void testPart1(){
    int v0 = 5;
    int increment = 2;
    int iterations = 10;
    incrementByValueNumTimes(v0, increment, iterations);
    
    int result = incrementByValueNumTimes(v0, increment, iterations);
    cout << "v0: " << v0 << " increment: " << increment << " iterations: " << iterations << " result: " << result << endl;

}

void testPart2(){
    int percentages[20];
}

// Oppgave 1a returnerer    v0: 5 increment: 2 iterations: 10 result: 25
//                          Program ended with exit code: 0