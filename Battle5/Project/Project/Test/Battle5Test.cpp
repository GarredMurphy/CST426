#include <iostream>
#include <string>
#include "../Project/Battle5Pattern.h"
using namespace std;


void main()
{
	cout << "creating an object pool with a maximum of 10 objects" << endl;
	pool aTestOfThePool(10);

	aTestOfThePool.displayAllPoolData();

	cout << endl << "Paused" << endl;

	system("PAUSE");

	cout << endl;

	for (int i = 0; i <= 10; i++)
	{
		cout << "requesting an object -   ";

		poolobject *pointer = aTestOfThePool.getFreshObject();
		if (pointer != NULL)
		{
			cout << "setting object data" << endl;
			pointer->setData2(i + 10);
		}
		else
		{
			cout << "!!!!!no objects available!!!!!!" << endl;
		}

	}

	aTestOfThePool.displayAllPoolData();

	cout << endl << "Paused" << endl;

	system("PAUSE");

	cout << endl;

	cout << "reseting an object in the pool" << endl;

	aTestOfThePool.deleteAnObject();

	aTestOfThePool.displayAllPoolData();

	cout << endl << "Paused" << endl;

	system("PAUSE");

	cout << endl;

}