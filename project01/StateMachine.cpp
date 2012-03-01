#include "StateMachine.h"

// Refer to your Other App States Here
#include "NfaNode.h"
#include "NfaQ0.h"
#include "NfaQ1.h"
#include "NfaQf.h"

//CAppState* CAppStateManager::ActiveAppState = 0;


void StateMachine::setActiveState(int appStateID) {
    if(activeState) {
       activeState->deactivate();
    }

    // Also, add your App State Here so that the Manager can switch to it
    if(appStateID == STATE_Q0) {
        //activeState = 0;
    }

    if(appStateID == STATE_Q1) {
        //activeState = ;
    }

    if(appStateID == STATE_QF) {
        //activeState = ;
    }

    if(activeState) {
       activeState->activate();
    }
}

NfaNode* StateMachine::getActiveState() {
    return activeState;
}
