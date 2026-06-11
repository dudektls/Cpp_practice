#include <iostream>
#include <string>
using namespace std;

string erase(string text,string ch1 = " ",string ch2 = "") {

	int pos = text.find(ch1);

	while (pos != string::npos) { 
		text.replace(pos, ch1.length(), ch2);
		pos = text.find(ch1);
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
