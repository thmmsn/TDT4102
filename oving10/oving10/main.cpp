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


/*std::vector<std::string> replace(std::vector<std::string> strVec, std::string old, std::string rep){
    
    std::vector<std::string>::iterator it;
    
    for ( it = strVec.begin(); it != strVec.end(); it++){
        if(*it == old){
            strVec.erase(it);
            strVec.insert(it, rep);
        }
    }
    
    return strVec;
}*/

void insertOrdered(std::list<Person> a, Person p);
void printPersoner(std::list<Person> a);


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
    
    /*std::list<Person> personer;
    
    insertOrdered(personer, Person("Geir", "Ovesen"));
    insertOrdered(personer, Person("Geir", "Hansen"));
    
    std::list<Person>::iterator it;
    
    printPersoner(personer);
     */
    
    SimpleSet::SimpleSet<int>() Set;
    for (int i = 0; i<101; i++) {
        Set.insert(i);
    }
    
    
}

/*void insertOrdered(std::list<Person> a, Person p){
    
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
*/













