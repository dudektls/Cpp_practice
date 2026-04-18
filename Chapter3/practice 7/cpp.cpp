#include "head.h"
#include <string>
#include<iostream>
using namespace std;


void storage::put(double n) {
	data[next++] = n;
	
}
void storage::dump() {
	for (int i = 0; i < next; i++) {
		cout << data[i] << " ";
	}
	cout << endl;
}
double storage::getAvg() {

	result = 0;

	for (int i = 0; i < next; i++) {
		result += data[i];
	}

	return result / next;
}
