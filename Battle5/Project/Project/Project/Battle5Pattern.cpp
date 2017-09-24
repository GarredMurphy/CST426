#include "Battle5Pattern.h"
//I have chosen object pool for battle5
using namespace std;



poolobject::poolobject()
{
	usage = 0;
	data2 = NULL;
}

void poolobject::setusage(int entry)
{
	usage = entry;
	if (entry == 0)
		data2 = NULL;
}

int poolobject::getusage()
{
	return usage;
}

void poolobject::setData2(int entry)
{
	if (usage != 0)
		data2 = entry;
}

int poolobject::getData2()
{
	return data2;
}

pool::pool(int sizeEntry)
{
	size = sizeEntry;
	theArray = new poolobject[size];
}

poolobject * pool::getFreshObject()
{
	for (int i = 0; i < size; i++)
	{
		if (theArray[i].getusage() == 0)
		{
			theArray[i].setusage(1);
			return &(theArray[i]);
		}
	}
	return NULL;
}

void pool::displayAllPoolData()
{
	for (int i = 0; i < size; i++)
	{
		cout << "index: " << i << " usage: " << theArray[i].getusage() << " other data: " << theArray[i].getData2() << endl;
	}
}

void pool::deleteAnObject()
{
	for (int i = 0; i < size; i++)
	{
		if (theArray[i].getusage() != 0)
		{
			theArray[i].setusage(0);
			return;
		}
	}
}
