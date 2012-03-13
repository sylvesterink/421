#ifndef NFANODE_H
#define NFANODE_H

#include <iostream>
using namespace std;

class NfaNode
{
public:
    NfaNode();
    virtual ~NfaNode();

    virtual int readInput(char inputChar) = 0;

private:
    /* data */
};

#endif /* end of include guard: NFANODE_H */
