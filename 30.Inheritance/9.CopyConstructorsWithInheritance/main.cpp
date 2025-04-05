#include <iostream>
#include "person.h"
#include "engineer.h"
#include "civilengineer.h"

int main()
{

	/*
	Engineer eng1("Daniel Gray",41,"Green Sky Oh Blue 33St#75",12);

	cout << "----------" <<  endl;

	Engineer eng2(eng1);
	cout << "eng2 : " << eng2 << endl;
	*/

	CivilEngineer eng1("Daniel Gray", 41, "Green Sky Oh Blue 33St#75", 12, "Road Strength");

	cout << "----------" << endl;

	CivilEngineer eng2(eng1);
	cout << "eng2 : " << eng2 << endl;

	return 0;
}