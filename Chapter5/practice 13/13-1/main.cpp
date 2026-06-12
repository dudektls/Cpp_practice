#include <iostream>
#include <string>
using namespace std;

#include "head.h"
double calcAvg(collector& w) {
	double result = 0.0;
	for (int i = 0; i < w.getsize(); i++) {
		result = result + w.get(i);
	}
	double fin = 0.0;
	fin = result / w.getsize();
	return fin;
}

int main() {
	int temp[] = { 69,70,71,72,74 };
	collector weight(4, temp);
	double avg = calcAvg(weight);
	weight.show();
	cout << "평균은 " << avg << endl;
 }
