//
//  Person.cpp
//  oving10
//
//  Created by fredrik on 26/03/15.
//  Copyright (c) 2015 fredrik. All rights reserved.
//

#include "Person.h"
#include <iostream>
#include <string>
using namespace std;
Person::Person(){

    fNavn = nullptr;
    eNavn = nullptr;
}

Person::Person(string a, string b){
    fNavn = a;
    eNavn = b;
}

void Person::print(){

    vector<string>::iterator it;
    for(it = strVec.begin(); it != strVec.end();it++){
        cout << *it << endl;
    }

}




void Katalog::insertOrdered(Person p){
    
    list<Person>::iterator it;
    bool inserted = false;
    for (it = nList.begin(); it != nList.end(); it++){
      if (*it > p && !inserted) {
          nList.insert(it,p);
          inserted = true;
    }
        
}
    if (!inserted){
        nList.push_back(p);
    }

}












