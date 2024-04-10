#include "Portable.h"
#include "appliances.h"
#include"Toothbrush.h"
#include "Exite.h"



int main()
{
	setlocale(LC_ALL, "RUS");
	bool open = true;
	int choice;
	Close close;
	Shoping* Device[6];
	Device[0] = new Nokia3310( "Да");
	Device[1] = new Nokia5("да",4,"Да", "Звездное небо");
	Device[2] = new Teapot("Да");
	Device[3] = new Toster("Да", 4);
	Device[4] = new Nuke("Да", "Да");
	Device[5] = new Toothbrush("Да", "Да");

	cout << "\n\n\t\t\tЗдравствуйте вы попали в магазин электроники. " << endl;
	while (open)
	{   
		cout << "Каталог магазина: " << endl
			<< "Телефоны: " << endl
			<< "1.Nokia 3310" << endl
			<< "2.Nokia 5" << endl
			<< "Бытовая техника: " << endl
			<< "3.Электрический чайник" << endl
			<< "4.Тостер" << endl
			<< "5.Микроволновая печь" << endl
			<< "6.Электрическая зубная щетка" << endl
			<< "Введите 0 что бы выйти." << endl<<endl;
		cout << "Выберите девайс\t" ;
		cin >> choice;
		cout << endl;
		switch (choice)
		{
		case 1:
			cout << "~~~~~~~~~~~~" << endl;
		Device[0]->Show();
		    cout << "~~~~~~~~~~~~" << endl;
		cout << endl << endl;
		break;
		case 2:
			cout << "~~~~~~~~~~~~" << endl;
		Device[1]->Show();
		    cout << "~~~~~~~~~~~~" << endl;
		cout << endl << endl;
		break;
		case 3:
			cout << "~~~~~~~~~~~~" << endl;
		Device[2]->Show();
		    cout << "~~~~~~~~~~~~" << endl;
		cout << endl << endl;
		break;
		case 4:
			cout << "~~~~~~~~~~~~" << endl;
		Device[3]->Show();
		    cout << "~~~~~~~~~~~~" << endl;
		cout << endl << endl;
		break;
		case 5:
			cout << "~~~~~~~~~~~~" << endl;
		Device[4]->Show();
		    cout << "~~~~~~~~~~~~" << endl;
		cout << endl << endl;
		break;
		case 6:
			cout << "~~~~~~~~~~~~" << endl;
		Device[5]->Show();
		    cout << "~~~~~~~~~~~~" << endl;
		cout << endl << endl;
		break;
		case 0:
            open = false;
			close.closeDoor();
			break;
		default:
			cout << "Такого девайса у на нету выберите от 1-6, или 0 для того что бы выйти." << endl<<endl;
			break;
	     }

	}
	
	delete Device[0];
	delete Device[1];
	delete Device[2];
	delete Device[3];
	delete Device[4];
	delete Device[5];

	return 0;
}




