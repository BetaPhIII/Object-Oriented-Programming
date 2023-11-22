#include "Card.h"
#include <vector>
#include <string>


//initialize static vectors
std::vector<std::string> Card::faceNames = {"Ace","Deuce","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Jack","Queen","King"};
std::vector<std::string> Card::suitNames = {"Hearts","Diamonds","Clubs","Spades"};

Card::Card(int face_, int suit_) {
    face = face_;
    suit = suit_;
}

//convert card ints to string
std::string Card::toString() {
    return faceNames[getFace()] + " of " + suitNames[getSuit()]; 
}

//get face value
int Card::getFace() const {
    return face;
}

//get suit value
int Card::getSuit() const {
    return suit;
}