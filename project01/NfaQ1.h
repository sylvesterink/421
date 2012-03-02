#ifndef NFAQ1_H
#define NFAQ1_H

#include "NfaNode.h"

class NfaQ1 : public NfaNode
{
    public:
        static NfaQ1 instance;

    public:
        virtual void activate();
        virtual void deactivate();

        virtual void readInput(char inputChar);

        static NfaQ1* getInstance();
    private:
        /* data */
};

#endif /* end of include guard: NFAQ0_H */
