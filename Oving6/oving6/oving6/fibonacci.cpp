//
//  fibonacci.cpp
//  oving6
//
//  Created by fredrik on 26/02/15.
//  Copyright (c) 2015 fredrik. All rights reserved.
//

#include <iostream>
#include "fibonacci.h"
using namespace std;

void fillInFibonacciNumbers(int arr[], int length){
    
    /*
     
     Fyller inn fibonaccitall i en tabell av lengde n
     
     */
    
    if (length<2) {
        arr[0] = 1;
        arr[1] = 1;
        length = 1;
        
    }
    else {
        arr[0] = 1;
        arr[1] = 1;
        for (int i = 1; i<length; i++) {
            arr[i+1] = arr[i] + arr[i-1];
        }
    }
}

void printArray(int arr[], int length){
    
    /*
     
     Skriver ut length elementer fra array.
     
     */
    
    for (int i = 0; i<length; i++) {
        cout << i << "\t" << arr[i] << endl;
    }
    
}

int recursiveFibonacci(int n){  // Eksponensiell tid, lite vits i å implementere.
    /* 
     
     Finner fibonaccitall n
     
     */
    
    
    if(n<=0) return 0;
    else if(n==1) return 1;
    else{
        return recursiveFibonacci(n-1)+recursiveFibonacci(n-2);
    }
}

void createFibonacci(){
    int length;
    cout << "Hvor mange tall skal genereres?" << endl;
    cin >> length;
    int *fibArray;
    fibArray = new int [length];
    
    fillInFibonacciNumbers(fibArray, length);
    printArray(fibArray, length);
    
    delete fibArray;
    fibArray = nullptr;

}















