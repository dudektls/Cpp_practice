#include "head.h"
#include <string>
#include<iostream>
using namespace std;


Coffee::Coffee() {
	coffee = 10;
	sugar = milk = water = 0;
}
Coffee::Coffee(int a, int b, int c, int d) {
	coffee = a;
	sugar = b;
	milk = c;
	water = d;
}
void Coffee::show() {
	cout << "coffee ";
	for (int i = 0; i < coffee; i++) {
		cout << "*";
	}
	cout << endl << "sugar ";
	for (int i = 0; i < sugar; i++) {
		cout << "*";
	}
	cout << endl << "milk ";
	for (int i = 0; i < milk; i++) {
		cout << "*";
	}
	cout << endl << "water ";
	for (int i = 0; i < water; i++) {
		cout << "*";
	}
	cout << endl;

}
