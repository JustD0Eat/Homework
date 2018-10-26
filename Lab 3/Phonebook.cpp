#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	struct data {
		int dur, id;
		string from; string to; string date; string time;
	};
	vector <data> list;

	data bell;
	bell.date = "5.08.18";
	bell.dur = 25;
	bell.from = "����";
	bell.time = "13:02";
	bell.to = "����";
	bell.id = 1;

	data bell1;
	bell1.date = "5.08.18";
	bell1.dur = 25;
	bell1.from = "����";
	bell1.time = "13:02";
	bell1.to = "����";
	bell1.id = 2;

	data bell2;
	bell2.date = "27.06.18";
	bell2.dur = 30;
	bell2.from = "����";
	bell2.time = "15:27";
	bell2.to = "�����";
	bell2.id = 3;

	data bell3;
	bell3.date = "30.02.18";
	bell3.dur = 15;
	bell3.from = "�����";
	bell3.time = "16:20";
	bell3.to = "����";
	bell3.id = 4;

	data bell4;
	bell4.date = "25.05.18";
	bell4.dur = 10;
	bell4.from = "����";
	bell4.time = "17:28";
	bell4.to = "����";
	bell4.id = 5;

	list.push_back(bell);
	list.push_back(bell1);
	list.push_back(bell2);
	list.push_back(bell3);
	list.push_back(bell4);

	//����� �� �����
	string name;
	cout << "������� ���: " << endl;
	cin >> name;
	cout << endl;
	for (int i = 0; i < list.size(); i++) {
		if (list[i].from == name or list[i].to == name) {
			cout << "ID: " << list[i].id << endl;
			cout << "����: " << list[i].date << endl;
			cout << "������������: " << list[i].dur << endl;
			cout << "������: " << list[i].from << endl;
			cout << "����: " << list[i].to << endl;
			cout << "�����: " << list[i].dur << endl;
			cout << endl;
		}
	}
	//����� �� ����
	string date1;
	cout << "������� ����: " << endl;
	cin >> date1;
	cout << endl;
	for (int i = 0; i < list.size(); i++) {
		if (list[i].from == name or list[i].to == name) {
			cout << "ID: " << list[i].id << endl;
			cout << "����: " << list[i].date << endl;
			cout << "������������: " << list[i].dur << endl;
			cout << "������: " << list[i].from << endl;
			cout << "����: " << list[i].to << endl;
			cout << "�����: " << list[i].dur << endl;
			cout << endl;
		}
	}

	//����� �� ������������ ���������
	int dur1;
	cout << "������� ������������ ���������: " << endl;
	cin >> dur1;
	cout << endl;
	for (int i = 0; i < list.size(); i++) {
		if (list[i].from == name or list[i].to == name) {
			cout << "ID: " << list[i].id << endl;
			cout << "����: " << list[i].date << endl;
			cout << "������������: " << list[i].dur << endl;
			cout << "������: " << list[i].from << endl;
			cout << "����: " << list[i].to << endl;
			cout << "�����: " << list[i].dur << endl;
			cout << endl;
		}
	}
	}

	//���������� �� ������������ ���������
	for (int i = 0; i < list.size(); i++) {
		for (int j = i + 1; j < list.size(); j++) {
			if (list[i].dur > list[j].dur) swap(list[i].dur, list[j].dur);
		}
	}

	cout << "���������� �� ������������ ���������: " << endl;
	for (int i = 0; i < list.size(); i++) {
		cout << list[i].dur << endl;
	}
	cout << endl;

	//���������� ������ �������� � ���������� �����

	string zvon, otvet, chislo, vremya;
	int dlina;

	cout << "���������� ������ �������� � ���������� �����: " << endl;
	cout << "������� ��� ����,��� ������: " << endl;
	cin >> zvon;
	cout << "������� ��� ����,��� ������� �� ������: " << endl;
	cin >> otvet;
	cout << "������� ����: " << endl;
	cin >> chislo;
	cout << "������� ����� ���������: " << endl;
	cin >> vremya;
	cout << "������� ������������ ���������: " << endl;
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

	cout << "����� ������: " << endl;
	for (int i = 0; i < list.size(); i++) {
		cout << "ID: " << list[i].id << endl;
		cout << "����: " << list[i].date << endl;
		cout << "������������: " << list[i].dur << endl;
		cout << "������: " << list[i].from << endl;
		cout << "����: " << list[i].to << endl;
		cout << "�����: " << list[i].dur << endl;
		cout << endl;
	}

	//�������� �������� �� ���������� �����
	
	int stroka;
	cout << "������� ����� ��������, ������� ���������� �������: " << endl;
	cin >> stroka;

	auto iter = list.cbegin();
	list.erase(iter + stroka - 1);

	for (int i = 0; i < list.size(); i++) {
	    cout << "ID: " << list[i].id << endl;
		cout << "����: " << list[i].date << endl;
		cout << "������������: " << list[i].dur << endl;
		cout << "������: " << list[i].from << endl;
		cout << "����: " << list[i].to << endl;
		cout << "�����: " << list[i].dur << endl;
		cout << endl;
	}

	system("pause");
	return 0;
}
