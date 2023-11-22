#ifndef DECKOFCARDS_H
#define DECKOFCARDS_H
#include "Card.h"
#include <vector>
#include <string>

class DeckOfCards {
    public:
    //no-arguments constructof for DeckOfCards
    DeckOfCards();

    //methods
    void shuffle();
    Card dealCard();
    bool moreCards() const;

    private:
    std::vector<Card> deck;
    int currentCard=0;

};

#endif