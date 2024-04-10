#pragma once
#include "Shop.h"

class Nokia3310: virtual public Shoping
{
public:
	Nokia3310(string Call);

	void Show() override;

	~Nokia3310(){}

protected:
	
	string _Call;
};

class Nokia5 final: public Nokia3310
{
public:
	Nokia5(string Call, int OZY, string Camera, string Color);

	void Show()override;

	~Nokia5() {}

private:

	int _OZY;
	string _camera;
	string _color;
};

