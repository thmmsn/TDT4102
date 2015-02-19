//
//  BlackJack.h
//  Oving4
//
//  Created by fredrik on 12/02/15.
//  Copyright (c) 2015 fredrik. All rights reserved.
//

#ifndef __Oving4__BlackJack__
#define __Oving4__BlackJack__
#include <iostream>
#include <stdio.h>
#include "CardDeck.h"


class BlackJack{
private:
    CardDeck deck;
public:
    int getCardValue(Card *card);
    bool isAce(Card *card);
    int getPlayerCardValue(Card *card);
    int getDealerCardValue(Card *card, int dealValue);
    bool askPlayerDrawCard();
    void playGame();
};


//static void playGame();


#endif /* defined(__Oving4__BlackJack__) */
