#pragma once
#include <iostream>
#include <string>
using namespace std;

class person {
	char* name;
	int id;
public:
	person(int id, const char* name);
	~person() {
		if (name) {
			delete[] name;
		}
	}
	person(const person& person);
	void changename(const char* name);
	void show() {
		cout << id << ',' << name << endl;
	}
};
