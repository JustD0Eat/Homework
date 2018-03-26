#include <iostream>
#include <ctime> 
#include <string>
#include <cstdlib>

using namespace std;

class Sword;
class Human;

class Human{
	public:
		void getSword(Sword &Excalibur);
};

class Sword {
	int value;
	string name;
	
	public:
		Sword(int value,string name){
			this->value = value;
			this->name = name;
		}
	
	friend void Human::getSword(Sword &Excalibur);
};

int main(){
	Sword Excalibur(1000, "Excalibur");
	Human Artur;
	Artur.getSword(Excalibur);
	
	return 0;
}

void Human::getSword(Sword &Excalibur){
	cout << "Description sword: Value - " << Excalibur.value << "\t, Name - " << Excalibur.name << endl;
}


