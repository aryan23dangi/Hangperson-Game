// Title: Hangperson
// Course: Computational Problem Solving 121 - CPET 121
// Developer: Aryan Dangi
// Date: 29th November 2022
// Description: Random word is selected from a file and the player has to guess the word within certain guesses
// Version: Extra Credit Version

#include <iostream>
#include <fstream>

using namespace std;

void recordResults(string all_data) {
    ofstream MyFile("/Users/aryandangi/CLionProjects/HangPerson/results_EC.txt");

    MyFile << all_data;
    MyFile.close();

}