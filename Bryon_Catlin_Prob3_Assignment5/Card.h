#ifndef CARD_H
#define CARD_H

#include <vector>
#include <string>

class Card {
    public:
    // user defined constructor for card class
    Card(int face_, int suit_);

    //method
    std::string toString();
    
    //getter functiosn
    int getFace() const;
    int getSuit() const;

    private:
    int face;
    int suit;
    static std::vector<std::string> faceNames;
    static std::vector<std::string> suitNames;
};

#endif