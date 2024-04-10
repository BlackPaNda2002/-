#include "appliances.h"

Teapot::Teapot(string Avto_Stop):_Avto_Stop(Avto_Stop)
{}

void Teapot::Show()
{
	cout << "\t\t\t �������������" << endl;
	cout << "��������������: " << _Avto_Stop << endl;
}

Toster::Toster(string Avto_Stop, int Operating_Mode):Teapot(Avto_Stop), _Operating_Mode(Operating_Mode)
{}

void Toster::Show()
{
	cout << "\t\t\t ������" << endl;
	cout << "�������������: " << _Avto_Stop << endl
		<< "������ ������: " << _Operating_Mode << endl;
}

Nuke::Nuke(string Avto_Stop, string Defrosting):Teapot(Avto_Stop),_Defrosting(Defrosting)
{}

void Nuke::Show()
{
	cout << "\t\t\t ������������� ����: " << endl;
	cout << "�������������: " << _Avto_Stop << endl
		<< "����� ����������: " << _Defrosting << endl;
}

