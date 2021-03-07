/*SHOE class definition. It consists of a Deck (or a number of them), 
plus one or multiple players*/

#pragma once

#include <random>
#include <algorithm>
#include <iterator>
#include "targetver.h"
#include "Deck_1.h"
#include "Player_1.h"
#include "Card_1.h"
#include <stdio.h>
#include <tchar.h>
#include <iostream>
#include <vector>

using namespace std;
using namespace cards;

class SHOE{
  public:

   SHOE(int number_decks,int number_players);
   SHOE();
   ~ SHOE();

	int number_decks;
	int number_players;

	vector<Card> shoe_deck;
	vector<Player> shoe_player;

	void set_number_decks(int);
	void set_number_players(int);
	int get_number_decks(void){return number_decks;}
	void construct_shoe_deck(void);
	void add_shoe_player(void);
	void delete_shoe_player(void);

};

void SHOE::set_number_decks(int x){
	number_decks =+ x;
};

void SHOE::set_number_players(int x){
	number_players =+ x;
};

void SHOE::construct_shoe_deck(){					
	for (int i=0; i < SHOE.number_players; i++){
		SHOE.shoe_deck[i] = Card();
	}
	std::random_shuffle(SHOE.shoe_deck.begin(), SHOE.shoe_deck.end());
};

void SHOE::add_shoe_player(){					
	SHOE.shoe_player.emplace_back(SHOE.number_players);
};

void SHOE::delete_shoe_player(){					
	SHOE.shoe_player.pop_back();
};