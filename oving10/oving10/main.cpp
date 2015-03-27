//
//  main.cpp
//  oving10
//
//  Created by fredrik on 26/03/15.
//  Copyright (c) 2015 fredrik. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include "templates.h"
#include "simpleSet.h"
#include "Person.h"



std::vector<std::string> replace(std::vector<std::string> strVec, std::string old, std::string rep){
    
    std::vector<std::string>::iterator it;
    
    for ( it = strVec.begin(); it != strVec.end(); it++){
        if(*it == old){
            strVec.erase(it);
            strVec.insert(it, rep);
        }
    }
    
    return strVec;
}

//void insertOrdered(std::list<Person> a, Person p);
//void printPersoner(std::list<Person> a);


int main(){

 /*   int a[] = {1, 2, 3, 4, 5, 6, 7};
    shuffle<int>(a, 7);
    
    double b[] = {1.2, 2.2, 3.2, 4.2};
    shuffle<double>(b,4);
    
    string c[] = {"one","two", "three", "four"};
    shuffle<string>(c, 4);
    
    double d = 2.4;
    double e = 1.2;
    maximum<double>(d, e);
  
    
    std::vector<std::string> strVec;
    strVec.push_back("Lorem");
    strVec.push_back("Ipsum");
    strVec.push_back("Dolor");
    strVec.push_back("Sit");
    strVec.push_back("Amet");
    strVec.push_back("Consectetur");
    
    strVec = replace(strVec, "Lorem", "ASFD");
    
    std::vector<std::string>::iterator iter;
    for (iter=strVec.begin(); iter != strVec.end(); iter++){
        std::cout << *iter << std::endl;
    }

  */
    /* Oppgave 4
    std::list<Person> personer;
    
    insertOrdered(personer, Person("Geir", "Ovesen"));
    insertOrdered(personer, Person("Geir", "Hansen"));
    
    std::list<Person>::iterator it;
    
    printPersoner(personer);    //
    
    
     */
    
    
    /* Oppgave 6 */
    
    //void oppg6();
    //void oppg7();
    
    
}

// OPPGAVE 4
void insertOrdered(std::list<Person> a, Person p){
    
    std::list<Person>::iterator it;
    bool inserted = false;
    for (it = a.begin(); it != a.end(); it++){
        if (*it > p && !inserted) {
            a.insert(it,p);
            inserted = true;
        }
        
    }
    if (!inserted){
        a.push_back(p);
    }
    
}


void printPersoner(std::list<Person> a){

    std::list<Person>::iterator it;
    
    for (it = a.begin(); it != a.end(); it++) {
        std::cout << &it << std::endl;
    }
    
}



std::ostream &operator <<(std::ostream& print, const std::vector<int> &vector)
{
    int count = 1;
    for (int i = 0; i < vector.size(); ++i)
    {
        std::cout << vector[i];
        if (count % 10 == 0)
        {
            std::cout << '\n';
        }
        count++;
    }
    print << '\n';
    return print;
}

bool isPrime(int i){
    for (int j = 2; j < i; j++){
        if (i%j == 0)
        {
            return false;
        }
        
    }
    return true;
}

void removeModN(int &length, std::vector<int> &v)
{
    std::vector<int> vec;
    for (int i = 0; i<100; i++){
        vec.push_back(i);
    }
    
    for (int i = 0; i < v.size(); i++){
        std::cout << std::endl << v;
        
        std::cout << v.at(i) <<" , i = "<< i << std::endl << std::endl;
        
        if (isPrime(v.at(i)) == false)
        {
            v.erase(v.begin() + i);
            i--;
        }
    }
    
    std::cout<< "Prime numbers are:\n";
    std::cout << v ;
    
    std::vector<int>::iterator it;
    
    for(it = v.begin(); it != vec.end();it++){
        std::cout << *it << std::endl;
    }
}


void oppg6(){

    std::vector<int> vec;
    int length = 100;
    removeModN(length, vec);
}
























