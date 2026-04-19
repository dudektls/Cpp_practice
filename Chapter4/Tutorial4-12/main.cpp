#include <string>
#include<iostream>
using namespace std;

int main() {
	
	string s;
	cout << "덧셈 문자열을 입력하세요 : ";
	getline(cin, s, '\n');
	int sum = 0;
	int start = 0;
	while (1) {
		int Findex = s.find('+', start);
		if (Findex == -1) {
			string part = s.substr(start);
			if (part == " ") break;
			cout << part << endl;
			sum += stoi(part);
			break;
		}
		int count = Findex - start;
		string part = s.substr(start, count);

		cout << part << endl;
		sum += stoi(part);
		start = Findex + 1;
	}
	cout << "덧셈 결과 : " << sum << endl;
}
