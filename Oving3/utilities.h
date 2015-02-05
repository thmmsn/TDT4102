//
//  utilities.h
//  Oving3
//
//  Created by fredrik on 03/02/15.
//  Copyright (c) 2015 fredrik. All rights reserved.
//

#ifndef __Oving3__utilities__
#define __Oving3__utilities__

#include <stdio.h>
int swapNumbers(int num1, int num2);
int randomWithLimits(int lower, int upper);
void printArray(int myArr[]);
void randomizeArray(int myArr[], int length);
void sortArray(int myArr[], int kSize);
double medianOfArray(int myArr[], int kSize);
void randomizeCString(char cString[], char lower, char upper);
void readInputToCstring(char grades[], char lower, char upper);
int countOccurencesOfCharacter(char grades[], int length, char sign);
void gradeCount(char grades[], int length, char sign, int gradeTable[]);
double gradeAverage(int gradeTable[]);
#endif /* defined(__Oving3__utilities__) */
