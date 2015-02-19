//
//  enumeration.h
//  Oving4
//
//  Created by fredrik on 12/02/15.
//  Copyright (c) 2015 fredrik. All rights reserved.
//

#ifndef __Oving4__enumeration__
#define __Oving4__enumeration__

#include <stdio.h>
#include <string>

enum Suit {CLUBS, DIAMONDS, HEARTS, SPADES};
enum Rank {TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING, ACE};
struct CardStruct{
    Suit s;
    Rank r;
};

std::string suitToString(Suit s);
void toString(CardStruct theCard);
std::string rankToString(Rank r);
std::string intToString(int number);
std::string toStringShort(CardStruct theCard);

#endif /* defined(__Oving4__enumeration__) */
