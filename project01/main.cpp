#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

const string fileList[] = {"doc1.txt", "doc2.txt", "doc3.txt", "doc4.txt", "doc5.txt", "doc6.txt"};

int main(int argc, const char *argv[])
{
    ifstream fin;
    string fileContents = "";
    string input;

    fin.open(fileList[0].c_str());

    if (fin.is_open()) {
        while (!fin.eof()) {
            //fin >> input;
            getline(fin, input);
            cout << input << endl;
            fileContents += input;
        }
    }

    fin.close();

    // TODO: Remove Punctuation
    transform(fileContents.begin(), fileContents.end(), fileContents.begin(), ::tolower);

    cout << fileContents << endl;

    return 0;
}
