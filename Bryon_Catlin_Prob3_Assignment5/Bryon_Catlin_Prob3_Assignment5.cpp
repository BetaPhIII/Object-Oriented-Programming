#include <iostream>
#include "Card.cpp"
#include "DeckOfCards.cpp"

int main() {
    // create object "myDeckOfCards" of DeckOfCards class
    DeckOfCards myDeckOfCards;

    //print all cards in the deck
    while(myDeckOfCards.moreCards()) {
        std::cout << myDeckOfCards.dealCard().toString() << std::endl;
    }

    //shuffle the deck
    myDeckOfCards.shuffle();
    std::cout << "************AFTER SHUFFLING**************" <<std::endl;

    //print cards after shuffling

    while(myDeckOfCards.moreCards()) {
        std::cout << myDeckOfCards.dealCard().toString() << std::endl;
    }

}