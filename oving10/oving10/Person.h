//
//  Person.h
//  oving10
//
//  Created by fredrik on 26/03/15.
//  Copyright (c) 2015 fredrik. All rights reserved.
//

#ifndef __oving10__Person__
#define __oving10__Person__
#include <string>
#include <vector>
#include <list>
#include <stdio.h>

class Person{
private:
    std::string fNavn;
    std::string eNavn;
    std::vector<std::string> strVec = {fNavn, eNavn};
public:
    bool operator>(const Person& rhs){
        if( this->eNavn > rhs.eNavn){
            return  true;
        }
        else if( rhs.eNavn > eNavn){
            return false;
        }
        else{
            if (fNavn > rhs.fNavn) {
                return true;
            }
            else if (rhs.fNavn > fNavn){
                return false;
            }
            else{
                return false;
            }
        }};
    Person();
    Person(std::string a, std::string b);
    void print();
    
    
};

class Katalog{ 
    
private:
    std::list<Person> nList;
public:
    void insertOrdered(Person p);
    void sort();
    
};



#endif /* defined(__oving10__Person__) */