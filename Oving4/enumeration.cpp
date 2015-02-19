//
//  enumeration.cpp
//  Oving4
//
//  Created by fredrik on 12/02/15.
//  Copyright (c) 2015 fredrik. All rights reserved.
//

#include "enumeration.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void toString(CardStruct theCard){

    cout << rankToString(theCard.r) << " of " << suitToString(theCard.s) << endl;
    
}
string intToString(int number){
    
    stringstream ss;
    ss << number;
    return ss.str();
}

string toStringShort(CardStruct theCard){
    string s = suitToString(theCard.s);
    string r = intToString(theCard.r);
    
    s = s.substr(0,1);
    
    return s+r;
}

string suitToString(Suit s){
    switch (s) {
        case CLUBS:
            return "CLUBS";
            break;
        case DIAMONDS:
            return "DIAMONDS";
            break;
        case HEARTS:
            return "HEARTS";
            break;
        case SPADES:
            return "SPADES";
            break;
        default:
            break;
    }
}
string rankToString(Rank r){
    switch (r) {
        case TWO:
            return "TWO";
            break;
        case THREE:
            return "THREE";
            break;
        case FOUR:
            return "FOUR";
            break;
        case FIVE:
            return "FIVE";
            break;
        case SIX:
            return "SIX";
            break;
        case SEVEN:
            return "SEVEN";
            break;
        case EIGHT:
            return "EIGHT";
            break;
        case NINE:
            return "NINE";
            break;
        case TEN:
            return "TEN";
            break;
        case JACK:
            return "JACK";
            break;
        case QUEEN:
            return "QUEEN";
            break;
        case KING:
            return "KING";
            break;
        case ACE:
            return "ACE";
            break;
        default:
            break;
    }
    
}
