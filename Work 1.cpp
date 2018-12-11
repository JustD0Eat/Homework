#include <iostream>

using namespace std; 

int main() {
	float Xn,Xk,dx,a,F,b,c;
	cout << "Enter X primary: " << endl;
	cin >> Xn;
	cout << "Enter X final: " << endl;
	cin >> Xk;
	cout << "Enter step: " << endl;
	cin >> dx;
	cout << "Enter a,b,c: " << endl;
	cin >> a >> b >> c;
	if (((int(a) + int(b) % 2)) && (~(int(a) || int(c))== 0)){
	for (float x = Xn;x <= Xk; x+= dx){
		float F;
		if((x == 0) && (b!= 0))
	    	F = (a*(x+c)*(x+c)) - b;
		
	    else if((x == 0) && (b == 0))
	    	F = (x - a)/ (-c);
	    
	    else
	        F = (a + x/c);
	    
		cout << "F = " << F << "," << "x = " << x << endl;
        }
    }
  else {
  	for (float x = Xn;x <= Xk; x+= dx){
		if((x == 0) && (b!= 0))
	    	F = (a*(x+c)*(x+c)) - b;
		
	    else if((x == 0) && (b == 0))
	    	F = (x - a)/ (-c);
	    
	    else
	        F = (a + x/c);
	    
	    
	    F = int (F);
	    cout << "F = " << F << "," << "x = " << x << endl;
      }
  return 0;
  } 
}
