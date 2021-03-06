﻿#include "stdafx.h"
#include <iostream>

using namespace std;

template <typename T>//Вариант 14(описать шаблон класса "Множество")
class set 
{
public:
	void FillSetA(T* arr, int a) //функция заполнения множества A элементами
	{
		cout << "Введите элементы множества A:" << endl;

		for (int i = 0; i < a; i++) 
		{
			cin >> arr[i];
		}
		cout << endl;
	}
	void FillSetB(T* arr, int b) //функция заполнения множества B элементами 
	{
		cout << "Введите элементы множества B:" << endl;

		for (int i = 0; i < b; i++) 
		{
			cin >> arr[i];
		}
		cout << endl;
	}

	void ShowSetA(T* arr, int a) //функция вывода упорядоченного множества A на экран
	{
		for (int i = 0; i < a; i++)
		{
			for (int j = i + 1; j < a; j++)
			{
				if (arr[i] > arr[j]) swap(arr[i], arr[j]);
			}
		}

		for (int i = 0; i < a; i++) 
		{
			cout << arr[i] << "\t";
		}
		cout << endl;
	}
	void ShowSetB(T* arr, int b) //функция вывода упорядоченного множества B на экран
	{
		for (int i = 0; i < b; i++)
		{
			for (int j = i + 1; j < b; j++)
			{
				if (arr[i] > arr[j]) swap(arr[i], arr[j]);
			}
		}

		for (int i = 0; i < b; i++) 
		{
			cout << arr[i] << "\t";
		}
		cout << endl;
	}

	void push_backA(T *&arr, int &a, T valueA) //функция добавления нового элемента в множество A
    {
		T* newArray = new T[a + 1];

		for (int i = 0; i < a; i++) 
		{
			newArray[i] = arr[i];
		}

		newArray[a++] = valueA;

		delete[] arr;

		arr = newArray;
	}

	void pop_backA(T *&arr, int &a) //удаление последнего элемента из множества A
	{
		T* newArray = new T[a--];

		for (int i = 0; i < a; i++) {
			newArray[i] = arr[i];
		}

		delete[] arr;

		arr = newArray;
	}

	void intersection(T *&arr1, T *&arr2, int a, int b) //функция пересечения множеств A и B и вывод результирующего множества на экран
	{
		int c = 0;

		for (int i = 0; i < a; i++) 
		{
			for (int j = 0; j < b; j++) 
			{
				if (arr1[i] == arr2[j]) 
				{
					c++;
				}
			}
		}

		T* arr3 = new T[c];

		int t = 0;

		for (int i = 0; i < a; i++) 
		{
			for (int j = 0; j < b; j++) 
			{
				if (arr1[i] == arr2[j]) 
				{
					arr3[t] = arr1[i];
					t++;
				}
			}
		}
		cout << endl;

		cout << "Пересечение множеств A и B: " << endl;

		for (int i = 0; i < t; i++) {
			cout << arr3[i] << "\t";
		}
		cout << endl;

		delete[] arr3;
	}

	void association(T *&arr1, T *&arr2, int a, int b) //функция объединения множеств A и B и вывод результирующего множества на экран
	{
		T* arr3 = new T[a + b];

		int t = 0;

		for (int i = 0; i < a; i++)
		{
			arr3[i] = arr1[i];
			t++;
		}
		cout << endl;

		for (int i = 0; i < b; i++)
		{
			arr3[t] = arr2[i];
			t++;
		}
		cout << endl;

		for (int i = 0; i < a + b; i++)
		{
			for (int j = i + 1; j < a + b; j++)
			{
				if (arr3[i] > arr3[j])swap(arr3[i], arr3[j]);
			}
		}


		int k = 0;

		for (int i = 0; i < a + b; i++)
		{
			for (int j = i + 1; j < a + b; j++)
			{
				if (arr3[i] == arr3[j])k++;
			}
		}

		T* arr4 = new T[a + b - k];

		int s = 0;

		for (int i = 0; i < a + b + 1; i++)
		{
			for (int j = i + 1; j < a + b + 1; j++)
			{
				arr4[s] = arr3[i];

				if (arr3[i] == arr3[j])
				{
					i++;
				}
				break;
			}
			s++;
		}

		cout << "Объединение множеств A и B: " << endl;

		for (int i = 0; i < a + b - k; i++)
		{
			cout << arr4[i] << "\t";
		}
		cout << endl;
		cout << endl;

		delete[] arr3;
		delete[] arr4;
	}
};

int main() 
{
	setlocale(0, "");

	int a, b;
	cout << "Введите размер множества A и B для элементов целочисленного типа:" << endl;
	cin >> a >> b;

	int* setA = new int[a];
	int* setB = new int[b];

	set <int> mySet;

	mySet.FillSetA(setA, a);

	mySet.ShowSetA(setA, a);

	mySet.FillSetB(setB, b);

	mySet.ShowSetB(setB, b);

	cout << "Введите элемент, который хотите добавить в множество A:" << endl;
	int valueA;
	cin >> valueA;
	cout << endl;

	mySet.push_backA(setA, a, valueA);

	mySet.ShowSetA(setA, a);
	cout << endl;

	cout << "Множество A без последнего элемента:" << endl;

	mySet.pop_backA(setA, a);

	mySet.ShowSetA(setA, a);
	cout << endl;

	mySet.intersection(setA, setB, a, b);

	mySet.association(setA, setB, a, b);

	delete[] setA;
	delete[] setB;

	int a1, b1;
	cout << "Введите размер множества A и B для элементов cимвольного типа:" << endl;
	cin >> a1 >> b1;

	char* setA1 = new char[a1];
	char* setB1 = new char[b1];

	set <char> mySet2;
	
	mySet2.FillSetA(setA1, a1);

	mySet2.ShowSetA(setA1, a1);

	mySet2.FillSetB(setB1, b1);

	mySet2.ShowSetB(setB1, b1);

	cout << "Введите элемент, который хотите добавить в множество A:" << endl;
	char valueA1;
	cin >> valueA1;
	cout << endl;

	mySet2.push_backA(setA1, a1, valueA1);

	mySet2.ShowSetA(setA1, a1);
	cout << endl;

	cout << "Множество A без последнего элемента:" << endl;

	mySet2.pop_backA(setA1, a1);

	mySet2.ShowSetA(setA1, a1);
	cout << endl;

	mySet2.intersection(setA1, setB1, a1, b1);

	mySet2.association(setA1, setB1, a1, b1);

	delete[] setA1;
	delete[] setB1;

	return 0;
}
