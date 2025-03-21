// C++ program for the above approach

#include <bits/stdc++.h>
using namespace std;

// Function that sorts the given string
// and transform a sorted string to uppercase
string sortString(string word)
{
    // Transformed to uppercase
    transform(word.begin(), word.end(),
              word.begin(), ::toupper);

    // Sort the words
    sort(word.begin(), word.end());
    return word;
}

// Function that finds the anagram of
// given string in the given text file
void jumbledString(string jumble)
{
    // Initialize strings
    string checkPerWord = "";
    string userEnteredAfterSorting;

    // Sort the string
    userEnteredAfterSorting
        = sortString(jumble);

    // Using filehandling ifstream
    // to read the file
    ifstream words("words.txt");

    // If file exist
    if (words) {

        // Check each and every word
        // of words.txt(dictionary)
        while (getline(words,
                       checkPerWord)) {

            string Ch
                = sortString(checkPerWord);

            // If words matches
            if (Ch
                == userEnteredAfterSorting) {

                // Print the word
                cout << checkPerWord
                     << endl;
            }
        }

        // Close the file
        words.close();
    }
}

// Driver Code
int main()
{
    // Given string str
    string string = "tac";

    // Function Call
    jumbledString(string);

    return 0;
}