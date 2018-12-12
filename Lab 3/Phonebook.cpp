#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
#include <Windows.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	struct data 
	{
		int dur, id;
		string from; string to; string date; string time;
	};
	vector <data> list;

	data bell;
	bell.date = "5.08.18";
	bell.dur = 25;
	bell.from = "Петя";
	bell.time = "13:02";
	bell.to = "Вася";
	bell.id = 1;

	data bell1;
	bell1.date = "5.08.18";
	bell1.dur = 25;
	bell1.from = "Вася";
	bell1.time = "13:02";
	bell1.to = "Петя";
	bell1.id = 2;

	data bell2;
	bell2.date = "27.06.18";
	bell2.dur = 30;
	bell2.from = "Инна";
	bell2.time = "15:27";
	bell2.to = "Жанна";
	bell2.id = 3;

	data bell3;
	bell3.date = "30.02.18";
	bell3.dur = 15;
	bell3.from = "Гриша";
	bell3.time = "16:20";
	bell3.to = "Коля";
	bell3.id = 4;

	data bell4;
	bell4.date = "25.05.18";
	bell4.dur = 10;
	bell4.from = "Соня";
	bell4.time = "17:28";
	bell4.to = "Вика";
	bell4.id = 5;

	list.push_back(bell);
	list.push_back(bell1);
	list.push_back(bell2);
	list.push_back(bell3);
	list.push_back(bell4);

	//Поиск по имени
	string name;
	cout << "Введите имя: " << endl;
	cin >> name;
	cout << endl;
	for (int i = 0; i < list.size(); i++)
	{
		if (list[i].from == name or list[i].to == name) 
		{
			cout << "ID: " << list[i].id << endl;
			cout << "Дата: " << list[i].date << endl;
			cout << "Длительность: " << list[i].dur << endl;
			cout << "Откуда: " << list[i].from << endl;
			cout << "Куда: " << list[i].to << endl;
			cout << "Время: " << list[i].time << endl;
			cout << endl;
		}
	}
	//Поиск по дате
	string date1;
	cout << "Введите дату: " << endl;
	cin >> date1;
	cout << endl;
	for (int i = 0; i < list.size(); i++) 
	{
		if (list[i].date == date1) 
		{
			cout << "ID: " << list[i].id << endl;
			cout << "Дата: " << list[i].date << endl;
			cout << "Длительность: " << list[i].dur << endl;
			cout << "Откуда: " << list[i].from << endl;
			cout << "Куда: " << list[i].to << endl;
			cout << "Время: " << list[i].time << endl;
			cout << endl;
		}
	}

	//Поиск по длительности разговора
	int dur1;
	cout << "Введите длительность разговора: " << endl;
	cin >> dur1;
	cout << endl;
	for (int i = 0; i < list.size(); i++) 
	{
		if (list[i].dur == dur1) 
		{
			cout << "ID: " << list[i].id << endl;
			cout << "Дата: " << list[i].date << endl;
			cout << "Длительность: " << list[i].dur << endl;
			cout << "Откуда: " << list[i].from << endl;
			cout << "Куда: " << list[i].to << endl;
			cout << "Время: " << list[i].time << endl;
			cout << endl;
		}
	}


//Сортировка по длительности разговора
for (int i = 0; i < list.size(); i++) 
{
	for (int j = i + 1; j < list.size(); j++) 
	{
		if (list[i].dur > list[j].dur) swap(list[i].dur, list[j].dur);
	}
}

cout << "Сортировка по длительности разговора: " << endl;
for (int i = 0; i < list.size(); i++) 
{
	cout << list[i].dur << endl;
}
cout << endl;

//Добавление нового элемента в телефонную книгу

string zvon, otvet, chislo, vremya;
int dlina;

cout << "Добавление нового элемента в телефонную книгу: " << endl;
cout << "Введите имя того,кто звонил: " << endl;
cin >> zvon;
cout << "Введите имя того,кто отвечал на звонок: " << endl;
cin >> otvet;
cout << "Введите дату: " << endl;
cin >> chislo;
cout << "Введите время разговора: " << endl;
cin >> vremya;
cout << "Введите длительность разговора: " << endl;
cin >> dlina;
cout << endl;

data bell5;
bell5.id = list.size() + 1;
bell5.date = chislo;
bell5.dur = dlina;
bell5.from = zvon;
bell5.time = vremya;
bell5.to = otvet;

list.push_back(bell5);

cout << "Новый список: " << endl;
for (int i = 0; i < list.size(); i++) 
{
	cout << "ID: " << list[i].id << endl;
	cout << "Дата: " << list[i].date << endl;
	cout << "Длительность: " << list[i].dur << endl;
	cout << "Откуда: " << list[i].from << endl;
	cout << "Куда: " << list[i].to << endl;
	cout << "Время: " << list[i].time << endl;
	cout << endl;
}

//Удаление элемента из телефонной книги

int stroka;
cout << "Введите номер элемента, который необходимо удалить: " << endl;
cin >> stroka;

list.erase(list.cbegin() + stroka - 1);

cout << "Новый список: " << endl;
for (int i = 0; i < list.size(); i++) 
{
	cout << "ID: " << list[i].id << endl;
	cout << "Дата: " << list[i].date << endl;
	cout << "Длительность: " << list[i].dur << endl;
	cout << "Откуда: " << list[i].from << endl;
	cout << "Куда: " << list[i].to << endl;
	cout << "Время: " << list[i].time << endl;
	cout << endl;
}

system("pause");
return 0;
}
