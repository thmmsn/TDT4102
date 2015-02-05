#include "utilities.h"
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <array>
using namespace std;

int randomWithLimits(int lower, int upper){ //genererer tilfeldig tall mellom nedre og øvre grense
    
    int d = upper - lower + 1;
    int rand1 = rand() %  d + lower;
    return rand1;

}
int swapNumbers(int num1, int num2){
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
    cout << num1 << " " << num2 << endl;
    return 0;
}
void printArray(int myArr[]){
    for(int i=0; i<= 19; i++){
        cout << i << ":\t" << myArr[i] << endl;
    }
}
void randomizeArray(int myArr[], int kSize){

    for (int i = 0; i<=kSize; i++){
        myArr[i] = randomWithLimits(0, 100);
    }
    
}
void sortArray(int myArr[], int kSize){
    int i, j, key;
        for(j = 1; j < kSize; j++){
            key = myArr[j];
            for(i = j - 1; (i >= 0) && (myArr[i] < key); i--){
                myArr[i+1] = myArr[i];
            }
            myArr[i+1] = key;
        }

}
double medianOfArray(int myArr[], int kSize){
    double median;
    median = myArr[0] + myArr[(kSize-1)];
    median = median / 2;
    return median;
}
void randomizeCString(char cString[], char lower, char upper){
    
    for(int i = 0; i<8; i++){
        cString[i] = randomWithLimits(lower, upper);
    }
}
void readInputToCstring(char grades[], char lower, char upper){
    char inputString;
    int counter = 0;
    grades[10] = 0;
    cout << "Skriv inn '8 char' string fra: " << lower << " til: " << upper << endl;
    
    while(counter < 10){
        cin >> inputString;
        inputString = toupper(inputString);
        
        if((lower <= inputString) && (inputString <= upper)){
            grades[counter] = inputString;
            counter = counter + 1;
        }
        else{
            cout << "Ugyldig variabel. " << lower << " - " << upper << endl;
        }
    }
}
int countOccurencesOfCharacter(char grades[], int length, char sign){
    int counter = 0;
    
    for(int i = 0; i<length; i++){
        if(grades[i] == sign){
            counter = counter + 1;
        }
    }
    
    return counter;
}

void gradeCount(char grades[], int length, char sign, int gradeTable[]){
    
    for(int i = 0; i<6; i++){
        gradeTable[i] = countOccurencesOfCharacter(grades, length, (sign+i));
    }

}

double gradeAverage(int gradeTable[]){
    double average;
    double sum = 0;
    for(int i = 0; i<6; i++){
        sum = sum + gradeTable[i]*i;
    }
    average = sum/10;
    return average;
}
