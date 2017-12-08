#include <iostream>
#include <cmath>

using namespace std; 

int main(){
    int ROWS,COLS;
    ROWS = 4;
    COLS = 5;
    int arr[ROWS][COLS] = {
	 {3,-3,-2,53,49},
	 {-1,9,85,2,-31},
	 {3,1,-86,4,52},
	 {2,5,30,-40,-95}
	};
	int temp;
	for(int h = 0;h < COLS;h++){
	 for (int i = 0; i < COLS ; i++) {
        for (int j = 0; j < COLS - 1; j++) {
            if (arr[h][j] > arr[h][j + 1]) {
                temp = arr[h][j];
                arr[h][j] = arr[h][j + 1];
                arr[h][j + 1] = temp;
            }
        }
    }
}
int  a = 0, pos = -1;
    for(int i = 0; i < COLS; i++) {
        for(int j = 0; j < ROWS; j++) {
            if( arr[j][i] >=  0)
                  a++;
        }
        if(a == ROWS) {
            pos = i;
            break;
        }
        a = 0;
    }
    if(pos != -1)
        cout << "Columns without a negative element: " << pos + 1 << endl;
        cout << endl;



    for(int i= 0; i < ROWS; i++) {
         for(int j = 0; j < COLS; j++){
             cout << arr[i][j] << '\t';
        }
         cout << endl;
    }

	return 0;
}

