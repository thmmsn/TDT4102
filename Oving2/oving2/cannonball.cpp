#include <iostream>
#include <cmath>
#include "cannonball.h"
#include "utilities.h"

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
double FlightTime(double initVelocity){ // tar inn startfarten i Y retning og returnerer flytiden i sekunder
    double time = 0;
    double d = 0.1;
    while (0 < velY(initVelocity, time)) {
        time+= d;
    }
    
    return time * 2;
    
}


// Oppgave 4 - - - - - - - - - - - - - //

void getUserInput(double *theta, double *absVelocity){
    cout << "Velg vinkel (grader): ";
    cin >> *theta;
    cout << "Velg starthastighet: ";
    cin >>  *absVelocity;
}

double getVelocityX(double *theta, double *absVelocity){ // sin/cos tar inn radianer
    double fartX;
        fartX = *absVelocity * cos(*theta * 3.14 / 180);
    return fartX;
}

double getVelocityY(double *theta, double *absVelocity){
    double fartY;
    fartY = *absVelocity * sin(*theta * 3.14 / 180);
    return fartY;
}

void getVelocityVector(double *theta, double *absVelocity, double *velocityX, double *velocityY){
    *velocityX = getVelocityX(*theta, *absVelocity);
    *velocityY = getVelocityY(*theta, *absVelocity);
    
}

double getDistanceTraveled(double velocityX, double velocityY){
    //finner tiden med flightTime og avstanden i x retning.
    double flyTid = flightTime(velocityY);
    double distanceTraveled = flyTid * velocityX;
    return distanceTraveled;
    
}

double targetPractice(double distanceToTarget, double velocityX, double velocityY){
    return distanceToTarget - getDistanceTraveled(velocityX, velocityY);
    
    
}
void playTargetPractice(){
    // while eller 10 forsøk, abs er innenfor 5 avstand fra mål
    double myTarget = randomWithLimits(1000,100);
    for (int i = 0; i<= 10; i++){
        double theta, absvel;
        getUserInput(&theta, &absvel);
        double velocityX, velocityY;
        getVelocityVector(&theta, &absvel, &velocityX, &velocityY);
        double avvik = targetPractice(myTarget, velocityX, velocityY );

        if(abs(avvik) <= 5){
            cout << "Gratulerer med treffsikkerheten" << endl;
        }

        else{
            cout << "Avviket fra målet: " << avvik << endl;
            cout << "Prøv igjen" << endl;
           }
        

    }
    
    
}



