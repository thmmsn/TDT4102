//
//  main.cpp
//  Oving4
//
//  Created by Fredrik on 09/02/15.
//  Copyright (c) 2015 fredrik. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>
<<<<<<< HEAD

using namespace std;

enum Suit {CLUBS, DIAMONDS, HEARTS, SPADES};
enum Rank {TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING, ACE};

struct CardStruct{
     Suit s;
     Rank r;
};

void toString(CardStruct theCard){
    suitToString(theCard);
    cout << theCard.s << " of " << theCard.r << endl;
}
string suitToString(CardStruct theCard){
    string ss;
    switch (theCard.s) {
        case CLUBS:
            ss =  "CLUBS";
            break;
        case DIAMONDS:
            ss =  "DIAMONDS";
            break;
        case HEARTS:
            ss =  "HEARTS";
            break;
        case SPADES:
            ss =  "SPADES";
            break;
    }
    return ss;
}
string rankToString(CardStruct theCard){
    string rr;
    switch (theCard.r) {
        case TWO:
            rr =  "TWO";
            break;
        case THREE:
            rr =  "THREE";
            break;
        case FOUR:
            rr =  "FOUR";
            break;
        case FIVE:
            rr =  "FIVE";
            break;
        case SIX:
            rr =  "SIX";
            break;
        case SEVEN:
            rr =  "SEVEN";
            break;
        case EIGHT:
            rr =  "EIGHT";
            break;
        case NINE:
            rr =  "NINE";
            break;
        case TEN:
            rr =  "TEN";
            break;
        case JACK:
            rr =  "JACK";
            break;
        case QUEEN:
            rr =  "QUEEN";
            break;
        case KING:
            rr =  "KING";
            break;
        case ACE:
            rr =  "ACE";
            break;
    }
    return rr;
}
=======
#include "enumeration.h"
#include "card.h"
#include "CardDeck.h"
#include "BlackJack.h"


using namespace std;
>>>>>>> FETCH_HEAD


int main(){

<<<<<<< HEAD
    struct CardStruct card;
    card.s = {CLUBS};
    card.r = {THREE};
    
    toString(card);
=======
    BlackJack spill;
    
    spill.playGame();

>>>>>>> FETCH_HEAD
    
}