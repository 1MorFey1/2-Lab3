#include <iostream>
#include "Animal.h"
#include "Bird.h"
#include "FlyingBird.h"
#include "Fish.h"

using namespace std;

int main()
{
	Animal* test = new Bird();
	test->eat();
	test->breathe();

	Animal* animal = NULL;

	char animal_char;
	cout << "Input animal type (b-bird, f-fish, y-flyingBird): ";
	cin >> animal_char;

	switch (animal_char)
	{
	case 'b':

		animal = new Bird();
		break;

	case 'f':

		animal = new Fish();
		break;

	case 'y':

		animal = new FlyingBird();
		break;

	default:
		cout << "Enter Animal type:\n";
		return -1;
	}

	animal->breathe();
	animal->eat();

	return 0;
}