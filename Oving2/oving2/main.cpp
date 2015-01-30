#include <iostream>
#include "cannonball.h"
#include "utilities.h"

using namespace std;

void Cannonball(){
    double kvelY = 25;
    double kvelX = 50;
    
    cout << "Funksjon \t" << "T = 0 \t" << "T = 2.5 \t" << "T = 5.0" << endl;
    cout << "acclX() \t" << "\t" << acclX() << "\t" << acclX() << "\t" << acclX() << endl;
    cout << "acclY() \t" << "\t" << acclY() << "\t" << acclY() << "\t" << acclY() << endl;
    cout << "VelX() \t" << "\t" << velX(kvelX, 0) << "\t" << velX(kvelX, 2.5) << "\t" << velX(kvelX, 5.0) << endl;
    cout << "VelY() \t" << "\t" << velY(kvelY, 0) << "\t" << velY(kvelY, 2.5) << "\t" << velY(kvelY, 5.0) << endl;
    cout << "posX() \t" << "\t" << posX(kvelX, 0) << "\t" << posX(kvelX, 2.5) << "\t" << posX(kvelX, 5.0) << endl;
    cout << "posY() \t" << "\t" << posY(kvelY, 0) << "\t" << posY(kvelY, 2.5) << "\t" << posY(kvelY, 5.0) << endl;
    

}

void CannonballExtended(){
    double *theta, *absVelocity;
    getUserInput(*theta, *absVelocity);
}

void TilfeldigTall(){
    srand(time(0));
    
    int lower = 1;
    int upper = 10;
    int t = 0;

    while(t != 10){
    int random = randomWithLimits(lower, upper);
    cout << "Tilfeldig tall: " << random << endl;
        t++;
    }
}

void visValg(){
    cout << "Velg\t" << "oppgave2" << endl;
    cout << "1\t" << "Cannonball" << endl;
    cout << "2\t" << "CannonballExtended" << endl;
    cout << "3\t" << "Tilfeldig tall" << endl;
    cout << "10\t" << "AVBRYT" << endl;
    cout << "Velg: ";
}


int main(){
    int check = 0;
    
    while(check != 10){
    
        visValg();
        cin >> check;

        switch (check)
        {
                case 1:
                    Cannonball();
                break;
                case 2:
                    TilfeldigTall();
                break;
        }

    }
}