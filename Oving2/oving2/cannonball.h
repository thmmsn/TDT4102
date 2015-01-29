#ifndef Oving2_H
#define Oving2_H

double acclX(); //returnerer akselerasjonen i Y-retning

double acclY(); //returnerer akselerasjonen i Y-retning

double velY(double initVelocity, double time); // returnerer farten i y retning

double velX(double initVelocity, double time); // returnerer farten i y retning

double posX(double initVelocity, double time); //regner ut posisjonen i X retning

double posY(double initVelocity, double time); // regner ut posisjonen i Y retning

void printTime(int seconds); // tar inn tid i sekunder og returnerer ikke noe

int flightTime(double initVelocity); // tar inn startfarten i Y retning og returnerer flytiden i sekunder

// Ber brukeren om to tall, en vinkel, og en fart.
// Disse verdiene skal plasseres i minnet som pekerene // theta og absVelocity peker paa.
void getUserInput(double *theta, double *absVelocity);

// Gir henholdsvis farten i X-, og Y-retning, gitt en vinkel // theta, og en absoluttfart absVelocity
double getVelocityX(double theta, double absVelocity); double getVelocityY(double theta, double absVelocity);

// Dekomponerer farten gitt av absVelocity, i X- og Y-komponentene // gitt vinkelen theta, disse komponentene plasseres i minnet
void getVelocityVector(double theta, double absVelocity,double *velocityX, double *velocityY);

#endif

