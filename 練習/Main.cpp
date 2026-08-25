#include <iostream>
#include "Example.h"
#include "Dog.h"
using namespace std;

int main(void)
{
	cout << "Œ¢‚Ì–¼‘O‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n";

	string dogName;

	cin >> dogName;

	Dog dog(dogName);

	dog.ShowProfile();


	return 0;
}

