#include "utilities.h"
#include <stdlib.h>
#include <time.h>

int randomWithLimits(int lower, int upper){ //genererer tilfeldig tall mellom nedre og øvre grense
    
    int d = upper - lower + 1;
    int rand1 = rand() %  d + lower;
    return rand1;

};