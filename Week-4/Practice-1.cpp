//Multiplication Table
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	
	int n;
	cout <<"Enter a value for n -- ";
	cin >> n;
	
	for (int i = 0; i <= n; i++) {
		
		for (int m = 0; m <= 12; m++) {
			int result = m * i;
			cout <<""<<m<<"*"<<i<<"="<<result<<"\t";
		}
		
		cout <<"\n";
	
	} 
		
}
