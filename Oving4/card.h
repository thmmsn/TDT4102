//
//  card.h
//  Oving4
//
//  Created by fredrik on 12/02/15.
//  Copyright (c) 2015 fredrik. All rights reserved.
//

#ifndef __Oving4__card__
#define __Oving4__card__

#include <stdio.h>
#include "enumeration.h"


class Card{
   
private:
    Suit s;
    Rank r;
    bool invalid;
    
public:
    Card();
    Card(Suit s, Rank r);
    void initialize(Suit s, Rank r);
    Suit getSuit();
    Rank getRank();
    std::string toString();
    std::string toStringShort();

    
};



#endif /* defined(__Oving4__card__) */
