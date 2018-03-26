#include <iostream>
#include <ctime> 
#include <string>
#include <cstdlib>

using namespace std;

class Player{
	int money;
	
public:	

	Player(int money){
		this->money = money;
	}
	
	Player(){
		this->money = 1000;
	}
	
	~Player(){}
	
	void info(){
		cout << "Deposit = " << money << endl;
		cout << endl;
	}
	
	void talk(){
		cout << "Hi, i want to play casino!" << endl;
	}
	
};

class Vishybala{
	int strength;
	
	public:
		static int count_vishybal;
		
		void info(){
			cout << "Strength = " << strength << endl;
		}
		
	    void talk(){
	        cout<< 	"You really good played. We want to tell you that was a mistake!" << endl;
	       }

    Vishybala (int strength){
    	this->strength = strength;
    	count_vishybal++;
	}
	
	Vishybala (Vishybala &Serega){
		this->strength = Serega.strength;
	}
};

int Vishybala::count_vishybal = 0;
  

int main(){
	srand(time(NULL));
	
	Player Goshan;

	Goshan.info();
	Goshan.talk();
	cout << endl;
	
	int x,y,z;
	int n;
	int money = 1000;
	
	cout << "Enter any character from the keyboard and press 'Enter' " << endl;
	cin >> n;
	cout << endl;
	
	money = money - 100;
	cout << "Start the game!\n" << "Money: -100. Deposit: " <<  money << endl;
	cout << endl;
	
	x = rand() % 3;
	cout << "Your first number: " << x << endl;
	y = rand() % 3;	
	cout << "Your second number: "<< y << endl;
	z = rand() % 3;
	cout << "Your third number: " << z << endl;
	cout << endl;

	if(x == z && y == x){
		money = money + 200;
		cout << "Lucky! Today is your day!" << "Money: +200 . Deposit: "<< money << endl;
	    Vishybala William(10);
     	Vishybala Serega(20);
	    William.talk();
	    cout << "We are here " << Serega.count_vishybal << "!" << endl;
	    cout << "William "; William.info(); 
	    cout << "Serega " ; Serega.info();
	    cout << "Together we are stronger! Bonus: Strength William +10" << endl;
	    William = Serega;
	    cout << "William "; William.info();
	    cout << "Serega " ; Serega.info();
	    cout << endl;
		return 0;
	}
	
	cout << "Try again! You have a chance!" << endl;
	 
	system ("pause");
	return 0;
}

