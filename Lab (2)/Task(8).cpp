#include <iostream>
#include <ctime> 
#include <string>
#include <cstdlib>

using namespace std;

class TV {
	public:
	string name;
	int x,y;
	
	TV(string name,int x,int y){
		this->name = name;
		this->x = x;
		this->y = y;
	}
	
	void info(){
		cout <<"Length: " << x << "\tWidth: " << y << "\tName: " << name << endl;
	}
};

class Computer:virtual public TV{
	public:
	string videocard;
	int number_of_cores;
	
	Computer(string videocard,int number_of_cores,string name,int x,int y):TV(name,x,y){
		this->videocard = videocard;
		this->number_of_cores = number_of_cores;
	}
	
	void info(){
		cout <<"Length: " << x << "\tWidth: " << y << "\tName: " << name << "\tVideocard: " << videocard << "\tNumber of cores: " << number_of_cores << endl;
	}
};

class Telephone: virtual public Computer, virtual public TV{
	public:
	string phone_number;
	int working_hours;
	
	Telephone(string phone_number,int working_hours,string videocard,int number_of_cores,string name,int x,int y):TV(name,x,y),Computer(videocard,number_of_cores,name,x,y){
		this->phone_number = phone_number;
		this->working_hours = working_hours;	
	}
	
	void info(){
		cout <<"Length: " << x << "\tWidth: " << y << "\tName: " << name << "\tVideocard: " << videocard << "\tNumber of cores: " << number_of_cores << "\nPhone number: " << phone_number << "\tWorking hours: " << working_hours << endl; 
	}
};

int main(){
	TV Samsung("Samsung",100,50);
	Samsung.info();
	cout << endl;
	
	Computer Mac("AMD",16,"Apple",200,100);
	Mac.info();
	cout << endl;
	
	Telephone Iphone("89209129587",50,"Intel",16,"Iphone",50,60);
	Iphone.info();
	cout << endl;
	
	system("pause");
	return 0;
}
