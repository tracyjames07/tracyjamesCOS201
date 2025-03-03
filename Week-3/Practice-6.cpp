#include <iostream>
using namespace std;

int score = 65;

int main() {
	
	if (score >= 70 && score <= 100) {
	
		cout << "Grade A" << endl;
		cout << "Excellent!" << endl;
		
	}
	
	else if (score >= 60 && score <= 69) {
		
		cout << "Grade B" << endl;
		cout << "Very good!" << endl; 
		
	}
	
	else if (score >= 50 && score <= 59)
		cout << "Grade C" << endl;
		
	else if (score >= 45 && score <= 49)
		cout << "Grade D" << endl;
		
	else if (score >= 40 && score <= 44)
		cout << "Grade E" << endl;
		
	else if (score >= 0 && score <= 39)
		cout << "Grade F" << endl;
		
	else
		cout << "Enter a valid score." << endl;
		
	return 0;
	
}