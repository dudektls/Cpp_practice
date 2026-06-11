#pragma once
#include <iostream>
#include <string>
using namespace std;

class GameBoard {
public:
	int score1 = 0; // 청군
	int score2 = 0; // 백군

	void increase() { //전부 10점 획득
		score1 = score1 + 10;
		score2 = score2 + 10;
	}
	void increase(int n) {
		score1 = score1 + n;
		score2 = score2 + n;
	}
	void increase(int n, string team) {
		if (team == "청군") {
			score1 = score1 + n;
		}
		else if (team == "백군") {
			score2 = score2 + n;
		}
	}
	void show() {
		cout << "청군: " << score1 << ", ";
		cout << "백군: " << score2 << endl;
	}
	void show(string team) {
		int fin = 0;
		if (team == "청군") {
			fin = score1;
		}
		else {
			fin = score2;
		}
		cout << team << ": " << fin;
	}
};
