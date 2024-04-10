#pragma once
#include"Portable.h"
#include"appliances.h"

class Toothbrush final: public Teapot , Nokia3310
{
public:
	Toothbrush(string Avto_Stop,string Call);
	
	void Show()override;



};

