
NfaQ0::NfaQ0()
{

}

NfaQ0::~NfaQ0()
{

}

//TODO: get rid of memory leak
NfaNode* NfaQ0::testInput(char inputChar)
{
    cout << "This is Q0" << endl;
    NfaNode* nextNode = new NfaQ1();
    return nextNode;
}
