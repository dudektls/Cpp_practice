#include <iostream>
#include <string>
using namespace std;

#include "head.h"

int main() {
	person father(1, "kitae");
	person daughter(father);
	cout << "daughter 객체 생성 직후 ---- " << endl;
	father.show();
	daughter.show();

	daughter.changename("Grace");
	cout << "daughter 이름을 Grace로 변경한후 ---- " << endl;
	father.show();
	daughter.show();
 }
