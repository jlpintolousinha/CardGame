/* GAMECARDS_1.cpp : Defines the entry point for the console application.
Funtions are called from the main entry onwards as the game develops */ 

#include "stdafx.h"
#include "SHOE_1.h"
#include "Deck_1.h"
#include "Card_1.h"
#include "Player_1.h"
#include <string>
#include <vector>

using namespace std;

SHOE new_shoe;
Deck new_deck;
Player new_player;
int total_decks;

int main(){

	string my_option;
	cout << "Welcome to the game card. Would you like to start a new game (y/n)?";
	getline(cin, my_option);
	if (my_option == "y"){ Create_Game(); }
	else {Delete_Game();};

	cout << "Great! Would you like to create a deck and add to your game (y/n)?";
	getline(cin, my_option);
	if (my_option == "y"){ Create_Deck(); Add_Deck();}
	else {return 0;};

	cout << "Would you like to add players to your game (y/n)?";
	getline(cin, my_option);
	if (my_option == "y"){ Add_Player();}
	else {Remove_Player();};

	//more user options are yet missing 
};

void Create_Game(){
	new_shoe = SHOE(0,0);
};

void Delete_Game(){
	SHOE* new_shoe; 
	delete new_shoe; 
};

void Create_Deck(){
	new_deck = Deck(52);
};

void Add_Deck(){
	new_deck.construct_deck();
	new_shoe.shoe_deck.emplace_back(new_deck);
	new_shoe.number_decks =+ 1;
};

void Add_Player(){
	new_shoe.set_number_players(1);
	new_shoe.add_shoe_player();
};

void Remove_Player(){
	new_shoe.set_number_players(-1);
	new_shoe.delete_shoe_player();
};

void Deal_Cards(){			//Not entirely true
	
	total_decks = new_shoe.get_number_decks();

	if (total_decks == 1){
		random_shuffle(new_shoe.shoe_deck.begin(), new_shoe.shoe_deck.end());
		for (int i = 0; i < 52 ; i++){
			new_player.deal_cards();
		}
	}
	else{
		random_shuffle(new_shoe.shoe_deck.begin(), new_shoe.shoe_deck.end());
		for (int i = 0; i < 52*new_shoe.get_number_decks(); i++){
			new_player.deal_cards();
		};
	};
};

void Get_list_cards(){	
	for(auto& i: new_shoe.shoe_player) 
		cout << ' ' << i;
};

void Get_list_players(){
	for(auto& x: new_shoe.shoe_player)  //Sorting is missing 
		cout << ' ' << x;
};

void Count_cards_undealt_suit(){

};

void Count_cards_undealt_sorted(){

};

void Shuffle_shoe(){
	return random_shuffle(new_shoe.shoe_deck.begin(), new_shoe.shoe_deck.end());
};