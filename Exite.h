#pragma once
#include <iostream>
using namespace std;

class exite
{
public:
	void Clock1();

private:
    bool Clock = false;
};

class Close: private exite
{
public:
	void closeDoor();

};

