
/*

Konstanter (repetisjon)
 - verdier vi bruker ofte
 - int MAX og int MIN
 
Deklarered ved at vi bruker
 const int MAX
 - vanlig praksis å bruke store bokstaver
 
 const double PI = 3.14;
 
Fordeler
 - enkelt å oppdatere koden
 - kan referere til spesifikke verdier vha. et navn
 - garanterer samme verdi over alt.
 
 ##
 
 Enumeration-typer (kap. 2.3)
 - en samling "symbolske" verdier
 - en verdi som "representerer noe"
 - Eks; måneder, dager, kompassretning, farger
 
 Er en datatype for et avgrenset sett med konstanter
 
 Kan definere våre egne typer ved hjelp av 'enum'
 
 enum color{BLACK, WHITE, RED, BLUE}
 enum days{MANDAG, TIRSDAG, ONSDAG, TORSDAG, FREDAG, LØRDAG, SØNDAG}
 
 enum er et sett med konstanter tilsvarende
 
 const int BLACK = 0;
 const int WHITE = 1;
 
 Gir oss en kontrollmekanisme for hva som er lovlige verdier 
 som kan tilordnes en variabel. Denne kontrollen har vi ikke
 om vi hadde laget en separat liste over variablene.
 Om vi forsøker å tilordne GREEN til color vil koden ikke 
 kompilere. 
 
 enum color{BLACK = 0, RED = 50, GREEN = 120},
 
 den teksten som er der inne er bare bokstaver, 
 
 if color c = BLACK;
 
 ## Konstantverdiene i enum
 - Hvis verdiene kun er definert med navn blir verdiene satt
    enum color{BLACK, GERY, WHITE};
 - Eller verdiene kan settes selv
    enum color{BLACK = 50, GREY = 100, WHITE = 50}
 - Alle verdiene kan settes eksplisitt
 - Verdien kan settes for enkelte av de
 - enum er egentlig bare heltall!
 
 enum Tile{EMPTY, USER, MACHINE}
 Tile board[3][3]
 
 ## Sammensatte datatyper
 - Basisdatatyper => enkeltverdier
 - Arrays => flere verdier av samme type
 - Mange av de "data" vi bruker er komplekse
    - data som hører logisk sammen, men består av forskjellige typer
 - Den enkle løsningen er egendefinerte strukturer
    - struct (og union)
    - del av programmeringspråket C
 
 DATE = 1963-3-28 er en dårlig idé
 DATE = "1963-3-28" er bedre egnet
 
 enum Month{JANUARY,..., DEC..}
 
 Month month = JANUARY;
 Day day = MONDAY;
 
 Om vi skal ha flere datoer så må vi begynne med month1 month2 etc.
 
 Isteden har vi funksjonen struct
 
 ## Struct kort oversikt
 - samling av verdier som kan være av forskjellig type
 - array -> samlinger av verdier av samme type
 - Håndteres som en enkelt variabel med egen notasjon (.) for å lese/skrive enkeltverdiene
 - Vi definerer selv hvilke typer verdier vi har behov for
 
 
Q: Hva må vi gjøre for å få skrevet ut de ASCII verdien
 Casting, sjonglerer litt med verdier fra ASCII tabellen
 Bruk char og outputen vil bli tolket som et tall
 
 ## Deklarere en struct
 
 enum Color{WHITE, BLACK, ..., BLUE};
 
 struct Circle{
    double radius;
    Color color; //type med stor C og variable med liten c
 }
 
 - kan initialiseres med verdier
 - Bruke tilordning
 - Ha som parameter i funksjoner
 - Call by reference
 - bruker (.) mellom variabelnavn og medlemmer
 
 ## Klasser 
 
 Objektorientert.
 
*/

#include <iostream>
#include <ctime>

using namespace std;

enum Color {BLACK, WHITE, GREY};
const double PI = 3.14;


class Circle{ // deklarerer klassen
private:
    double radius;
    Color color;
public:
    double areal(); //jobber bare med sirkler så den forstår seg selv
    void setRadius(double d){radius = d;}
};

class Rectangle{ // deklarerer klassen
public:
    double height;
    Color color;
    double areal(); //jobber bare med sirkler så den forstår seg selv

};


int main(){ // implementerer klasser
    Circle c = {5.6, BLACK};
    c.radius = 5.6;
    c.color = WHITE;

    cout << "Areal " << c.areal() << endl;
}

double Circle::areal(){ // deklarerer funkjonen i klassen og implementererer den her
    return radius * radius * PI;
}

double Rectangle::areal(){ // deklarerer funkjonen i klassen og implementererer den her
    return height * height;
}


















