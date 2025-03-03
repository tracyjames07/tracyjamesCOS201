#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>

using namespace std;

struct Question {
    string question;
    vector<string> options;
    char correct_answer;
};

vector<Question> questions = {
    {"What is the closest planet to the sun?", {"Venus", "Mercury", "Uranus", "Mars"}, 'B'},
    {"What is the largest planet in our solar system?", {"Earth", "Jupiter", "Mars", "Saturn"}, 'B'},
    {"What is the chemical symbol for gold?", {"Fe", "Ag", "Cu", "Au"}, 'D'},
    {"Who painted 'The Scream'?", {"Edvard Munch", "Leonardo da Vinci", "Vincent Van Gogh", "Sandro Botticelli"}, 'A'},
    {"What is the tallest mammal on Earth?", {"Giraffe", "Elephant", "Hippopotamus", "Rhinoceros"}, 'A'},
    {"The second largest rainforest in the world located where?", {"The Australiasian Realm", "The Congo Rainforest", "Mesoamerica", "Sundaland"}, 'B'},
    {"What is the currency of Nigeria?", {"Rand", "Naira", "Franc", "Cedis"}, 'B'},
    {"What is the national animal of the United States?", {"American Black Bear", "Chinchilla", "Bald Eagle", "Gray Wolf"}, 'C'},
    {"What is the second largest ocean in the world?", {"Pacific Ocean", "Atlantic Ocean", "Indian Ocean", "Arctic Ocean"}, 'B'},
};

int main() {
    vector<char> user_answers(questions.size(), ' ');
    vector<bool> skipped_questions(questions.size(), false);
    int score = 0;
    char choice;

    do {
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

                    cout << "Enter your answer (A-D): ";
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
    choice = toupper(choice);

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