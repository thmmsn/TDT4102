#include "cannonball.h"

/*
 Horisontalt
 a_x = 0
 V_x = V_ox
 x = V_ox * t
 
 Vertikalt
 a_y = -g
 V_y = V_oy - gt => t = (V_oy - V_y)/ g
 y = V_oy * t - 0.5 g * t * t
 
 */


double acclY(){ // 1a returnerer akselerasjonen i Y-retning
    const double G = 9.81;
    return G;
    
}

double velY(double initVelocity, double time){ // 1b returnerer farten i y retning
    double fartY;
    fartY = initVelocity + acclY() * time;
    return fartY;

}

double posX(double initVelocityX, double time){ //1d regner ut posisjonen i X retning
    double X;
    X = initVelocityX * time;
    return X;
}

double posY(double initVelocityY, double time){ //1d regner ut posisjonen i Y retning
    double Y = startPosisjonY + initVelocityY * time + 0.5 acclY() * time * time;
    return Y;
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
               
               
               
               
               
