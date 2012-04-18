/**
 * @file main.cpp
 * @brief
 * @author Brandon Kasa
 * @version 1.0
 * @date 2012-04-14
 * @course CS421
 * @assignment 2
 * @compilation make
 * @usage ./ProjectTwo.exe [FILE NAME]
 */
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

#include "PdaMachine.h"

using namespace std;

// Function declarations
bool readFile(const char *fileName, string &fileData);
void testPda(string &fileData);

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

    // Display the file name
    cout << argv[1] << endl;

    // Uses PDA to check if file contains the required character sequence
    testPda(fileContents);

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

    // Add a "lambda" symbol to simulate end of input
    fileData += "$";

    return true;
}

/**
 * @brief Run the data through the NFA and output whether the required text
 *        was found.
 * @param fileData The string data to test
 */
void testPda(string &fileData)
{
    // Set the initial state in the state machine
    PdaMachine::initialize();
    PdaMachine::setActiveState(STATE_Q0);

    unsigned int i = 0;
    bool isRunning = true;
    PdaNode* activeState;
    // Iterate through the data, one character at a time and use the state
    // machine to test the input.  If input fails, exit
    while ( (i < fileData.size()) && isRunning) {
        activeState = PdaMachine::getActiveState();
        isRunning = activeState->readInput(fileData[i]);
        i++;
    }

    // Output the success of the PDA
    if ( PdaMachine::isValid() ) {
        cout << "Correct sequence" << endl;
    }
    else {
        cout << "Sequence is syntactically incorrect" << endl;
    }
}
