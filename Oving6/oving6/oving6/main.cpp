//
//  main.cpp
//  oving6
//
//  Created by Fredrik on 19/02/15.
//  Copyright (c) 2015 fredrik. All rights reserved.
//

#include <iostream>
#include <thread>
using namespace std;



void fillInFibonacciNumbers(int arr[], int length){
    
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

    for (int i = 0; i<length; i++) {
        cout << i << "\t" << arr[i] << endl;
    }

}

int recursiveFibonacci(int n){  // Eksponensiell tid, lite vits i å implementere.
                                // for tall > 45 tar
    
    if(n<=0) return 0;
    else if(n==1) return 1;
    else{
        return recursiveFibonacci(n-1)+recursiveFibonacci(n-2);
    }
}


int main(){
    int l = 30;
    int fibArray[l];
    
    fillInFibonacciNumbers(fibArray, l);
    printArray(fibArray, l);

    
    cout << recursiveFibonacci(l);

}



