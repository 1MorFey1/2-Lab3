#pragma once
#include <string>

using namespace std;

class Human {
	string* Name;
	string* Last_name;
	string* Surmame;

public:
	Human();

	Human(string Name, string Last_name, string Surmame);

	~Human();

	void getSurnameAndInitials();

	void getFullName();

	string getName();

	string getLastName();

	string getSurname();
};
