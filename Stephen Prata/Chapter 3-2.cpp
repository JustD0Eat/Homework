#include <iostream>
using namespace std;

  int main(){
  float fut,duim,funt,bmi;
  cout << "Enter your growth in ft: " << endl;
  cin >> fut;
  cout << "Enter your growth in inches: " << endl;
  cin >> duim;
  cout << "Enter your weight in pounds: " << endl;
  cin >> funt;
  duim = duim * 0.0254;
  funt = funt/2.2;
  bmi = funt/duim*duim;
  cout << "Body mass index equal: " << bmi << endl;
  return 0;
} 
 

	  
	  
	  
 

