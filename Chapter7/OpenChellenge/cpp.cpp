#include "head.h"
#include <string>
#include <iostream>
using namespace std;

void histogram::operator !() {
	int total = 0;
	cout << str << endl << endl;

	char count[26] = { 0 }; // 알파벳 개수 세기 위한 배열
	for (int i = 0; i < str.length(); i++) {
		char c = str[i]; // 현재 문자
		if (isalpha(c)) {
			total = total + 1;
			str[i] = tolower(c);  // 대문자 -> 소문자
			count[c - 'a'] = count[c - 'a'] + 1; // 알파벳 개수 세기]
		}
	}
	
	cout << "총 알파벳 수 : " << total << endl;
	// a=97 z=122
	for (int i = 0; i < 26; i++) {
		cout << char(i + 97) << " : ";

		for (int j = 0; j < count[i]; j++) {
			cout << "*";
		}
		cout << endl;
	}
}
