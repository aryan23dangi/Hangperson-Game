// Title: Hangperson
// Course: Computational Problem Solving 121 - CPET 121
// Developer: Aryan Dangi
// Date: 29th November 2022
// Description: Random word is selected from a file and the player has to guess the word within certain guesses
// Version: Extra Credit Version

#include <iostream>
#include <set>
#include "hangPerson.h"

using namespace std;

int main() {
//    set<string> alphabets_used;
    string alphabets_used[26];
    for (int i = 0; i < 26; i++) {
        alphabets_used[i] = "";
    }
    string all_data;
    string restart = "y";
    int wrong_check = 0;
    string word = selectWord();
    cout << "       Welcome to Hangperson    " << endl;
    cout << "   The objective of the game is to" << endl;
    cout << "guess the word within a certain guesses" << endl;
    cout << "          All the Best           " << endl;
    cout << endl;
    cout << endl;
    int word_length = word.length();
    string word_arr[word_length];
    for (int i = 0; i < word_length; i++) {
        word_arr[i] = word[i];
    }
    string pred_word[word_length];
    for (int i = 0; i < word_length; i++) {
        pred_word[i] = '*';
    }
    bool flag = false;
    bool correct = false;
    while (restart == "y") {
        all_data += "The choose word is " + word;
        while (wrong_check < 9) {
            flag = false;
            display(wrong_check, pred_word, word_length);
            cout << "Guessed chars : ";
            for (int i = 0; i < 26; i++) {
                if (alphabets_used[i] == "") {
                    break;
                } else {
                    cout << alphabets_used[i];
                }
            }
            cout << endl;
            if (wrong_check < 8) {
                for (int i = 0; i < word_length; i++) {
                    if (pred_word[i] == word_arr[i]) {
                        correct = true;
                    } else {
                        correct = false;
                        break;
                    }
                }
                if (correct) {
                    cout << "Congratulations!!! You Won!!!" << endl;
                    all_data += "\n The user successfully found the word. \n \n";
                    break;
                }
                string x = gameInput();
                bool alpha_present = false;
                for (int i = 0; i < 26; i++) {
                    if (x == alphabets_used[i]) {
                        alpha_present = true;
                        cout << "The alphabet is already guessed, use another alphabet" << endl;
                        break;
                    }
                }
                if (!alpha_present) {
                    for (int i = 0; i < 26; i++) {
                        if (alphabets_used[i] == "") {
                            alphabets_used[i] = x;
                            break;
                        }
                    }
                }

//                    for (int i = 0; i < word_length; i++) {
//                        if (x == pred_word[i]) {
//                            cout << "The alphabet is already guessed,0 use another alphabet" << endl;
//                            break;
//                        }
//                    }
                for (int i = 0; i < word_length; i++) {
                    if (x == word_arr[i]) {
                        pred_word[i] = x;
                        flag = true;
                        all_data += "\n The char " + x + " was found!";
                    }
                }
                if (!flag && !alpha_present) {
                    all_data += "\n The char " + x + " was not found! The error count is ";
                    all_data += to_string(wrong_check + 1);
                    wrong_check++;
                }
            } else {
                break;
            }
        }
        if (!correct) {
            cout << "Sorry. You've lost. :(" << endl;
            cout << "The chosen word was " << word << endl;
            all_data += "\n The user failed to found the word.";
        }

        cout << "Restart game y/n:";
        cin >> restart;
        if (restart == "y") {
            word = selectWord();
            word_length = word.length();
            wrong_check = 0;
            for (int i = 0; i < word_length; i++) {
                pred_word[i] = '*';
            }
            for (int i = 0; i < 26; i++) {
                alphabets_used[i] = "";
            }
        }

    }
    recordResults(all_data);

    return 0;
}
