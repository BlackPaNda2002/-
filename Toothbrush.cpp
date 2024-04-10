#include "Toothbrush.h"

Toothbrush::Toothbrush(string Avto_Stop, string Call):Teapot(Avto_Stop),Nokia3310(Call)
{
}

void Toothbrush::Show()
{
	cout << "\t\t\tЭлектрическая зубная щетка" << endl;
	cout << "Автостоп: " << _Avto_Stop << endl
		<< "Голосовое предупреждение: " << _Call << endl;
}
