#include<iostream>
using namespace std;

int main() {
	double count[5];
	double res = 0;

	cout << "실수 5개를 입력하시오 >>";
	for (int i = 0; i < 5; i++) {
		cin >> count[i];
	}
	for (int j = 0; j < 5; j++) {
		if (count[j] > 0) {
			res = res + count[j];
		}
	}
	cout << "양수 합은" << res << "입니다.";
	return 0;
