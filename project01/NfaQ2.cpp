#include "NfaQ2.h"
#include "StateMachine.h"

NfaQ2 NfaQ2::instance;

void NfaQ2::activate()
{
}

void NfaQ2::deactivate()
{
}

void NfaQ2::readInput(char inputChar)
{
  cout << "q2" << endl;
  if (inputChar == 'e') {
    StateMachine::setActiveState(STATE_Q0);
  }
}

NfaQ2* NfaQ2::getInstance() {
  return &instance;
}
