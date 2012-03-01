
NfaQ1::NfaQ1()
{

}

NfaQ1::~NfaQ1()
{

}

//TODO: get rid of memory leak
NfaNode* NfaQ1::testInput(char inputChar)
{
    cout << "This is Q1" << endl;
    NfaNode* nextNode = new NfaQ0();
    return nextNode;
}
