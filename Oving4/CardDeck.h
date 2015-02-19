//
//  CardDeck.h
//  Oving4
//
//  Created by fredrik on 12/02/15.
//  Copyright (c) 2015 fredrik. All rights reserved.
//

#ifndef __Oving4__CardDeck__
#define __Oving4__CardDeck__

#include <stdio.h>
#include "card.h"


class CardDeck{
private:
    Card cards[52];
    int currentCardIndex;
    void swap(int x, int y);
    bool shuffled;
public:
    void shuffle();
    CardDeck();
    void print();
    void printShort();
    Card drawCard();
};


#endif /* defined(__Oving4__CardDeck__) */
