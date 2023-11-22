#include "DeckOfCards.h"
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

//intialize deck of cards to all cards in a traditional 52-card deck
DeckOfCards::DeckOfCards() {
    for(int suit = 0; suit<4; suit++) {
        for(int face = 0; face<13; face++) {
            deck.push_back(Card(face, suit));
        }
    }
}

//shuffle cards in the deck
void DeckOfCards::shuffle() {
    srand(time(0));
    currentCard = 0;

    for(int i = 0; i<deck.size(); i++) {
        Card temp = deck[i];
        int x = rand() % deck.size();
        deck[i] = deck[x];
        deck[x] = temp;
    }   
}

//return the next card value and incremement current card variable
Card DeckOfCards::dealCard(){
    return deck[currentCard++];
}

//check if more cards exist in the deck
bool DeckOfCards::moreCards() const {
    return (currentCard<deck.size());
}