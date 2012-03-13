#ifndef STATEMACHINE_H
#define STATEMACHINE_H

#include "NfaNode.h"

enum {
    STATE_Q0,
    STATE_Q1,
    STATE_Q2,
    STATE_Q3,
    STATE_Q4,
    STATE_Q5,
    STATE_Q6,
    STATE_Q7,
    STATE_Q8,
    STATE_Q9,
    STATE_Q10,
    STATE_Q11,
    STATE_Q12,
    STATE_Q13,
    STATE_Q14,
    STATE_Q15,
    STATE_Q16,
    STATE_Q17,
    STATE_Q18,
    STATE_Q19,
    STATE_Q20,
    STATE_Q21,
    STATE_QF,
    STATE_QF2
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
