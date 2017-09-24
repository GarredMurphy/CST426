#include <iostream>
#include <string>
#include "../Project/Battle1Pattern.h"

using namespace std;


//This is my prototype pattern.





void main()
{
	Spawner **arrayOfSpawners = new Spawner*[3];
	cout << "You can test the prototype patter by making three different objects that will be cloned" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << endl;
		cout << "Enter a name for the new kind of object you would like to make: ";
		string nameEntry;
		cin >> nameEntry;

		cout << "Enter a float that this object will always start with when it is made: ";
		float floatEntry;
		cin >> floatEntry;

		arrayOfSpawners[i] = createNewObjectWithFloatSpawner(nameEntry, floatEntry);

	}
	cout << "testing clone method, each object should be cloned twice" << endl;

	Anything **arrayOfClones = new Anything*[10];

	for (int i = 0; i < 3; i++)
	{
		arrayOfClones[2 * i] = arrayOfSpawners[i]->spawnMonster();
		arrayOfClones[2 * i + 1] = arrayOfSpawners[i]->spawnMonster();
	}

	for (int i = 0; i < 6; i++)
	{	
		cout << "Index: " << i << " ";
		arrayOfClones[i]->displayContents();
	}

	cout << endl;
	system("PAUSE");

}