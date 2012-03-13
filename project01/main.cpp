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
void testNfa(string &fileData);

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

    // Display the file name, then convert characters to lowercase and
    // remove punctuation
    cout << argv[1] << endl;
    transform(fileContents.begin(), fileContents.end(),
            fileContents.begin(), ::tolower);
    removePunctuation(fileContents);

    // Uses NFA to check if file contains the required character sequence
    testNfa(fileContents);

    return 0;
}

/**
 * @brief Reads a file and stores the data in a string
 * @param fileName The name of the file to read
 * @param fileData The string to store the file data in
 * @return Whether the file was successfully read or not
 */
bool readFile(const char *fileName, string &fileData)
{
    ifstream fin;
    string input;

    fin.open(fileName);

    // Read the file line by line into the string
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

    // A space is added to the end of the file to ensure that the state machine
    // correctly interprets the end of the file
    fileData += " ";

    return true;
}

/**
 * @brief Replace any occurrences of punctuation in the data with a space
 * @param fileData The text data
 */
void removePunctuation(string &fileData)
{
    int stringSize = fileData.size();

    // Iterate through each character and examine it
    // Replace if it's a space
    for (int i = 0; i < stringSize; i++) {
        if ( ispunct(fileData[i]) ) {
            fileData[i] = ' ';
        }
    }
}

/**
 * @brief Run the data through the NFA and output whether the required text
 *        was found.
 * @param fileData The string data to test
 */
void testNfa(string &fileData)
{
    bool foundRoom = false;
    bool foundSystem = false;

    // Set the initial state in the state machine
    StateMachine::setActiveState(STATE_Q0);

    // Iterate through the data, one character at a time and use the state
    // machine to test the input
    for (unsigned int i = 0; i < fileData.size(); i++) {
        // The currently active state will be the state to test the data
        NfaNode* activeState = StateMachine::getActiveState();
        int output = activeState->readInput(fileData[i]);

        // If either occurrence is found, make a note of it
        if ((output == ROOM_FOUND) && (!foundRoom)) {
            foundRoom = true;
        }
        if ((output == SYSTEM_FOUND) && (!foundSystem)) {
            foundSystem = true;
        }
    }

    // Output the success of the state machine
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
