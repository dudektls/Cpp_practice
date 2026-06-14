#include <iostream>
#include<string>
#include "head.h"
#include "head2.h"
using namespace std;

int main() {

	silver h("황기태"), o("옥지윤", 4);
	// 생성자 의미 : 황기태 적립율 3 옥지윤 적립율 4
	h.earn(10000);
	h.earn(20000);
	h.earn(5000);
	o.earn(5000);
	h.show();
	o.show();

	return 0;
}
