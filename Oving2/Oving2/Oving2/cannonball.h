#ifndef Oving2_H
#define Oving2_H

double acclY(); //returnerer akselerasjonen i Y-retning

double velY(double initVelocity, double time); // returnerer farten i y retning

double positionX(double initVelocity, double time); //regner ut posisjonen i X retning

double positionY(double initVelocity, double time); // regner ut posisjonen i Y retning

void printTime(int seconds); // tar inn tid i sekunder og returnerer ikke noe

int flightTime(double initVelocity); // tar inn startfarten i Y retning og returnerer flytiden i sekunder

#endif