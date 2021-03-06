// wayfair_program.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

struct Planet {
	string name;
	int position;
};

string Positions[10]{
	"zeroth",
	"first",
	"second",
	"third",
	"fourth",
	"fifth",
	"sixth",
	"seventh",
	"eighth",
	"ninth"
};

int main()
{
	//Open up terminal
	system("cls");
	cout << "Hello, World - This is Alex Brisbois.  I'm looking forward to working for Wayfair at their Boston location!";
	cout << endl;
	system("pause");

	//Planets
	Planet mercury;
	mercury.name = "Mercury";
	mercury.position = 1; //first

	Planet venus;
	venus.name = "Venus";
	venus.position = 2; //second

	Planet neptune;
	neptune.name = "Neptune";
	neptune.position = 8; //June

	string planet_name;
	cout << "Which of these is your favorite planet: Mercury, Venus, or Neptune? (Spelled in this manner - it is case-sensitive)" << endl;
	cin >> planet_name;

	int done = 0;
	while (done == 0) {
		if (planet_name == "Mercury") {
			cout << mercury.name << " is " << Positions[mercury.position] << " from the sun." << endl;
			done = 1;
		}
		else if (planet_name == "Venus") {
			cout << venus.name << " is " << Positions[venus.position] << " from the sun." << endl;
			done = 1;
		}
		else if (planet_name == "Neptune") {
			cout << neptune.name << " is " << Positions[neptune.position] << " from the sun." << endl;
			done = 1;
		}
		else {
			cout << "Sorry, but that was not one of the given planets.  Try again." << endl;
			done = 0;
			cin >> planet_name;
		}
	}
	system("pause");

	cout << "Hope you enjoyed this little program.  There will be plenty more to come!" << endl;
	system("pause");

    return 0;
}

