#include <string>
#include<iostream>
using namespace std;

void printMatirx() {
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			cout << '*';
		}
		cout << endl;
	}
}
void printMatrix(int x, int y, char c) {
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			cout << c;
		}
		cout << endl;
	}
}
void printMatrix(int x, int y) {
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			cout << '*';
		}
		cout << endl;
	}
}

int main() {
	printMatirx();
	printMatrix(2, 5, 'a');
	printMatrix(1, 10);
}
