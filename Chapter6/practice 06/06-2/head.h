#pragma once
#include <iostream>
#include <string>
using namespace std;

class GameBoard {
public:
	int score1 = 0; // 청군
	int score2 = 0; // 백군


	void increase(int n = 10, string team = "Non") {
		if (team == "Non") {
			score1 += n;
			score2 += n;
		}
		else if (team == "청군") {
			score1 += n;
		}
		else {
			score2 += n;
		}
	}
	
	void show(string team = "Non") {
		int fin = 0;
		if (team == "Non") {
			cout << "청군: " << score1 << ", ";
			cout << "백군: " << score2 << endl;
		}
		else {
			if (team == "청군") {
				fin = score1;
			}
			else {
				fin = score2;
			}
			cout << team << ": " << fin;
		}
	}
};
