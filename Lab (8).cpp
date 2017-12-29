#include <iostream>
#include <ctime> 
#include <cstring>
#include <cstdlib>
#include <string>

using namespace std;

struct BOOK {
	int udk;// nomer UDK
	int year;//god izdaniya
	int kol;//kol-vo ekzemplyarov knigi
	string surname;//familiya authora
	string title;//nazvanie
	char name;//inicial (imya)
	char otch;//inicial (othcestvo)
};

int main() {
	string nazvanie;
	const int SIZE = 2;
	int b;
	BOOK book[SIZE];

	cout << "1.List\n2.Add\n3.Delete info about books\n" << endl;
	int a = true;

	while(a) {
		cin >> b;
		switch (b) {
		    case 1: {

			int temp;
			for (int i = 0; i < SIZE - 1; i++) {
				for (int j = 0; j < SIZE - i - 1; j++) {
					if (book[j].year > book[j + 1].year) {
						temp = book[j].year;
						book[j].year = book[j + 1].year;
						book[j + 1].year = temp;
					}
				}
			}
			cout << "Number UDK | Surname.N.P | Title | Year of publishing | Number of copies" << endl;
			
			for (int i = 0; i < SIZE; i++) {
				cout << book[i].udk << " | " << book[i].surname << "." << book[i].name << "." << book[i].otch << " | " << book[i].title << " | " << book[i].year << " | " << book[i].kol << endl;
			}
			cout << endl;
			break;
		    }

			case 2: {
				for (int i = 0; i < SIZE; i++) {
					cout << "Enter number UDK: " << endl;
					cin >> book[i].udk;
					cout << "Enter surname: " << endl;
					cin >> book[i].surname;
					cout << "Enter initials (name and patronymic): " << endl;
					cin >> book[i].name >> book[i].otch;
					cout << "Enter title: " << endl;
					cin >> book[i].title;
					cout << "Enter year of publishing: " << endl;
					cin >> book[i].year;
					cout << "Enter number of copies: " << endl;
					cin >> book[i].kol;
				}
				break;
			}

			case 3: {
				cout << "Enter title: " << endl;
				cin >> nazvanie;

				for (int i = 0; i < SIZE; i++) {
					if (nazvanie == book[i].title) {
						book[i].kol = book[i].kol--;
					}
				}
			}
		}	   
	}
	system("pause");
	return 0;
}
