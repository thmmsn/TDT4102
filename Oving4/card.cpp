//
//  card.cpp
//  Oving4
//
//  Created by fredrik on 12/02/15.
//  Copyright (c) 2015 fredrik thommesen. All rights reserved.
//
#include <iostream>
#include "card.h"
#include "enumeration.h"

using namespace std;


void Card::initialize(Suit s, Rank r){
    this->s = s;
    this->r = r;
    invalid = false;
}

Suit Card::getSuit(){
    return s;
}
Rank Card::getRank(){
    return r;
}
string Card::toStringShort(){
    if(invalid == true){
        return "Invalid kort";
    }
    else{
        string sStr = suitToString(s);
        string rStr = intToString(r);
        sStr = sStr.substr(0,1);
        return rStr+sStr;
    }
}
string Card::toString(){
    
    if(invalid == true){
        return "Invalid kort";
    }
    else{
        return  rankToString(r) + " of " + suitToString(s);
    }
};

Card::Card(){
    invalid = true;
}

Card::Card(Suit s, Rank r){
    initialize(s, r);
}


