/**
 * @file PdaMachine.cpp
 * @brief The implementation of the state machine
 * @author Brandon Kasa and Andrew Williams
 * @version 1.0
 * @date 2012-03-13
 */
#include "PdaMachine.h"

// App States
#include "PdaStates.h"

// Initialize the currently active state to be none.
PdaNode* PdaMachine::activeState = 0;
stack<char> PdaMachine::PdaStack;
int PdaMachine::currAppState;

void PdaMachine::initialize()
{
    // Clear out stack
    while (!PdaStack.empty()) {
        PdaStack.pop();
    }

    // Push bottom symbol onto stack
    PdaStack.push('z');
}

/**
 * @brief Switches to the appropriate state based on the state value passed.
 * @param appStateID The name of the state to switch to
 */
void PdaMachine::setActiveState(int appStateID) {
    switch(appStateID)
    {
        case STATE_Q0:
            activeState = PdaQ0::getInstance();
            break;
        case STATE_QF:
            activeState = PdaQF::getInstance();
            break;
    }
    currAppState = appStateID;
}

/**
 * @brief Returns the currently active state
 * @return The instance of the currently active state
 */
PdaNode* PdaMachine::getActiveState() {
    return activeState;
}

void PdaMachine::push(char inputChar)
{
    PdaStack.push(inputChar);
}

void PdaMachine::pop()
{
    if (PdaStack.top() != 'z') {
        PdaStack.pop();
    }
}

bool PdaMachine::top(char inputChar)
{
    if (inputChar == PdaStack.top()) {
        return true;
    }

    return false;
}

bool PdaMachine::isValid()
{
    if (currAppState == STATE_QF) {
        return true;
    }

    return false;
}
