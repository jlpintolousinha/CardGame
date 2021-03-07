/*Player Class definition. It has an ID and a number of cards per hand. 
Depending on the game, a hand may provide one or several cards to a player*/

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>
#include <iostream>
#include "Card_1.h"
#include "Deck_1.h"
#include "SHOE_1.h"
#include <vector>

using namespace std;

class Player{
  public:
	  
	 int Id;
	 int Handsize;
	 vector<Card> player_hand;
	 
	  void set_id(int);
	  int get_id(void){return Id;} 
	  void deal_cards(void);
};

void Player::set_id(int x){
	Id = x;
};

void Player::deal_cards(void){
	Player.Handsize = 7;
	for (int i=0; i<Player.Handsize; i++){
		Player.player_hand[i] = Card();
	}
};
