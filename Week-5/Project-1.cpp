#include <iostream>
using namespace std;

int matrix_a[3][3] = {{2, 4, 6}, {7, -5, 9}, {4, 4, 0}};
int matrix_b[3][3] = {{3, 12, 4}, {8, 15, 1}, {13, 17, 21}};
int matrix_c[3][3];

int main() {
	
	for (int x = 0; x < 3; x++) {
		
		for (int y = 0; y < 3; y++) {
			
			matrix_c[x][y] = matrix_a[x][y] + matrix_b[x][y];
			
		}

	}
	
	cout << 
	return 0;
	
}