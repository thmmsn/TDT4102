
/*/
 /  1) include
 /    2) deklarere variabler ifstream ofstream
 /    3) klargjør fila med open()
 /
 /    5) avslutte med close()
 /
 /    ifstream = input
 /    ofstream = output
 /            good()  eof()   fail()  bad()
 / badbit     true    false   false   false
 / eofbit     false   true    false   false
 / failbit    false   false   true    false
 /
 / getline, get, operator >> (avhengig av hva som er på venstresiden)
 / leser int, char >> fra fila.
 
 Når vi er ferdig med å bruke fila, er anbefalt å lukke den med close()
 
 
 /*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    ofstream output("/Users/fredrik/Desktop/test.txt");

    if(output.fail()){
        cout << "Error" << endl;
    }
    
    for (int i = 0; i <100; i++) {
        //output << "test" << endl;
        output << i << endl; //skriver inn ASCII verdi til i
    }
    
    output.close();
    
    ifstream input("/Users/fredrik/Desktop/test.txt");
    
    if(input.fail()){
        cout << "Errror" << endl;
        exit(1);
    }
    
    char c[100]; // lager en char tabell av en "passende" størrelse
    // for dynamiske størrelser bruker vi string isteden
    // ved å bringe getline fra stringbiblioteket
    string s;
    
    while (!input.eof()) { // løkka blir lest en gang for mye
        input.getline(c, 100); // må oppgi maxstørrelse
        cout << c << endl;
        getline(input, s);
    }
    
    input.close(); //må være med på eksamen
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}