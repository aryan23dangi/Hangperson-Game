// Title: Hangperson
// Course: Computational Problem Solving 121 - CPET 121
// Developer: Aryan Dangi
// Date: 29th November 2022
// Description: Random word is selected from a file and the player has to guess the word within certain guesses
// Version: Extra Credit Version

#include <iostream>

using namespace std;

void display(int count, string pred_word[], int size) {
    if (count == 0) {
        cout << "+" << endl;
        cout << "|      " << endl;
        cout << "|      " << endl;
        cout << "|     " << endl;
        cout << "|      " << endl;
        cout << "|    " << endl;
        cout << "|" << endl;
        cout << "+-------" << endl;
    }

    if (count == 1) {
        cout << "+------+" << endl;
        cout << "|      " << endl;
        cout << "|      " << endl;
        cout << "|     " << endl;
        cout << "|      " << endl;
        cout << "|     " << endl;
        cout << "|" << endl;
        cout << "+-------" << endl;
    }

    if (count == 2) {
        cout << "+------+" << endl;
        cout << "|      |" << endl;
        cout << "|      " << endl;
        cout << "|     " << endl;
        cout << "|      " << endl;
        cout << "|     " << endl;
        cout << "|" << endl;
        cout << "+-------" << endl;
    }

    if (count == 3) {
        cout << "+------+" << endl;
        cout << "|      |" << endl;
        cout << "|      o" << endl;
        cout << "|     " << endl;
        cout << "|      " << endl;
        cout << "|     " << endl;
        cout << "|" << endl;
        cout << "+-------" << endl;
    }

    if (count == 4) {
        cout << "+------+" << endl;
        cout << "|      |" << endl;
        cout << "|      o" << endl;
        cout << "|      |" << endl;
        cout << "|      |" << endl;
        cout << "|     " << endl;
        cout << "|" << endl;
        cout << "+-------" << endl;
    }

    if (count == 5) {
        cout << "+------+" << endl;
        cout << "|      |" << endl;
        cout << "|      o" << endl;
        cout << "|     \\|" << endl;
        cout << "|      |" << endl;
        cout << "|     " << endl;
        cout << "|" << endl;
        cout << "+-------" << endl;
    }

    if (count == 6) {
        cout << "+------+" << endl;
        cout << "|      |" << endl;
        cout << "|      o" << endl;
        cout << "|     \\|/" << endl;
        cout << "|      |" << endl;
        cout << "|     " << endl;
        cout << "|" << endl;
        cout << "+-------" << endl;
    }

    if (count == 7) {
        cout << "+------+" << endl;
        cout << "|      |" << endl;
        cout << "|      o" << endl;
        cout << "|     \\|/" << endl;
        cout << "|      |" << endl;
        cout << "|     / " << endl;
        cout << "|" << endl;
        cout << "+-------" << endl;
    }

    if (count == 8) {
        cout << "+------+" << endl;
        cout << "|      |" << endl;
        cout << "|      o" << endl;
        cout << "|     \\|/" << endl;
        cout << "|      |" << endl;
        cout << "|     / \\" << endl;
        cout << "|" << endl;
        cout << "+-------" << endl;
        cout << endl;
//        cout << "Game Over, You lose" << endl;
    }

    for (int i = 0; i < size; i++) {
        cout << pred_word[i];
    }
    cout << endl;
    for (int i = 0; i < size; i++) {
        cout << "_";
    }
    cout << endl;

}
