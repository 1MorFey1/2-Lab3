#include <iostream>
#include "Summator.h"
#include "SquareSummator.h"
#include "CubeSummator.h"

using namespace std;

int main()
{
	Summator test;
	cout << "sum: " << test.sum(7) << endl;

	Summator* test1 = NULL;

	char input;
	cout << "Input type (1-squareSummator, 2-cubeSummator): ";
	cin >> input;

	switch (input)
	{
	case '1':

		test1 = new SquareSummator();
		break;

	case '2':

		test1 = new CubeSummator();
		break;

	default:
		cout << "Enter summator type:\n";
		return -1;
	}

	cout << "sum: " << test1->sum(7) << endl;
	cout << "transform: " << test1->transform(7) << endl;

	delete test1;

	return 0;
}