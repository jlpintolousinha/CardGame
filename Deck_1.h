/*Deck class definition. Only 52 cards are part of a Deck. 
Suits are values are implicitly included in the Cards definition*/

#pragma once

#include <random>
#include <algorithm>
#include <iterator>
#include "targetver.h"
#include "Card_1.h"
#include "Suit.h"
#include <stdio.h>
#include <tchar.h>
#include <iostream>
#include <vector>


using namespace std;
using namespace cards;

class Deck {
  public:
    Deck(int size);
    Deck();

	int size;
	vector<Card> deck;
	void construct_deck(void);
}

void Deck::construct_deck(){
	Deck.size = 52;
	for (int i=0; i<Deck.size; i++){
		Deck.deck[i] = Card();
	}

	std::random_shuffle(Deck.deck.begin(), Deck.deck.end());
};