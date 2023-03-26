// Title: Hangperson
// Course: Computational Problem Solving 121 - CPET 121
// Developer: Aryan Dangi
// Date: 29th November 2022
// Description: Random word is selected from a file and the player has to guess the word within certain guesses
// Version: Extra Credit Version

#include <iostream>

using namespace std;

string gameInput() {
    char ans;
    string x;
    cout << "Guess a letter: ";
    cin >> x;
    char s = x[0];
    s = tolower(s);
//    cout << x << endl;
    string y(1, s);
    return y;
}