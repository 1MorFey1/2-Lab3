#include <iostream>
#include "Human.h"

using namespace std;

Human::Human() {
	*this->Name = "Unknown";
	*this->Last_name = "Unknown";
	*this->Surmame = "Unknown";
}

Human::Human(string Name, string Last_name, string Surmame) {
	this->Name = new string(Name);
	this->Last_name = new string(Last_name);
	this->Surmame = new string(Surmame);
}

Human::~Human() {
	delete Name;
	delete Last_name;
	delete Surmame;
}

void Human::getSurnameAndInitials() {
	cout << *this->Last_name << " " << (*this->Name)[0] << ". " << (*this->Surmame)[0] << ". ";
}

void Human::getFullName() {
	cout << *this->Last_name << " " << *this->Name << " " << *this->Surmame;
}

string Human::getName() {
	return *this->Name;
}

string Human::getLastName() {
	return *this->Last_name;
}

string Human::getSurname() {
	return *this->Surmame;
}