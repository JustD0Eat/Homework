#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

using namespace std;


int main(){
	ifstream fin;
	fin.open("file.dat");

	string text;


	while (!fin.eof()){
		text = "";
		getline(fin, text);
		cout << text << endl;
	}
	fin.clear();
	fin.seekg(0, ios::beg);

	char word[10];

	cout << "Enter word: " << endl;
	cin >> word;
	cout << endl;

	while (!fin.eof()){
		text = "";
		fin >> text;
			if (text == word) {
				cout << "'" << word << "'" << endl;
			}
			else {
				cout << text << endl;
			}
	}
	fin.close();
	system("pause");
	return 0;
}
