//
//  BlackJack.cpp
//  Oving4
//
//  Created by fredrik on 12/02/15.
//  Copyright (c) 2015 fredrik. All rights reserved.
//

#include <iostream>
#include "BlackJack.h"
#include "CardDeck.h"
#include "card.h"
#include "enumeration.h"
using namespace std;
int BlackJack::getCardValue(Card *card){
    return card->getRank()+2;
    
}

bool BlackJack::isAce(Card *card){
    int theCardValue = getCardValue(card);
    
    if(theCardValue == -1){
        return true;
    }
    else{
        return false;
    }
}

int BlackJack::getPlayerCardValue(Card *card){

    int theCardValue = getCardValue(card);
    int aceValue;
    if ( isAce(card) ) {
        cout << "Du trakk en ACE, 1 / 11" << endl;
        cin >> aceValue;
        return aceValue;
    }
    else{
        return theCardValue;
    }
}

int BlackJack::getDealerCardValue(Card *card, int dealValue){

    int cardValue = getCardValue(card);
    int sumValue;
    const int ace_low = 1;
    const int ace_high = 11;
    
    if (isAce(card)){
        sumValue = dealValue + ace_high;
        if (sumValue > 21){
            sumValue = dealValue + ace_low;
        }
        else if(sumValue <= 21){
            sumValue = dealValue + ace_high;
        }
    }
    
    else{
        sumValue = dealValue + cardValue;
        }

    return sumValue;
    
}

bool BlackJack::askPlayerDrawCard(){
    bool dealValue;
    cout << "Vil du ha et kort til (0=false, 1= true)" << endl;
    return  dealValue;

}

void BlackJack::playGame(){
    
    /*/* * * * * * * * * * * * * * * * * * * *\*\
     *  (1.2) Del ut to kort til spiller
     *  (1.2)
     *  (2) Del ut to kort til Dealer
     *  (3) Vis det ene kortet til dealer
     *  (4) Spør om Spiller vil ha et nytt kort
     *  (5) Inntil summen <=21
     *  (6)
     *  () Dealer trekker kort så lenge summen er under
     *  ()
    /*/
    
    bool game = true;
    
    while (game == true) {
        deck.shuffle();
        
        Card pc1 = deck.drawCard();
        Card pc2 = deck.drawCard();
        
        Card dc1 = deck.drawCard();
        Card dc2 = deck.drawCard();
        
        int pcSum = getPlayerCardValue(&pc1) + getPlayerCardValue(&pc2);
        
          
        
        cout << pcSum;
        
        
        cin >> game;
     }
    

    
    
    
}













