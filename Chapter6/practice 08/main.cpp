#include <iostream>
#include<string>
#include "head.h"
using namespace std;

int main() {
	int n = WordUtility::wordCount("I love C++");
	cout << "단어 개수는 : " << n << endl;
	string word = WordUtility::getWord("I love C++", 3);
	if (word == " ") {
		cout << "3번째 단어는 없습니다." << endl;
	}
	else
		cout << "3번째 단어는 " << word << endl;
}
