#pragma once
#include <iostream>
#include <string>
using namespace std;

class player;

class WordGame {
	string title;
	string startWord;
	int nPlayers;
	bool createPlayers();
	player * players;
public:
	WordGame(string title, string startWord);
	~WordGame();
	void run();
};
