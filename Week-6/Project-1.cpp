#include <iostream>
#include <string>
#include <random>
#include <cstdlib>

using namespace std;

string scramble(const string & text) {
	
	string chars = text;
	for (int i = 0; i < chars.length(); i++) {
		
		int j = rand() % chars.length();
		char temp = chars[i];
		chars[i] = chars[j];
		chars[j] = temp;
		
	}
	
	return chars;
	
}

int main() {
	
	string text = "picses";
	string scrambled = scramble(text);
	
	cout << "Original: " << text << endl;
	cout << "Scrambled: " << scrambled << endl;
	
	return 0;
	
}
