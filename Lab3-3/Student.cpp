#include <iostream>
#include <vector>
#include "Student.h"

using namespace std;

Student::Student() {
	this->score = new vector<double>();
}

Student::Student(vector<double>& input_score, string Name, string Last_name, string Surmame) :Human(Name, Last_name, Surmame) {
	this->score = new vector<double>(input_score);
}

Student::~Student() {
	delete score;
}

void Student::addScore(double new_score) {
	this->score->push_back(new_score);
}

double Student::getAverageScore() {
	double sum = 0, size = 0;

	for (int i = 0; i < this->score->size(); i++) {

		sum += (*this->score)[i];
		size++;
	}
	return sum / size;
}

void Student::getShortStudentInfo() {
	getSurnameAndInitials();

	cout << getAverageScore() << endl;
}

void Student::getFullStudentInfo() {
	getFullName();

	for (int i = 0; i < this->score->size(); i++) {

		cout << " " << (*this->score)[i];
	}
	cout << endl;
}

int Student::sizeScore() {
	return this->score->size();
}

double Student::scoreNum(int j) {
	return (*this->score)[j];
}