#pragma once
#include <iostream>
#include <string>
using namespace std;
class poolobject  // this object is designed such that it does not know that it is part of a pool
{
private:
	int usage;  //usage will determine if the object is being used or not;
	int data2;
public:
	poolobject();
	void setusage(int entry);
	int getusage();
	void setData2(int entry);
	int getData2();


};

class pool
{

private:
	int size;
	poolobject *theArray;

public:
	pool(int sizeEntry);

	poolobject* getFreshObject();

	void displayAllPoolData();

	void deleteAnObject();

};