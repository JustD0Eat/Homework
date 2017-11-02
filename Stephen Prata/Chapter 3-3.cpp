#include <iostream>
using namespace std;

  int main(){
    float gradus,minutes,sec,degrees;
    const int uglsec = 3600;
    const int uglmin = 60; 
	cout << "Enter a latitude in degrees , minutes , and seconds: " << endl;
	cout << "First, enter the degrees: ";
	cin >> gradus;
	cout << "Next,enter the minutes of arc: ";
	cin >> minutes;
	cout << "Finally,enter the seconds of arc: ";
	cin >> sec;
	degrees = gradus + minutes/uglmin + sec/uglsec;
	cout << gradus << " degrees, " << minutes << " minutes, " << sec << " seconds = " << degrees << " degrees" << endl;
  	system ("pause");
  return 0;
} 
 

	  
	  
	  
 

