#include <iostream>
#include <string>
#include "WordGame.h"
#include "player.h"
using namespace std;

WordGame::WordGame(string title, string startWord) {
	this->title = title;
	this->startWord = startWord;
	this->players = NULL;
}
WordGame::~WordGame(){
	if (this->players != NULL) {
		delete[] this->players;
	}
}
bool WordGame::createPlayers() {
	int n;
	cout << title << "게임을 시작합니다. " << endl;
	cout << "게임에 참가하는 인원은 몇명입니까? >> ";
	cin >> n;
	if (n < 2) {
		cout << "인원은 2명 이상이어야 합니다." << endl;
		return false;
	}
	nPlayers = n;
	if (!nPlayers) {
		return false;
	}
	if (players != NULL) {
		delete[] players;
	}
	players = new player[nPlayers];
	string playerName;
	for (int i = 0; i < nPlayers; i++) {
		cout << "참가자의 이름을 입력하세요 >> ";
		cin >> playerName;
		players[i].setName(playerName);
	}
	return true;
}

void WordGame::run() {
	if (!createPlayers()) {
		return;
	}
	string lastWord = startWord;
	cout << "시작 단어는 " + lastWord + "입니다" << endl;
	int next;
	while (1) {
		string newWord = players[next].sayWord();
		if (!players[next].succeed(lastWord)) {
			cout<<players[next].getName() + "님이 졌습니다." << endl;
			break;
		}
		next++;
		next %= nPlayers;
		lastWord = newWord;
	}
}
