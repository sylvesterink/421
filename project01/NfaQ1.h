#ifndef NFAQ1_H
#define NFAQ1_H

#include "NfaNode.h"

class NfaQ1 : NfaNode
{
public:
    NfaQ1();
    ~NfaQ1();

    virtual NfaNode* testInput(char inputChar);

private:
    /* data */
};



#endif /* end of include guard: NFAQ1_H */
