#include <iostream>
#include <string>
#include "player.h"
using namespace std;

string player::sayWord() {
	cout << name + ">>";
	cin >> word;
	return word;
}
bool player::succeed(string lastWord) {
	int lastIndex = lastWord.length() - 2; // 한글은 2바이트이므로 마지막 글자의 시작 인덱스는 길이 - 2
	if (lastWord.at(lastIndex) == word.at(0) && lastWord.at(lastIndex + 1) == word.at(1)) {
		return true;
	}
	else {
		return false;

}
