#include "Battle3Pattern.h"

void Move::useMessage(string user)
{
	cout << user << " attacks enemy with " << moveName << endl;
}

void Move::damagecalculator(int attackLevel)
{
	cout << "The " << moveName << " did " << damageMultipier * attackLevel << " points of damage" << endl;
}

void Move::selfDamage(string user)
{
	cout << user << " injures their self with " << moveName << " and takes " << damageMultipier << " points of damage" << endl;
}

void Move::usage(string user)
{
	usageCounter++;
	cout << user << " has used this move " << usageCounter << " times" << endl;
}

Fireball::Fireball()
{
	moveName = "fire ball";
	damageMultipier = 10;
	usageCounter = 0;
}

void Fireball::use(string user, int attackLevel)
{
	useMessage(user);
	damagecalculator(attackLevel);
	selfDamage(user);
	usage(user);
}

LightningBolt::LightningBolt()
{
	moveName = "lighting bolt";
	damageMultipier = 100;
	usageCounter = 0;
}

void LightningBolt::use(string user, int attackLevel)
{
	useMessage(user);
	damagecalculator(attackLevel);
	selfDamage(user);
	usage(user);
}

WaterSplash::WaterSplash()
{
	moveName = "water splash";
	damageMultipier = 0;
	usageCounter = 0;
}

void WaterSplash::use(string user, int attackLevel)
{
	useMessage(user);
	damagecalculator(attackLevel);
	usage(user);
}

RockThrow::RockThrow()
{
	moveName = "rock throw";
	damageMultipier = 1;
	usageCounter = 0;
}

void RockThrow::use(string user, int attackLevel)
{
	useMessage(user);
	damagecalculator(attackLevel);
	usage(user);
}
