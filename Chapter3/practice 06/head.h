#pragma once
#include<iostream>
using namespace std;

class Memo {
public:
	Memo(string a, string b);
	string date;
	string content;
	bool isSameDate(Memo b);
	string getDate();
	string getContent();
	void show();
};
