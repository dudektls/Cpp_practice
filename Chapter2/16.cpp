#include<iostream>
using namespace std;

int main() {

	char a[100];
	char b[100];

	cout << "텍스트 입력>>";
	cin.getline(a, 100);
	cout << "텍스트 입력>>";
	cin.getline(b, 100);

	int lena = strlen(a);
	int lenb = strlen(b);

	for (int i = 0; i < lena; i++) {
		if (a[i] >= 'A' && a[i] <= 'Z') {
			a[i] = a[i] + 32;
		}
	}
	for (int i = 0; i < lenb; i++) {
		if (b[i] >= 'A' && b[i] <= 'Z') {
			b[i] = b[i] + 32;
		}
	}
	for (int i = 0; i < lena; i++) {

		if (a[i] < 'a' || a[i] > 'z') continue;

		for (int j = 0; j < lenb; j++) {
			if (a[i] == b[j]) {

				cout << a[i] << " ";


				break;
			}
		}
	}
	return 0;
}
