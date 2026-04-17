#include <cstdlib>
#include <ctime>
#include <string>
#include<iostream>
using namespace std;

int main() {

	srand((unsigned)time(0));

	int result = 0;
	int n = 0;
	cout << "*** 구구단 맞추기 퀴즈입니다" << endl;
	while (1) {

		int a = rand() % 9 + 1;
		int b = rand() % 9 + 1;

		cout << a << "x" << b << '=';
		cin >> result;
		if (result == a * b) {
			cout << "정답입니다. 잘했습니다." << endl;
		}
		else {
			n++;
			if (n == 3) {
				cout << n << "번 틀렸습니다. 퀴즈 종료합니다.";
				return 0;
			}
			else
				cout << n << "번 틀렸습니다. 분발하세요" << endl;
		}

	}

	return 0;
}
