#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <cstdio>

using namespace std;

struct NOTEBOOK{
	struct disp_res { // разрешающая способность дисплея
	int х; // по горизонтали
	int у; // по вертикали
	}res;
	int f; // частота регенерации
	float d; // размер диагонали дисплея
	int price; // цена
	char model[21]; // наименование
	int ob;
	int mhz;
};

NOTEBOOK a[16];
char s[76];
char tmp[10];

void read(){
	    ifstream fin("note.txt");
		int i = 0;
		while (!fin.eof()) {
			fin.getline(s, 76);

			strncpy_s(a[i].model, s, 18);

			strncpy_s(tmp, s + 18 , 4);
			a[i].price = atoi(tmp);

			strncpy_s(tmp, s + 66, 2);
			a[i].f = atoi(tmp);

			strncpy_s(tmp, s + 49, 4);
			a[i].d = atof(tmp);

			strncpy_s(tmp, s + 56, 4);
			a[i].res.х = atoi(tmp);

			strncpy_s(tmp, s + 61, 4);
			a[i].res.у = atoi(tmp);

			strncpy_s(tmp, s + 42, 3);
			a[i].mhz = atoi(tmp);

			strncpy_s(tmp, s + 54, 1);
			a[i].ob = atoi(tmp);

			i++;
		}
		fin.close();
	}

void write(int k, NOTEBOOK arr[16]) {
	ofstream fout("note.bin", ios::binary);
	for (int i = 0; i < k; i++) {
		fout << &k << &arr[i].model << &arr[i].price << &arr[i].d << &arr[i].f << &arr[i].res.х << &arr[i].res.у;
	}
	fout.close();
}
  
int main() {
	int j = 0;
	NOTEBOOK new_a[16], tmp[1];
	read();
	for (int i = 0; i < 16; i++) {
		if (a[i].ob == 2) {
			strncpy_s(new_a[j].model, a[i].model, 18);
			new_a[j].price = a[i].price;
			new_a[j].d = a[i].d;
			new_a[j].f = a[i].f;
			new_a[j].res.х = a[i].res.х;
			new_a[j].res.у = a[i].res.у;
			j++;
		}
	}
	for (int i = 0; i < j - 1; i++) {
		if (new_a[i].mhz < new_a[i + 1].mhz) {
			tmp[0] = new_a[i];
			new_a[i] = new_a[i + 1];
			new_a[i + 1] = tmp[0];
		}
	}
	write(j, new_a);
	cout << "Done" << endl;

	system("pause");
	return 0;
}
	

