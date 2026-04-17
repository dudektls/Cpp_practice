#include<iostream>
using namespace std;

int main() {

	char t[15000];
	cout << "히스토그램을 그립니다. 텍스트의 끝은 ;이고" << endl << "10000개 문자까지 가능합니다. 영문 텍스트를 입력하세요." << endl;
	cin.getline(t, 10000, ';');
	int n = strlen(t);
	int N = 0;

	for (int i = 0; i < n; i++) {
		if (t[i] >= 'A' && t[i] <= 'Z') {
			t[i] = t[i] + 32;
		}
	}

	for (int i = 0; i < n; i++) {
		if (t[i] >= 'a' && t[i] <= 'z') {
			N++;
		}
		cout << "총 알파벳 수 " << N << endl;

		for (int A = 97; A <= 122; A++) {

			int count = 0;

			for (int i = 0; i < n; i++) {

				if (t[i] == char(A)) {
					count++;

				}
			}
			cout << char(A) << "(" << count << ")";

			for (int i = 0; i < count; i++) {
				cout << "*";
			}
			cout << endl;
		}

		return 0;
	}
