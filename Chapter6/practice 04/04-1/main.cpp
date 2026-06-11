#include <iostream>
#include <string>
using namespace std;

string erase(string text) {

	int pos = text.find(" ");

	while (pos != string::npos) {  // text의 끝까지 반복
		text.replace(pos, 1, "");
		pos = text.find(" ");
	}
	return text;
}
string erase(string text, string ch) { //모든 ll 지우기
	int pos = text.find(ch);
	while (pos != string::npos) {
		text.replace(pos, ch.length(), "");
		pos = text.find(ch);
	}
	return text;
}
string erase(string text, string ch1, string ch2) {  // 모든 ch1을 ch2로 바꾸기
	int pos = text.find(ch1);
	while (pos != string::npos) {
		text.replace(pos, ch1.length(), ch2);
		pos = text.find(ch1,pos+ch2.length());
	}
	return text;
}

int main() {

	string a = erase("Hello  world, Yaho");
	cout << "모든 빈 칸 지운결과\t" << a << endl;

	string b = erase("Hello  world, Yaho", "ll");
	cout << "모든 ll을 지운결과\t" << b << endl;
	
	string c = erase("Hello  world, Yaho", "o", "77");
	cout << "모든 o를 77로 바꾼 결과\t" << c << endl;

	return 0;
}
