#pragma once
#include "Shop.h"
class Teapot:virtual public Shoping
{
public:

	Teapot(string Avto_Stop);

	void Show()override;

	

protected:

	string _Avto_Stop;
};

class Toster final : public Teapot
{
public:

	Toster(string Avto_Stop,int Operating_Mode);

	void Show()override;

	


private:

	int _Operating_Mode;
};

class Nuke final :public Teapot
{
public:

	Nuke (string Avto_Stop, string Defrosting);

	void Show() override;

	

private:

	string _Defrosting;
};

