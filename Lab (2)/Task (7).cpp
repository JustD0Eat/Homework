#include <iostream>
#include <ctime> 
#include <string>
#include <cstdlib>

using namespace std;

class Figure{
	int x;
	int y;
	int z;
	
	public:
		Figure (){
			x = y = z = 0;
		}
		
		Figure (int x,int y,int z){
			this->x = x;
			this->y = y;
			this->z = z;
		}
		
	void figure_size(){
		cout << "Coordinates: x = " << x << ", y = " << y << ", z = " << z << endl;
	}
	
	Figure operator+ (const Figure &obj){
		Figure creation;
		creation.x = this->x + obj.x;
		creation.y = this->y + obj.y;
		creation.z = this->z + obj.z;

		return creation;
	}
	
	Figure operator- (const Figure &obj){
		Figure creation;
		creation.x = this->x - obj.x;
		creation.y = this->y - obj.y;
		creation.z = this->z - obj.z;

		return creation;
	}
	
	Figure operator* (const Figure &obj){
		Figure creation;
		creation.x = this->x * obj.x;
		creation.y = this->y * obj.y;
		creation.z = this->z * obj.z;

		return creation;
	}
};

int main(){
	Figure a(3,3,2);
	Figure b(2,2,1);
	Figure c = a + b;
	Figure d = a - b;
	Figure e = a * b;
	
	c.figure_size();
	d.figure_size();
	e.figure_size();
	
	system("pause");
	return 0;
}
