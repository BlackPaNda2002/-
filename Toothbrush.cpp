#include "Toothbrush.h"

Toothbrush::Toothbrush(string Avto_Stop, string Call):Teapot(Avto_Stop),Nokia3310(Call)
{
}

void Toothbrush::Show()
{
	cout << "\t\t\t������������� ������ �����" << endl;
	cout << "��������: " << _Avto_Stop << endl
		<< "��������� ��������������: " << _Call << endl;
}
