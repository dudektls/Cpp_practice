#pragma once
#include <iostream>
#include<string>
using namespace std;

template <class T>
bool equal(T x[], T y[], int n) {
	for (int i = 0; i < n; i++) {
		if (x[i] != y[i]) {
			return false;
		}
	}
	return true;
}
