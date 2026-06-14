#include <string>
#include <iostream>
#include "head2.h"
using namespace std;

silver::silver(string name, int ratio) :Point(name, ratio) {

}
void silver::earn(int pay) {
	point += pay * ratio / 100;
}
void silver::show() {
	cout << name << "님* 적립 포인트는 " << point << "점 입니다" << endl;
}
