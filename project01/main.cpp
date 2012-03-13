/**
 * @file main.cpp
 * @brief A finite state machine simulator implemented using state classes.
 *        Reads a text file and searches for the text "operating room" and
 *        "operating system."
 * @author Brandon Kasa and Andrew Williams
 * @version 1.0
 * @date 2012-03-13
 * @course CS421
 * @assignment 1
 * @compilation make
 * @usage ./ProjectOne.exe [FILE NAME]
 */
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

#include "StateMachine.h"

using namespace std;

//Constants
/**
 * @brief Used to make the return value of the state more readable
 */
enum {
    NOT_FOUND,
    SYSTEM_FOUND,
    ROOM_FOUND
};

// Function declarations
bool readFile(const char *fileName, string &fileData);
void removePunctuation(string &fileData);
void testNfa(string &contents);

/**
 * @brief Main function.  Checks passed arguments, then reads the file to a
 *        string, makes the text lower case, removes punctuation, and runs
 *        it through the NFA.
 * @param argc Number of arguments passed
 * @param argv[] List of passed arguments
 * @return Program exit status
 */
int main(int argc, const char *argv[])
{
    string fileContents = "";

    // Make sure commandline arguments are valid
    if (argc < 2) {
        cout << "Usage: " << argv[0] << " [FILE NAME]" << endl;
        return -1;
    }

    // Read the file and store it to the string
    if (!readFile(argv[1], fileContents)) {
        return -1;
    }

    cout << argv[1] << endl;
    transform(fileContents.begin(), fileContents.end(), fileContents.begin(), ::tolower);
    removePunctuation(fileContents);

    testNfa(fileContents);

    return 0;
}

bool readFile(const char *fileName, string &fileData)
{
    ifstream fin;
    string input;

    fin.open(fileName);

    if (fin.is_open()) {
        while (!fin.eof()) {
            getline(fin, input);
            fileData += input;
        }
    }
    else {
        return false;
    }

    fin.close();

    return true;
}

void removePunctuation(string &fileData)
{
    int stringSize = fileData.size();

    for (int i = 0; i < stringSize; i++) {
        if ( ispunct(fileData[i]) ) {
            fileData[i] = ' ';
        }
    }
}

void testNfa(string &contents)
{
    bool foundRoom = false;
    bool foundSystem = false;

    contents += " ";

    StateMachine::setActiveState(STATE_Q0);

    for (unsigned int i = 0; i < contents.size(); i++) {
        NfaNode* activeState = StateMachine::getActiveState();
        int output = activeState->readInput(contents[i]);

        if ((output == ROOM_FOUND) && (!foundRoom)) {
            foundRoom = true;
        }
        if ((output == SYSTEM_FOUND) && (!foundSystem)) {
            foundSystem = true;
        }
    }

    if ( foundRoom ) {
        cout << "-\"operating room\" found" << endl;
    }
    if ( foundSystem ) {
        cout << "-\"operating system\" found" << endl;
    }
    if ( !foundRoom && !foundSystem ) {
        cout << "-NO MATCH" << endl;
    }
}
