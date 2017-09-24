#include <iostream>
#include <string>
#include "../Project/Battle3Pattern.h"

using namespace std;


class Character
{
private:
	string CharacterName;
	Fireball* move1;         // the way that this is currently set up, each of the moves that each player knows is always the same.  with a little bit more work it should be possible for any move to go into any of these variables.
	LightningBolt* move2;
	WaterSplash* move3;
	RockThrow* move4;
public:

	string name;
	int baseAttack;

	Character()
	{
		move1 = new Fireball;
		move2 = new LightningBolt;
		move3 = new WaterSplash;
		move4 = new RockThrow;
	}
	void setCharacterName(string entry)
	{
		CharacterName = entry;
	}
	void setBaseAttack(int entry)
	{
		baseAttack = entry;
	}

	void useMove1()
	{
		move1->use(CharacterName, baseAttack);
	}
	void useMove2()
	{
		move2->use(CharacterName, baseAttack);
	}
	void useMove3()
	{
		move3->use(CharacterName, baseAttack);
	}
	void useMove4()
	{
		move4->use(CharacterName, baseAttack);
	}
};

void main()
{
	cout << "in This program we wil test out the Subclass sandbox " << endl;
	cout << "each player has their own set of move classes which may be different from each other" << endl;
	cout << "all of these move objects are able to call methods from the sandbox to allow them to work" << endl;
	cout << "this is not an actual game" << endl << "it is only a test showing that the sandbox works correctly and that it could be used for a game" << endl << endl;
	Character player1;
	player1.setCharacterName("Strong Guy");
	player1.setBaseAttack(5);
	Character player2;
	player2.setBaseAttack(2);
	player2.setCharacterName("Wimpy Kid");
	for (;;)  // i wrote this section in a hurry so there is some repetative code which probably should have been put in a different part of the program.
	{
		int entry;
		cout << "Select a move for player1 to use (1-4): ";
		cin >> entry;
		switch (entry)
		{
		case 1:
			player1.useMove1();
			break;
		case 2:
			player1.useMove2();
			break;
		case 3:
			player1.useMove3();
			break;
		case 4:
			player1.useMove4();
			break;
		}
		cout << endl;

		cout << "Select a move for player2 to use (1-4): ";
		cin >> entry;
		switch (entry)
		{
		case 1:
			player2.useMove1();
			break;
		case 2:
			player2.useMove2();
			break;
		case 3:
			player2.useMove3();
			break;
		case 4:
			player2.useMove4();
			break;
		}
		cout << endl;
	}
}