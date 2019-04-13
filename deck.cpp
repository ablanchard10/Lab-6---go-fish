//
// Created by Austin on 4/10/2019.
//

#include "deck.h"
#include <cstdlib>
#include <string>
#include <iostream>
#include <ctime>
using namespace std;

Deck::Deck() {
    myIndex = 0;
    int suitcnt;
    int rankcnt;

    int deckpl = 0;

    for (suitcnt = 0; suitcnt < 4; suitcnt++) {
        for (rankcnt = 0; rankcnt < 13; rankcnt++) {
            myCards[deckpl] = Card(rankcnt, Card::Suit(rankcnt));
            deckpl++;
        }
    }
    for (int i = 0; i < 52; i++)
    {
        string cards = myCards[i].toString();
        cout << cards << " ";
    }
}

void Deck::shuffle()   // shuffle the deck, all 52 cards present
{
    srand(time(0));
    int shuffles = 250;
    Card c;
    int num = size();
    cout << num << endl;

    //cout << c.myRank << endl;

    for(shuffles; shuffles > 0; shuffles--)
    {
        int first = rand() % num;
        int other = rand() % num;
        if(first != other)
        {
            c = myCards[first];
            myCards[first] = myCards[other];
            myCards[other] = c;
        }
    }
}

Card Deck::dealCard()   // get a card, after 52 are dealt, fail
{
    Card temp;
    if(size() > 0)
    {
        temp = myCards[myIndex];
        myIndex++;
    }
    return temp;
}

int Deck::size() const // # cards left in the deck
{
    return SIZE - myIndex;
}