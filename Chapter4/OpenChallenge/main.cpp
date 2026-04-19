#include "WordGame.h"
#include <string>
#include<iostream>
using namespace std;

int main() {
	
	WordGame* game;
	game = new WordGame("끝말잇기", "아버지");
	(*game).run();
	delete game;

}
