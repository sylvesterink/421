#ifndef NFAQ0_H
#define NFAQ0_H

#include "NfaNode.h"

class NfaQ0 : public NfaNode
{
    public:
        static NfaQ0 instance;

    public:
        virtual void activate();
        virtual void deactivate();

        virtual void readInput(char inputChar);

        static NfaQ0* getInstance();
    private:
        /* data */
};

#endif /* end of include guard: NFAQ0_H */
