// Title: Hangperson
// Course: Computational Problem Solving 121 - CPET 121
// Developer: Aryan Dangi
// Date: 29th November 2022
// Description: Random word is selected from a file and the player has to guess the word within certain guesses
// Version: Extra Credit Version

#include <iostream>
#include <fstream>
#include <ctime>

using namespace std;

string selectWord() {
    // Create and open a text file
    srand(time(0));
    ifstream inFile;
    inFile.open("/Users/aryandangi/CLionProjects/HangPerson/words_EC.txt");
    string word;
    string arr_word[30];
    int count = 0;
    while (getline(inFile, word)) {
        arr_word[count] = word;
        count++;
    }

    return arr_word[(rand() % 30)];

}
