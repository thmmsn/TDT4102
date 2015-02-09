//
//  main.cpp
//  Oving4
//
//  Created by Fredrik on 09/02/15.
//  Copyright (c) 2015 fredrik. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;

enum Suit {CLUBS = 0, DIAMONDS = 1, HEARTS = 2, SPADES = 3};
enum Rank {TWO = 2, THREE = 3, FOUR = 4, FIVE = 5, SIX = 6, SEVEN = 7, EIGHT = 8, NINE = 9, TEN = 10, JACK = 11, QUEEN = 12, KING = 13, ACE = 14};

struct CardStruct{
     Suit s;
     Rank r;
};

void toString(CardStruct theCard){


    
}
string suitToString(enum Suit s){
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
string rankToString(enum Rank r){
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


int main(){

    struct CardStruct card;
    card.Suit = 0;
    card.Rank = 2;
    
    
}