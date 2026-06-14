#include <iostream>
#include<string>
#include "head.h"
using namespace std;

int main() {

	coffee a(2, 5, 0, 0), b(2, 2, 2, 2);
	if (!a)
		cout << "No suger" << endl;
	if (a > b)
		cout << "커피 a가 양이 더 많다" << endl;
	else
		cout << "커피 b가 양이 더 많다" << endl;

	return 0;
}
