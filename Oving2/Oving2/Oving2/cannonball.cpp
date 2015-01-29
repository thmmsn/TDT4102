#include "cannonball.h"


double acclY(){ // 1a returnerer akselerasjonen i Y-retning
    const double AKSELY = 9.81;
    
    return AKSELY;
    
}

double velY(double initVelocity, double time){ // 1b returnerer farten i y retning
    double fartY;

    
    fartY = initVelocity + acclY() * time;
    return fartY;

}

double positionX(double initVelocity, double time){ //1d regner ut posisjonen i X retning
    int startPosisjon = 0;
    double posisjonX = startPosisjon + initVelocity * time + (acclY() * time * time / 2);
    return posisjonX;
}

double positionY(double initVelocity, double time){ //1d regner ut posisjonen i Y retning
    double posisjonY;
    double posisjonY = startPosisjon + initVelocity * time + ( acclY() * time * time / 2);
    return posisjonY;
}

void printTime(int seconds){ // tar inn tid i sekunder og returnerer ikke noe
    
    const int secs_in_hour = 3600;
    const int secs_in_min = 60;
    
    double timer;
    double minutter;
    double sekunder;
    
    timer = seconds / secs_in_hour;
    seconds = seconds % secs_in_hour;
    minutter = seconds / secs_in_min;
    seconds = seconds % secs_in_min;
    sekunder = seconds;
    
    cout << timer << ":" << minutter << ":" << sekunder;

}

int FlightTime(double initVelocity){ // tar inn startfarten i Y retning og returnerer flytiden i sekunder
    
}
               
               
               
               
               
