#include <iostream>
#include <string>
#include "head.h"
using namespace std;

contest::contest(int size) {
	this->teams = new string[size];
	this->scores = new int[size];
	this->size = size;
}
contest::contest(const contest& src) {
	this->teams = new string[src.size];
	this->scores = new int[src.size];
	this->size = src.size;
	for (int i = 0; i < src.size; i++) {
		this->teams[i] = src.teams[i];
		this->scores[i] = src.scores[i];
	}
}
void contest::read() {
	cout << getsize() << "개 입력>> ";
	for (int i = 0; i < getsize(); i++) {
		cin >> teams[i];
		cin >> scores[i];
	}
}
contest::~contest() {
	delete[] teams;
	delete[] scores;
}
