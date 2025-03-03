#include <iostream>
#include <string> //Contains functions for handling strings.
#include <algorithm> //For implementing data structures e.g. vectors, stacks, lists, queues et al.
#include <vector>
#include <cctype> //Contains inbuilt functions to handle C or C++.

using namespace std;

struct Question { //'struct' groups various item types into a single variable
    string question;
    vector<string> options;
    char correct_answer;
}; 

vector<Question> questions = {
	
    {"What is the closest planet to the sun?", {"Venus", "Mercury", "Uranus", "Mars"}, 'B'},
    {"What is the largest planet in our solar system?", {"Earth", "Neptune", "Mars", "Jupiter"}, 'D'},
    {"What is the chemical symbol for gold?", {"Fe", "Ag", "Cu", "Au"}, 'D'},
    {"Who painted 'The Scream'?", {"Edvard Munch", "Leonardo da Vinci", "Vincent Van Gogh", "Sandro Botticelli"}, 'A'},
    {"What is the tallest mammal on Earth?", {"Giraffe", "Elephant", "Hippopotamus", "Rhinoceros"}, 'A'},
    {"The second largest rainforest in the world located where?", {"The Australiasian Realm", "The Congo Rainforest", "Mesoamerica", "Sundaland"}, 'B'},
    {"What is the currency of Nigeria?", {"Rand", "Naira", "Franc", "Cedis"}, 'B'},
    {"What is the national animal of the United States?", {"American Black Bear", "Chinchilla", "Bald Eagle", "Gray Wolf"}, 'C'},
    {"What is the second largest ocean in the world?", {"Pacific Ocean", "Atlantic Ocean", "Indian Ocean", "Arctic Ocean"}, 'B'},
    {"Which of these rivers are in Africa?", {"River Misisippi", "The Thames", "La Siene", "River Orange"}, 'D'}
	
};

int main() {
	
	//cout << "Welcome to the Pan-Atlantic University Computer Based Testing Platform. \n" << endl;
	//cout << "Today you'll be writing your first continuous assessment for General Studies 1 (GST 101). \n" << endl;
	//cout << "To start, please put in your full name, your matriculation number, your username (a combination of your first and last name), \nand the password (your course code) below. \nThank you. \n\n" << endl;
	
	//string fullname;
	//cout << "Your full name -- ";
	//cin >> fullname;
	
	//int matnum;
	//cout << "Your matriculation number -- ";
	//cin >> matnum;
	
	//string username;
	//cout << "Your username -- ";
	//cin >> username;
	
	//string password;
	//cout <<"Your password -- ";
	//cin >> password;
	
    vector<char> user_answers(questions.size(), ' ');
    vector<bool> skipped_questions(questions.size(), false);
    int score = 0;
    char choice;

    do { //The 'do' loop executes the code once and checks if the condition is true before running the sequence again.
        for (int i = 0; i < questions.size(); i++) {
            if (skipped_questions[i]) {
                continue;
            }

            cout << questions[i].question << endl;
            for (int j = 0; j < questions[i].options.size(); j++) {
                cout << char('A' + j) << ". " << questions[i].options[j] << endl;
            }

            cout << "Enter your answer or 'S' to skip: ";
            cin >> choice;
            choice = toupper(choice);

            if (choice == 'S') {
                skipped_questions[i] = true;
                continue;
            }

            if (choice == questions[i].correct_answer) {
                score++;
            }

            user_answers[i] = choice;
        }

        cout << "Do you want to return to skipped questions? (Y/N): ";
        cin >> choice;
        choice = toupper(choice);

        if (choice == 'Y') {
            for (int i = 0; i < questions.size(); i++) {
                if (skipped_questions[i]) {
                    cout << questions[i].question << endl;
                    for (int j = 0; j < questions[i].options.size(); j++) {
                        cout << char('A' + j) << ". " << questions[i].options[j] << endl;
                    }

                    cout << "Enter your answer: ";
                    cin >> choice;
                    choice = toupper(choice);

                    if (choice == questions[i].correct_answer) {
                        score++;
                    }

                    user_answers[i] = choice;
                    skipped_questions[i] = false;
                }
            }
        }
    } while (choice == 'Y');

    cout << "Your score is: " << score << "/" << questions.size() << endl;

    cout << "Do you want to view your answers? (Y/N): ";
    cin >> choice;
    choice = toupper(choice); //'toupper' makes the input a capital letter.

    if (choice == 'Y') {
        for (int i = 0; i < questions.size(); i++) {
            cout << "Question " << i + 1 << ": ";
            if (user_answers[i] == questions[i].correct_answer) {
                cout << "Correct" << endl;
            } else {
                cout << "Incorrect" << endl;
            }
        }
    }

    return 0;
}