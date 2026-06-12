#include <iostream>
#include <string>
using namespace std;

#include "head.h"

int main() {
	mypipe a(5);  // 길이가 5짜리 만들고
	a.put(10);
	a.put(20);  // 10,20 들어가고 

	mypipe b = a;  // 복사하고 
	b.put(30);  // b에만 30이 들어가지
	cout << "파이프 a에 저장된 갯수 : " << a.getsize() << endl;  // 2
	cout << "파이프 b에 저장된 갯수 : " << b.getsize() << endl;   //3

	int n;
	a.get(n);  
	cout << "파이프 a에서 뺴온 값 : " << n << endl;  //10
	b.get(n);  
	cout << "파이프 b에서 뺴온 값 : " << n << endl;  //10
 }
