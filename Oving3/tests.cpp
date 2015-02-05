#include <iostream>
#include <array>
#include <iomanip>
#include "tests.h"
#include "utilities.h"

using namespace std;

void incrementByValueNumTimes(int* startValue, int increment, int numTimes){
    for (int i = 0; i < numTimes; i++) {
        *startValue += increment;
    }
}
void testPart1(){
    int v0 = 5;
    int increment = 2;
    int iterations = 10;
    incrementByValueNumTimes(&v0, increment, iterations);

    cout << "v0: " << v0 << " increment: " << increment << " iterations: " << iterations << " result: " << endl;

}
void testPart2(){
    int percentage[20];
    int kSize = 20;
    int median1, median2;
    randomizeArray(percentage, kSize);
    printArray(percentage);
    median1 = medianOfArray(percentage, kSize);
    cout << "Usortert median: " << median1 << endl;
    sortArray(percentage, kSize);
    
//    for(int i = 0; i<kSize; i++){
//        cout << i << ": " << percentage[i] << endl;
//    }
    
    median2 = medianOfArray(percentage, kSize);
    cout << "Medianen er: " << median2 << endl;
}


void testPart3(){
    int length, counter, gradeTable[6];
    double average;
    char lower = 'A', upper = 'E', grades[40];
    
//  readInputToCstring(grades, lower, upper);
    randomizeCString(grades, lower, upper);
    gradeCount(grades, 40, 'A', gradeTable);
    average = gradeAverage(gradeTable);
    average = average;
    cout << setprecision(2) << average << ": Er gjennomsnittet" << endl;
    
    
}