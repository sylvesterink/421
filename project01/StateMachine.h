/**
 * @file StateMachine.h
 * @brief Declaration for the state machine
 * @author Brandon Kasa and Andrew Williams
 * @version 1.0
 * @date 2012-03-13
 */
#ifndef STATEMACHINE_H
#define STATEMACHINE_H

#include "NfaNode.h"

/**
 * @brief A list of all the possible states
 */
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
    STATE_QF,
    STATE_QF2
};

/**
 * @brief The declaration for the state machine object.
 *        Is a universal object for the purposes of this program
 */
class StateMachine
{
    private:
        // Stores the currently active state
        static NfaNode* activeState;

    public:

        static void setActiveState(int appStateID);
        static NfaNode* getActiveState();
    private:
        /* data */
};

#endif /* end of include guard: STATEMACHINE_H */
