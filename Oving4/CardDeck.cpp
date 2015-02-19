//
//  CardDeck.cpp
//  Oving4
//
//  Created by fredrik on 12/02/15.
//  Copyright (c) 2015 fredrik. All rights reserved.
//
#include <iostream>
#include <string>
#include "CardDeck.h"
#include "card.h"


using namespace std;

CardDeck::CardDeck(){
    for(int i = 0; i<=3; i++){
        for(int j = 0; j<= 12; j++){
        
            cards[i*13 + j].initialize((Suit) i, (Rank) j);
 
        }
    }
    shuffled = false;
    currentCardIndex = 0;
}

void CardDeck::swap(int x, int y){
    Card temp = cards[x];
    cards[x] = cards[y];
    cards[y] = temp;
}

void CardDeck::print(){
    for(int i = 0; i<=51; i++){
        cout << cards[i].toString() << endl;
    }
}


void CardDeck::printShort(){
    for(int i = 0; i<=51; i++){
            cout << cards[i].toStringShort() << endl;
    }
}

void CardDeck::shuffle(){
    for(int i = 1; i<=51; i++){
        int j = rand() % 52;
        swap( j, i);
    }
    shuffled = true;
}

Card CardDeck::drawCard(){
    if (shuffled){
        Card card = cards[currentCardIndex];
        currentCardIndex++;
        return card;
    }else{
        return Card();
    }
}













