#include "head.h"
#include <string>
#include<iostream>
using namespace std;

int main() {
	double* p = new double[5];
	cout << "온도 5개 입력>>";
	double sum = 0;
	for (int i = 0; i < 5; i++) {
		cin >> p[i];
		sum += p[i];
	}
	cout << "평균은 " << sum / 5;
	delete[]p;
}
