#ifndef STATEMACHINE_H
#define STATEMACHINE_H

#include "NfaNode.h"

enum {
    STATE_Q0,
    STATE_Q1,
    STATE_Q2
};

class StateMachine
{
    private:
        static NfaNode* activeState;

    public:
        //StateMachine();
        //~StateMachine();

        static void setActiveState(int appStateID);
        static NfaNode* getActiveState();
    private:
        /* data */
};



#endif /* end of include guard: STATEMACHINE_H */
