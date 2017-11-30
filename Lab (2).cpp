#include <iostream>
#include <cmath>

using namespace std;
  
int main()
{
	int n,otr,sum = 0 ;
	int etomin;
	cout << "Enter amount elements: " << endl;
	cin >> n;
	double arr[n];
	for(int i = 0;i < n;++i){
		cout << "Enter elements: " << endl;
		cin >> arr[i];
		if(arr[i] < 0 ){
			otr++;
		}
    }
	cout << "Quantity negative array elements: " << otr << endl; 
	cout << " " << endl;
	
	
	double min = arr[0];
    for(int i = 0; i < n; ++i){
		if(abs(arr[i]) < abs(min)){
		    min = abs(arr[i]);
			etomin = i; 	
		}
    }
    cout << "Min: " << min << endl;	
    cout << " " << endl;

    for(int i = etomin + 1;i < n; ++i){
    	sum+=abs(arr[i]);
	}
	cout <<"Sum modules: " << sum << endl;
	cout << " " << endl;
	
	for(int i = 0;i < n;++ i){
		if(arr[i] < 0 ){
			arr[i]*=arr[i];
			cout << "Squares of negative elements of the array: " << arr[i] << endl;	
		}
	}
	cout << " " << endl;
	
	int temp;
	 for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        cout << "Array elements in ascending order: " << arr[i] << endl;
    } 
	return 0;
}

