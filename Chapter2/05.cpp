#include<iostream>
using namespace std;

int main() {
	int a[55];
	for (int i = 0; i < 55; i++) {
		a[i] = i + 1;
	}
	for (int n = 0; n < 55; n++) {

		cout << a[n] << '\t';

		if (a[n] % 10 == 0) {
			cout << '\n';
		}

	}

	return 0;
}
