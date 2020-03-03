#include "pch.h"
#include <iostream>
#include <vector>
#include "Dollar.h"
#include "Euro.h"
#include "Pound.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int e;
	int dollarh, euroh, poundh;
	std::vector<Currency *> bodies;

	Currency *save;
	do {
		system("pause");
		system("cls");
		cout << "Введите номер выбора: " << endl;
		cout << "1. Перевести доллары в рубли  " << endl;
		cout << "2. Перевести евро в рубли  " << endl;
		cout << "3. Перевести стерлинги в рубли  " << endl;
		cout << "4. Перевести стерлинги в пенсы" << endl;
		cout << "5. Перевести доллары в центы" << endl;
		cout << "6. Выход из программы" << endl;
		cout << "ХАХАХА, Я ПОШУТИИИИЛ" << endl;

		cin >> e;
		cin >> e;
		switch (e)
		{
		case 1:
		{
			cout << "Введите число долларов для перевода в рубли" << endl;
			cin >> dollarh;

			save = new Dollar(dollarh);
			save->Print(cout) << ", Dollar v rubl =  " << save->PerevodRubl() << endl;
			bodies.push_back(save);
		}; break;
		case 2:
		{
			cout << "Введите число евро для перевода в рубли" << endl;
			cin >> euroh;

			save = new Euro(euroh);
			save->Print(cout) << ", Euro v rubl = " << save->PerevodRubl()  << endl;
			bodies.push_back(save);
		}; break;
		case 3:
		{
			cout << "Введите число фунтов стерлингов для перевода в рубли" << endl;
			cin >> poundh;

			save = new Pound(poundh);
			save->Print(cout) << ", Pound v rubl = = " << save->PerevodRubl() << endl;
			bodies.push_back(save);
		}; break;
		case 4:
		{
			cout << "Введите число фунтов стерлингов для перевода в пенсы" << endl;
			cin >> poundh;

			save = new Pound(poundh);
			save->Print(cout) <<  ", Pound v pensax = = " << save->perev() << endl;
			bodies.push_back(save);
		}; break;
		case 5:
		{
			cout << "Введите число долларов для перевода в центы" << endl;
			cin >> dollarh;

			save = new Dollar(dollarh);
			save->Print(cout) << ", Dollar v cents = = " << save->perev() << endl;
			bodies.push_back(save);
		}; break;
		case 6:
		{
			return 0;
		}; break;
		}
	} while (e != 8);
}