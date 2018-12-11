#include <iostream>

using namespace std;

const int SIZE = 8;
int znak;

struct ZNAK{
	string surname,name,znak;
	int rozhd [3];

};

int main(){
	
	ZNAK arr[SIZE];
	for(int i = 0;i < SIZE;i++){
		cout << "Enter your name and surname: " << endl;
		cin >> arr[i].name >> arr[i].surname;
		
		cout << "Enter your zodiac sign: " << endl;
		cin >> arr[i].znak;
		
		cout << "Enter day of your birth: " << endl;
		cin >> arr[i].rozhd[0];
		
		cout << "Enter month of your birth: " << endl;
		cin >> arr[i].rozhd[1];
		
		cout << "Enter year of your birth: " << endl;
		cin >> arr[i].rozhd[2];
}
    cout << endl;
    
ZNAK temp;
    bool is_larger_by_date;
    for (int k = 0; k < SIZE-1; k++)
    {
        for (int i = 0,j; i < SIZE-1; i++)
        {
            is_larger_by_date = false;
            j = i++;
            if (arr[i].rozhd[2] > arr[j].rozhd[2])
                is_larger_by_date = true;
            else if (arr[i].rozhd[2] == arr[j].rozhd[2])
            {
                if (arr[i].rozhd[1] > arr[j].rozhd[1])
                    is_larger_by_date = true;
                else if (arr[i].rozhd[1] == arr[j].rozhd[1])
                {
                    if (arr[i].rozhd[0] > arr[j].rozhd[0])
                        is_larger_by_date = true;
                }
            }
 
            if (is_larger_by_date){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
   

		
	for(int i = 0;i < SIZE;i++){
		cout << "Name: " << endl;
		cout << arr[i].name << endl;
		cout << endl;
		cout << "Surname: " << endl;
		cout << arr[i].surname << endl;
		cout << endl;
		cout << "Date of birth: " << endl;

		cout << arr[i].rozhd[0] << ".";
		cout << arr[i].rozhd[1] << ".";
		cout << arr[i].rozhd[2] << endl;
		cout << endl;
		
		cout << "Zodiac sign: " << endl;
		cout << arr[i].znak << endl;
		cout << endl;
}

  string zodiac;
  cout << "Enter zodiac sign: " << endl;
  cin >> zodiac;
  cout << endl;
  
  for(int i = 0;i < SIZE;i++){
  	if(arr[i].znak == zodiac){
  		cout << "Name: " << endl;
		cout << arr[i].name << endl;
		cout << endl;
		cout << "Surname: " << endl;
		cout << arr[i].surname << endl;
		cout << endl;
		cout << "Date of birth: " << endl;

		cout << arr[i].rozhd[0] << ".";
		cout << arr[i].rozhd[1] << ".";
		cout << arr[i].rozhd[2] << endl;
		cout << endl;
		
		cout << "Zodiac sign: " << endl;
		cout << arr[i].znak << endl;
		cout << endl;
	  }
	if(arr[i].znak != zodiac){
		cout << "People with this zodiac sign aren't in the list" << endl; 
		break;
    }
  }	
		
return 0;	
}
