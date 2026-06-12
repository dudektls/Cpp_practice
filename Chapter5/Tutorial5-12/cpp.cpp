#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include "head.h"
using namespace std;

person::person(int id, const char* name) {
	this->id = id;
	int len = strlen(name);
	this->name = new char[len + 1];
	strcpy(this->name, name);
}
void person::changename(const char* name) {
	if (strlen(name) > strlen(this->name)) {
		return;
	}
	strcpy(this->name, name);
}
person::person(const person& person) {
	this->id = person.id;
	int len = strlen(person.name);  // name의 문자 개수
	this->name = new char[len + 1];  // name을 위한 공간 할당
	strcpy(this->name, person.name);
}
