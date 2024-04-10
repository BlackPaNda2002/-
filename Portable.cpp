#include "Portable.h"

Nokia3310::Nokia3310(string  Call):_Call(Call)
{}


void Nokia3310::Show()
{
	cout << "\t\t\t Телефон: Nokia 3310" << endl;
	cout << "Аудиозвонок: "<< _Call << endl;
}



Nokia5::Nokia5(string Call, int OZY, string Camera, string Color):Nokia3310 (Call),_OZY(OZY),_camera(Camera),_color(Color)
{}


void Nokia5::Show()
{
	cout << "\t\t\t Телефон: Nokia 5" << endl;
	cout <<"Видеозвонок: "<< _Call << endl
		<< "Оперативная память: "<<_OZY << endl
		<< "Камера: " << _camera << endl
		<< "Цвeт: " << _color << endl;
}
