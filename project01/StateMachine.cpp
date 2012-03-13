/**
 * @file StateMachine.cpp
 * @brief The implementation of the state machine
 * @author Brandon Kasa and Andrew Williams
 * @version 1.0
 * @date 2012-03-13
 */
#include "StateMachine.h"

// App States
#include "NfaStates.h"

// Initialize the currently active state to be none.
NfaNode* StateMachine::activeState = 0;

/**
 * @brief Switches to the appropriate state based on the state value passed.
 * @param appStateID The name of the state to switch to
 */
void StateMachine::setActiveState(int appStateID) {
    switch(appStateID)
    {
        case STATE_Q0:
            activeState = NfaQ0::getInstance();
            break;
        case STATE_Q1:
            activeState = NfaQ1::getInstance();
            break;
        case STATE_Q2:
            activeState = NfaQ2::getInstance();
            break;
        case STATE_Q3:
            activeState = NfaQ3::getInstance();
            break;
        case STATE_Q4:
            activeState = NfaQ4::getInstance();
            break;
        case STATE_Q5:
            activeState = NfaQ5::getInstance();
            break;
        case STATE_Q6:
            activeState = NfaQ6::getInstance();
            break;
        case STATE_Q7:
            activeState = NfaQ7::getInstance();
            break;
        case STATE_Q8:
            activeState = NfaQ8::getInstance();
            break;
        case STATE_Q9:
            activeState = NfaQ9::getInstance();
            break;
        case STATE_Q10:
            activeState = NfaQ10::getInstance();
            break;
        case STATE_Q11:
            activeState = NfaQ11::getInstance();
            break;
        case STATE_Q12:
            activeState = NfaQ12::getInstance();
            break;
        case STATE_Q13:
            activeState = NfaQ13::getInstance();
            break;
        case STATE_Q14:
            activeState = NfaQ14::getInstance();
            break;
        case STATE_Q15:
            activeState = NfaQ15::getInstance();
            break;
        case STATE_Q16:
            activeState = NfaQ16::getInstance();
            break;
        case STATE_Q17:
            activeState = NfaQ17::getInstance();
            break;
        case STATE_Q18:
            activeState = NfaQ18::getInstance();
            break;
        case STATE_QF:
            activeState = NfaQF::getInstance();
            break;
        case STATE_QF2:
            activeState = NfaQF2::getInstance();
            break;
    }
}

/**
 * @brief Returns the currently active state
 * @return The instance of the currently active state
 */
NfaNode* StateMachine::getActiveState() {
    return activeState;
}
