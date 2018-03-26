#include <iostream>
#include <ctime> 
#include <string>
#include <cstdlib>

using namespace std;

class Transport {
	public:
	virtual void mothion() = 0;
};

class Car:public Transport{
	public:
		void mothion() override{
			cout << "Moving on the road!" << endl;
		}
};

class Aircraft:public Transport{
	public:
		void mothion() override{
			cout << "Traveling by air!" << endl;
		}
};

class Boat:public Transport{
	public:
		void mothion() override{
			cout << "Moving on the water!" << endl;
		}
};

class Human{
	public:
		void mothion(Transport *transport){
			transport->mothion();
		}
};

int main(){
	Human Vasya;
	Boat Ferrari;
	Aircraft Boeing;
	Car Lada;
	
	Vasya.mothion(&Ferrari);
	Vasya.mothion(&Boeing);
	Vasya.mothion(&Lada);
	
	system("pause");
	return 0;
}
