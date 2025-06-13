#pragma once
#include <string>
#include <vector>
#include "Human.h"

using namespace std;

class Student :public Human {
	vector<double>* score;

public:
	Student();

	Student(vector<double>& input_score, string Name, string Last_name, string Surmame);

	~Student();

	void addScore(double new_score);

	double getAverageScore();

	void getShortStudentInfo();

	void getFullStudentInfo();

	int sizeScore();

	double scoreNum(int j);
};