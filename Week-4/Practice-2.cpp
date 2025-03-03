//Range
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	
	int upper;
	cout <<"Enter a value for your upper limit -- ";
	cin >> upper;
	
	int lower;
	cout <<"Enter a value for your lower limit -- ";
	cin >> lower;
	
	int sum;
	
	
	if (upper < lower) {
		
		cout << "\n! Your lower limit cannot be greater than your upper limit.";
		
	}
	
	else {
		
		for (int a = lower; a <= upper; a++) {
			
			if (a % 2 == 1) {
				
				cout << a << "\t";
				sum += a;
			}
			
		}
		
		if (sum == 0) {
			
			cout << "\nThere are no odd numbers between " << lower << " and " << upper << ".";
			
		}
		
		else {
			
			cout << "\nThe sum of all odd numbers between " << lower << " and " << upper << " is " << sum << "."; 
			
		}
		
	}
	
}