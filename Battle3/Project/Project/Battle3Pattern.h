#pragma once
//Subclass sandbox
#include <iostream>
#include <string>
using namespace std;


class Move
{
public:
	virtual ~Move() {}

protected:
	string moveName;

	int usageCounter;

	virtual void use(string user, int attackLevel) = 0;  //This is the sandbox method.  Each sub class of move has its own version of this method.  The methods below are different methods that may be used by this method and are only for subclasses of move to use.

	int damageMultipier;

	void useMessage(string user);

	void damagecalculator(int attackLevel);

	void selfDamage(string user);

	void usage(string user);
};

class Fireball : public Move
{
public:
	Fireball();
	virtual void use(string user, int attackLevel);
};

class LightningBolt : public Move
{
public:
	LightningBolt();
	virtual void use(string user, int attackLevel);
};

class WaterSplash : public Move
{
public:
	WaterSplash();
	virtual void use(string user, int attackLevel);
};

class RockThrow : public Move
{
public:
	RockThrow();
	virtual void use(string user, int attackLevel);
};