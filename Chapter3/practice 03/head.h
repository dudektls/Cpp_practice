#pragma once
#include<iostream>
using namespace std;

class Account {
public:
	string name;
	int wallet;

	Account(string a);  
	int withdraw(int m);  
	int deposit(int t); 
	string getOwner();  
	int inquiry();  

};
