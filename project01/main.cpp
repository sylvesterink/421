#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

#include "StateMachine.h"

using namespace std;

const string fileList[] = {"doc1.txt", "doc2.txt", "doc3.txt", "doc4.txt", "doc5.txt", "doc6.txt"};

bool readFile(const string &fileName, string &fileData);
void removePunctuation(string &fileData);
void testNfa();

int main(int argc, const char *argv[])
{
    string fileContents = "";

    if (!readFile(fileList[0], fileContents)) {
        return -1;
    }

    transform(fileContents.begin(), fileContents.end(), fileContents.begin(), ::tolower);
    removePunctuation(fileContents);

    cout << fileContents << endl;

    return 0;
}

bool readFile(const string &fileName, string &fileData)
{
    ifstream fin;
    string input;

    fin.open(fileName.c_str());

    if (fin.is_open()) {
        while (!fin.eof()) {
            getline(fin, input);
            cout << input << endl;
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

void testNfa()
{
    NfaNode* testNode = new NfaNode();
    NfaNode* oldNode = NULL;

    for (int i = 0; i < 5; i++) {
        oldNode = testNode;
        testNode = testNode->testInput(' ');

        if (oldNode != NULL) {
            delete oldNode;
            oldNode = NULL;
        }
    }

    if (testNode != NULL) {
        delete testNode;
        testNode = NULL;
    }

}
