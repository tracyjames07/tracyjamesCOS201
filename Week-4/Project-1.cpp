#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<char> str1;
vector<char> str2;

void palindromes (string x) {
	
    string flipped = "";
    
	for (int w = x.length() - 1; w >= 0; w--) {
	 //i = (x initially) w, a = x, b = y
        flipped += x[w];
        
    }
    
     if (x == flipped) {
     	
        cout << x << " is a palindrome! \n" << endl;
        
    } 
	
	else {
    	
        cout << x << " isn't a palindrome. :( \nTry inputing another word. \n" << endl;
        
	}
	
}

void anagrams (vector<char>&vec1, vector<char>&vec2) {
		
	sort(vec1.begin(),vec1.end());
	 
    sort(vec2.begin(), vec2.end());
	
	if (vec1 == vec2) {
		
		cout << "These two words are anagrams! \n" << endl;
		
	}
	
	else {
		
		cout << "These two words aren't anagrams. :( \nTry inputing another word. \n" << endl;
		
	}
	
}

void split_sentences (string x, string y, vector<char>&vec1, vector<char>&vec2) {
	//push the characters of the strings into the vectors
	 	for (char w:x) {
	 		
		 	vec1.push_back(w);
		 	
		}
		
   		for (char w:y) {
   			
		 	vec2.push_back(w);
		 	
		}

}

int main() {
	
    string word_1; // Original string
	cout << "Input a word to start: ";
    cin >> word_1;
      
    string word_2;
	cout << "Now, input another word: ";
    cin >> word_2;
    
    split_sentences(word_1, word_2, str1, str2);
    
    //call the palindrome function
    palindromes(word_1);
    palindromes(word_2);
    
    //call anagrams fn
	anagrams(str1, str2);
	
    return 0;
    
}