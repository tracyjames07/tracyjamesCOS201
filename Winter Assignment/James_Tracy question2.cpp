#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>
#include <algorithm>
#include <random>

using namespace std;

string words[10] = {"catastrophe", "trogdolyte", "bonobo", "wassail", "cavalier", "pistachio", "venerate", "galvanise", "scintilla", "paroxysm"};
string mumbleJumble[10] = {};

int points = 0;
int GetcorrectLetter = 5;

string hints[10] = {"\n\nnoun. A sudden violent event that brings about great loss or destruction. \n\n",
                     "\n\nnoun. A person who lived in a cave. A person who is regarded as being deliberately ignorant or old-fashioned. \n\n",
                     "\n\nnoun. A primate closely related to the chimpanzee. \n\n",
                     "\n\nverb. To go from house to house at Christmas singing carols. \n\n",
                     "\n\nnoun. The edible page green seed of a Mediterranean tree. \n\n",
                     "\n\nnoun. Great respect; reverence. \n\n",
                     "\n\nverb. Shock or excite (someone) into taking action. \n\n",
                     "\n\nnoun. A tiny trace or sparl of a specified quality or feeling. \n\n",
                     "\n\nnoun. A sudden attack or outburst of a particular emotion or activity. \n\n"};

void goTime() {
	
    int questions = 0;

    while (questions < 10) {
    	
        string unscrambled = "";
        int index = 0;
        string input;

        while (true) {
        	
            cout << "\n\nGet correct letter attempts: " << GetcorrectLetter << endl;
            cout << "Scrambled word: " << mumbleJumble[questions] << endl;

            cout << "Guess the word: ";
            cin >> input;
            transform(input.begin(), input.end(), input.begin(), ::tolower);

            if (input == words[questions]) {            	
                cout << "\nYou got it! \n" << endl;
                questions++;
                points++;
                GetcorrectLetter++;
                break;  
            } 
			else if (input == "1") {
                cout << "\nSkipping to next question.\n";
                questions++;
                break;
            } 
			else if (input == "2") {
                cout << "\nHere's a hint! --- " << hints[questions] << endl;
            } 
			else if (input == "3") {
                if (GetcorrectLetter > 0) {
                    unscrambled += words[questions][index];
                    cout << "\nHere's the correct letter: " << unscrambled << endl;
                    index++;
                    GetcorrectLetter--;
                } 
				else {
                    cout << "\nIt seems like you've exhausted your ability to get correct letters. Sorry about that. \n=(" << endl;
                }
            } 
			else {
                cout << "\nYou are unfortunately incorrect..." << endl;
                cout << "The correct word was " << words[questions] << "." << endl;
                questions++;
                break;
            }
        }

        cout << "\nPoints -- " << points << "/" << questions << endl;
    }
}

string scramble(const string& text) {
	
    string shuffle = text;

    for (int i = 0; i < text.length(); i++) {
        int j = rand() % shuffle.length();
        swap(shuffle[i], shuffle[j]);
    }

    return shuffle;
}

void play() {
    for (int i = 0; i < 10; i++) {
        string scrambled = scramble(words[i]);
        mumbleJumble[i] = scrambled;
    }

    goTime();
}

int main() {
    char option;
    string response;

    cout << "Welcome to the WORD SCRAMBLE GAME! \n\nTo proceed, press 'G'. If not, press 'X' to exit the application. \n\n" << endl;

    cout << "Input your option: ";
    cin >> option;
    option = toupper(option);

    if (option == 'G') {
        cout << "\n\nLet's proceed to the game! But first, we've got to get a hang of the rules." << endl;
        cout << "\nThe game is pretty simple. You are given a total of ten scrambled words, and your job is to guess the words and spell them correctly." << endl;
        cout << "\nYou get a total of five attempts to GET THE CORRECT LETTER, and after that elapses, you can't anymore. Bummer... I know." << endl;
        cout << "But on the bright side, for every correct answer, your attempts increase by one!" << endl;
        cout << "\nPSST! I just wanted to let you know you can use hints! So don't feel too bad if you're struggling." << endl;
        cout << "\n\nHere's a bunch of keys you should keep in mind." << endl;
        cout << "\na. ENTER '1' to skip to the next question. \nb. ENTER '2' to get a hint. \nc. ENTER '3' to GET THE CORRECT LETTER." << endl;
        cout << "\n\nNow, are you ready to start the game? ";

        cout << "'Y'/'N': ";
        cin >> response;
        transform(response.begin(), response.end(), response.begin(), ::toupper);

        if (response == "Y") {
            cout << "\n\nAlright, let's start! GOOD LUCK! \n\n^o^\n\n" << endl;
            play();
        } 
		else if (response == "N") {
            cout << "\n\nThat's a shame... \nWell, I guess I'll see you next time! Ciao! \n\n^.^\n\n" << endl;
        } 
		else {
            cout << "\n\nOopsie. Wrong input, buddie..." << endl;
        }
    } 
	else if (option == 'X') {
        cout << "\n\nExiting the application..." << endl;
    } 
	else {
        cout << "\n\nIncorrect input. Please try again." << endl;
    }

    return 0;
}