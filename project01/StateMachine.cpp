#include "StateMachine.h"

// App States
#include "NfaQ0.h"
#include "NfaQ1.h"
#include "NfaQ2.h"

NfaNode* StateMachine::activeState = 0;

void StateMachine::setActiveState(int appStateID) {
    if(activeState) {
       activeState->deactivate();
    }

    // Also, add your App State Here so that the Manager can switch to it
    if(appStateID == STATE_Q0) {
        activeState = NfaQ0::getInstance();
    }

    if(appStateID == STATE_Q1) {
        activeState = NfaQ1::getInstance();
    }

    if(appStateID == STATE_Q2) {
      activeState = NfaQ2::getInstance();
    }

    if(activeState) {
       activeState->activate();
    }
}

NfaNode* StateMachine::getActiveState() {
    return activeState;
}
