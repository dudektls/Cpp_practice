#include "head.h"
#include <string>
#include<iostream>
using namespace std;

int main() {
	Chart chart("색 선호도 조사 차트");
	for (int i = 0; i < chart.getNumofcolor(); i++) {
		cout << chart.getcolor(i) << "이 좋은 학생>>";
		int count;
		cin >> count;
		chart.add(i, count);

	}
	chart.draw();
}
