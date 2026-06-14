#pragma once
#include <iostream>
#include<string>
using namespace std;

template <class T>
T biggest(T ar[], int n) {
	T big = ar[0];
	for (int i = 0; i < n; i++) {
		if (ar[i] > big) {
			big = ar[i];
		}
	}
	return big;
}
