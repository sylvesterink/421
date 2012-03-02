#include "NfaQ1.h"
#include "StateMachine.h"

NfaQ1 NfaQ1::instance;

void NfaQ1::activate()
{
}

void NfaQ1::deactivate()
{
}

void NfaQ1::readInput(char inputChar)
{
    cout << "q1" << endl;
    if (inputChar == 'p') {
        //TODO: this will continue to state 2, etc
        StateMachine::setActiveState(STATE_Q1);
    }
}

NfaQ1* NfaQ1::getInstance() {
    return &instance;
}
