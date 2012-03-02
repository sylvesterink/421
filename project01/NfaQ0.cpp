#include "NfaQ0.h"
#include "StateMachine.h"

NfaQ0 NfaQ0::instance;

void NfaQ0::activate()
{
}

void NfaQ0::deactivate()
{
}

void NfaQ0::readInput(char inputChar)
{
    cout << "q0" << endl;
    if (inputChar == 'o') {
        StateMachine::setActiveState(STATE_Q1);
    }
}

NfaQ0* NfaQ0::getInstance() {
    return &instance;
}
