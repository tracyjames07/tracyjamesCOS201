//An array example summing up values in a array.
#include <iostream>
using namespace std;

short score [] = {6, 3, 4, 2, 4};
long n, result = 0;

int main() {
	
	for (n = 0; n < 5; n++) {
		
		result += score[n];
		
	}
	
	//'short' is half the size of int.
	//'double' is twice the size of int.
	//A multidimenstional array is an array with one or multiple arrays stored within it.
	
	cout << result;
	cout << score[5] << endl;
	cout << score[6] << endl;
	cout << score[7] << endl;
	cout << score[8] << endl;
	cout << score[9] << endl;	
	
	return 0;
	
}