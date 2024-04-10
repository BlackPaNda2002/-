#include "appliances.h"

Teapot::Teapot(string Avto_Stop):_Avto_Stop(Avto_Stop)
{}

void Teapot::Show()
{
	cout << "\t\t\t Электрочайник" << endl;
	cout << "Автоотключение: " << _Avto_Stop << endl;
}

Toster::Toster(string Avto_Stop, int Operating_Mode):Teapot(Avto_Stop), _Operating_Mode(Operating_Mode)
{}

void Toster::Show()
{
	cout << "\t\t\t Тостер" << endl;
	cout << "Автооключение: " << _Avto_Stop << endl
		<< "Режимы работы: " << _Operating_Mode << endl;
}

Nuke::Nuke(string Avto_Stop, string Defrosting):Teapot(Avto_Stop),_Defrosting(Defrosting)
{}

void Nuke::Show()
{
	cout << "\t\t\t Микроволновая печь: " << endl;
	cout << "Автооключение: " << _Avto_Stop << endl
		<< "Режим разморозки: " << _Defrosting << endl;
}

