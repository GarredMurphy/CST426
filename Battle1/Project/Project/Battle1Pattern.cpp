#include "Battle1Pattern.h"

Anything::~Anything() {}

string ObjectWithFloat::getName()
{
	return name_;
}

int ObjectWithFloat::getFloat()
{
	return aFloatStat_;
}

void ObjectWithFloat::setFloat(int entry)
{
	aFloatStat_ = entry;
}

ObjectWithFloat::ObjectWithFloat(string name, float aFloatStat)
{
	name_ = name;
	aFloatStat_ = aFloatStat;
}

Anything * ObjectWithFloat::clone()
{
	return new ObjectWithFloat(name_, aFloatStat_);
}

void ObjectWithFloat::displayContents()
{
	cout << "Name: " << name_ << " Float: " << aFloatStat_ << endl;
}

Spawner::Spawner(Anything * prototype)
{
	prototype_ = prototype;
}

Anything * Spawner::spawnMonster()
{
	return prototype_->clone();
}

Spawner * createNewObjectWithFloatSpawner(string nameEntry, float floatEntry)  //this method only works with OjbectWithFloat.  I had problems with making a method for creating a new spawner and prototype that would work with any subclass.
{

	ObjectWithFloat *newprototype = new ObjectWithFloat(nameEntry, floatEntry);

	Spawner *newcreator = new Spawner(newprototype);

	return newcreator;
}
