#include "StateMachine.h"

// App States
#include "NfaStates.h"

NfaNode* StateMachine::activeState = 0;

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
        //case STATE_Q19:
            //activeState = NfaQ19::getInstance();
            //break;
        //case STATE_Q20:
            //activeState = NfaQ20::getInstance();
        //case STATE_Q21:
            //activeState = NfaQ21::getInstance();
        case STATE_QF:
            activeState = NfaQF::getInstance();
            break;
        case STATE_QF2:
            activeState = NfaQF2::getInstance();
            break;
    }
    //// Also, add your App State Here so that the Manager can switch to it
    //if(appStateID == STATE_Q0) {
        //activeState = NfaQ0::getInstance();
    //}

    //if(appStateID == STATE_Q1) {
        //activeState = NfaQ1::getInstance();
    //}

    //if(appStateID == STATE_Q2) {
      //activeState = NfaQ2::getInstance();
    //}
}

NfaNode* StateMachine::getActiveState() {
    return activeState;
}
