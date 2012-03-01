#ifndef NFAQ0_H
#define NFAQ0_H

#include "NfaNode.h"

class NfaQ0 : NfaNode
{
public:
    NfaQ0();
    ~NfaQ0();

    virtual NfaNode* testInput(char inputChar);

private:
    /* data */
};



#endif /* end of include guard: NFAQ0_H */
