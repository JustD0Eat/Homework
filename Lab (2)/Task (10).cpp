#include <iostream>
#include <ctime> 
#include <string>
#include <cstdlib>

using namespace std;

class House{
		class Brick{
			int x;
			int y;
			int z;
			
			public:
				Brick(int x,int y,int z){
					this->x = x;
					this->y = y;
					this->z = z;
				}
				
				string info(){
					return "Size: x = " + to_string(x) + "y = " + to_string(y) "z = " + to_string(z);
				}
				
		};
		
	static const int SIZE = 3;
	
	Brick bar[SIZE]
	{
	Brick(3,5,5),
	Brick(4,2,9),
	Brick(7,8,4)
	};
	
	public:
		void list(){
			for(int i = 0;i < SIZE;i++){
				cout << bar[i].info() << endl;
			}
		}
};

int main(){
	House Cottage;
	Cottage.list();
	
	system("pause");
	return 0;
}
