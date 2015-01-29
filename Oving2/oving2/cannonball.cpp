#include <iostream>
#include "cannonball.h"

using namespace std;

double acclX(){ // 1a returnerer akselerasjonen i Y-retning
    const double AX = 0;
    return AX;
    
}

double acclY(){ // 1a returnerer akselerasjonen i Y-retning
    const double G = -9.81;
    return G;
    
}

double velX(double initVelocity, double time){ // 1b returnerer farten i y retning
    double fartX;
    fartX = initVelocity;
    return fartX;
}

double velY(double initVelocity, double time){ // 1b returnerer farten i y retning
    double fartY = initVelocity + acclY() * time;
    return fartY;    
}

double posX(double initVelocity, double time){ //1d regner ut posisjonen i X retning
    
    double posisjonX = initVelocity * time;
    return posisjonX;
}

double posY(double initVelocity, double time){ //1d regner ut posisjonen i Y retning
    
    double posisjonY = initVelocity * time + ( acclY() * time * time / 2.0);
    return posisjonY;
}

void printTime(int seconds){ // tar inn tid i sekunder og returnerer ikke noe
    
    const int kSecsInHour = 3600;
    const int kSecsInMin = 60;
    
    double timer;
    double minutter;
    double sekunder;
    
    timer = seconds / kSecsInHour;
    seconds = seconds % kSecsInHour;
    minutter = seconds / kSecsInMin;
    seconds = seconds % kSecsInMin;
    sekunder = seconds;
    
    cout << timer << ":" << minutter << ":" << sekunder << endl;
    
}

int FlightTime(double initVelocity){ // tar inn startfarten i Y retning og returnerer flytiden i sekunder
    double time = 0;
    double d = 0.1;
    while (0 < velY(initVelocity, time)) {
        time+= d;
    }
    
    return time * 2;
    
}


// Oppgave 4 ---- - ---- -- - -

void getUserInput(double *theta, double *absVelocity){

}

double getVelocityX(theta, absVelocity){
    double fartX;
    fartX = absVelocity * Cos(theta);
    return fartX;
}

double getVelocityY(*theta, absVelocity){
    double fartY;
    fartY = absVelocity * Sin(theta);
    return fartY;
}

void getVelocityVector(theta, absVelocity, double *velocityX, double *velocityY){
    
    
}

double getDistanceTraveled(double velocityX, double velocityY){
    
}

double targetPractice(double distanceToTarget, double velocityX, double velocityY){
    
    
}

