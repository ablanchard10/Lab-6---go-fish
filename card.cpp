//
// Created by Austin on 4/10/2019.
//

#include <string>
#include <iostream>
#include "card.h"

using namespace std;

Card::Card()                            // default, ace of spades
{
    myRank = 1;
    mySuit = Card::Suit(0);
}

Card::Card(int rank, Suit s)
{
    myRank = rank;
    mySuit = s;
}

string Card::toString() const           // puts together suitstring and rankstring to say full rank ex: Ad, 4c, Jh
{
    string suit = suitString(mySuit);
    string rank = rankString(myRank);
    return rank + suit;
}

bool Card::sameSuitAs(const Card& c) const  // true if suit same as c
{
    return c.mySuit == mySuit;
}

int Card::getRank() const  // return rank, 1..13
{
    return myRank;
}

string Card::suitString(Suit s) const // turns enumerated suit into string
{
    string suit;
    if(s == spades)
    {
        suit = 's';
    }
    else if(s == hearts)
    {
        suit = 'h';
    }
    else if(s == diamonds)
    {
        suit = 'd';
    }
    else if(s == clubs)
    {
        suit = 'c';
    }
    return suit;
}

string Card::rankString(int r) const  // turns number rank of card into the number on card : 1->A, 2->2, 11->J
{
    string allRanks[13] = {"A","2","3","4","5","6","7","8","9","10","J","Q","K"};

    return allRanks[r - 1];
}

bool Card::operator == (const Card& rhs)
{
    if(mySuit == rhs.mySuit && myRank == rhs.myRank)
    {
        return true;
    }
    else{
        return false;
    }
}
bool Card::operator != (const Card& rhs)
{
    if(mySuit != rhs.mySuit || myRank != rhs.myRank)
    {
        return true;
    }
    else{
        return false;
    }
}

ostream& operator << (ostream& out, const Card& c)
{
    out << c.toString();
    return out;
}