//
// Created by Austin on 4/10/2019.
//

#include "player.h"
#include "card.h"
#include "deck.h"
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


Player::Player()
{
    myName = "";
}

void Player::addCard(Card c)            //adds a card to the hand
{
    myHand.push_back(c);
}

void Player::bookCards(Card c1, Card c2)
{

}
/*
//OPTIONAL
// comment out if you decide to not use it
//this function will check a players hand for a pair.
//If a pair is found, it returns true and populates the two variables with the cards tha make the pair.

bool checkHandForBook(Card &c1, Card &c2);

//OPTIONAL
// comment out if you decide to not use it
//Does the player have a card with the same rank as c in her hand?
bool rankInHand(Card c) const;

//uses some strategy to choose one card from the player's
//hand so they can say "Do you have a 4?"
Card chooseCardFromHand() const;

//Does the player have the card c in her hand?
bool cardInHand(Card c) const;

//Remove the card c from the hand and return it to the caller
Card removeCardFromHand(Card c);
*/

string Player::showHand() const
{
    string hand;
    vector<Card>::const_iterator iter;
    for(iter = myHand.begin(); iter != myHand.end(); iter++)
    {
        hand = hand + (*iter).toString() + " ";
    }
    return hand;

}
/*
string showBooks() const
{

}

int getHandSize() const;
int getBookSize() const;

//OPTIONAL
// comment out if you decide to not use it
//this function will check a players hand for a pair.
//If a pair is found, it returns true and populates the two variables with the cards tha make the pair.

bool checkHandForPair(Card &c1, Card &c2);

//OPTIONAL
// comment out if you decide to not use it
//Does the player have a card with the same rank as c in her hand?
//e.g. will return true if the player has a 7d and the parameter is 7c

bool sameRankInHand(Card c) const;
 */