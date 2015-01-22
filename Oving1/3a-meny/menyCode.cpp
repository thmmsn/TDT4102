#include <iostream>
using namespace std;


double inputDouble(){
    double tall;
    cout << "Skriv inn verdi i NOK" << endl;
    cin >> tall;
    return tall;
}

double nokEur(double nok){
    double eur;
    eur = nok / 9.12;
    return eur;
}

int moneyConvert(){
    double nok;
    double eur;
    nok = inputDouble(); // bør bruke double, da det kan forekomme desimaltall
    eur = nokEur(nok);
    cout << nok << " Kr er " << eur << " Euro." << endl;
    return 0;
}

int inputIntegersAndPrintSum(){
    int a=true;
    int tempSum = 0;
    cout<<"Skriv inn tall (avbryt med 0): "<< endl;
    while(a != 0){  // det egner seg med while-løkke fordi den avbrytes nå det skrives inn 0.
        cin >> a;
        tempSum = tempSum + a;
    }
    return tempSum;
}

int sumSeveral(){
    int out = inputIntegersAndPrintSum(); //summerer to tall
    cout << "Summen er " << out << endl;
    return 0;
}

int inputTwoIntegersAndPrintSum(){
    int a;
    int b;
    cout<<"Skriv inn to tall: "<< endl;
    cin >> a;
    cin >> b;
    return a+b;
}

int sumTwo(){
    int out = inputTwoIntegersAndPrintSum(); //summerer to tall
    cout << "Summen er " << out << endl;
    return 0;
}



int main(){
    int menyVal = true;
    while( menyVal != 0 ){
        cout << "(0) Avslutt" << endl;
        cout << "(1) Summer to tall" << endl;
        cout << "(2) Summer flere tall" << endl;
        cout << "(3) Konverter Kr -> Euro" << endl;
        cin >> menyVal;
        
        if(menyVal == 1){
            sumTwo();
        }
        if(menyVal == 2){
            sumSeveral();
        }
        if(menyVal == 3){
            moneyConvert();
        }
        
    }
}



// switch case