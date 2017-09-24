#pragma once
#include <iostream>
#include <string>
using namespace std;
class Anything  //objects that can be cloned will be a subclass of this so that the spawner will be able to work with more than one class.
{
public:
	virtual ~Anything();
	virtual Anything* clone() = 0;
	virtual void displayContents() = 0;
};

class ObjectWithFloat : public Anything  //I only created one subclass of Anything, but the spawner should work with all subclasses of Anything, as it has a proper clone method.
{
private:
	string name_;
	float aFloatStat_;
public:
	string getName();

	int getFloat();

	void setFloat(int entry);

	ObjectWithFloat(string name, float aFloatStat);
	virtual Anything* clone();

	virtual void displayContents();
};


class Spawner
{
public:
	Spawner(Anything* prototype);

	Anything* spawnMonster();


private:
	Anything* prototype_;
};

Spawner* createNewObjectWithFloatSpawner(string nameEntry, float floatEntry);