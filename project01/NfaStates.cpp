#include "NfaStates.h"
#include "StateMachine.h"

NfaQ0 NfaQ0::instance;

int NfaQ0::readInput(char inputChar)
{
    if (inputChar == 'o') {
        StateMachine::setActiveState(STATE_Q1);
    }
    return NOT_FOUND;
}

NfaQ0* NfaQ0::getInstance() {
    return &instance;
}


NfaQ1 NfaQ1::instance;

int NfaQ1::readInput(char inputChar)
{
    if (inputChar == 'p') {
        StateMachine::setActiveState(STATE_Q2);
    }
    else {
        StateMachine::setActiveState(STATE_Q0);
    }
    return NOT_FOUND;
}

NfaQ1* NfaQ1::getInstance() {
    return &instance;
}


NfaQ2 NfaQ2::instance;

int NfaQ2::readInput(char inputChar)
{
    if (inputChar == 'e') {
        StateMachine::setActiveState(STATE_Q3);
    }
    else {
        StateMachine::setActiveState(STATE_Q0);
    }
    return NOT_FOUND;
}

NfaQ2* NfaQ2::getInstance() {
    return &instance;
}


NfaQ3 NfaQ3::instance;

int NfaQ3::readInput(char inputChar)
{
    if (inputChar == 'r') {
        StateMachine::setActiveState(STATE_Q4);
    }
    else {
        StateMachine::setActiveState(STATE_Q0);
    }
    return NOT_FOUND;
}

NfaQ3* NfaQ3::getInstance() {
    return &instance;
}


NfaQ4 NfaQ4::instance;

int NfaQ4::readInput(char inputChar)
{
    if (inputChar == 'a') {
        StateMachine::setActiveState(STATE_Q5);
    }
    else {
        StateMachine::setActiveState(STATE_Q0);
    }
    return NOT_FOUND;
}

NfaQ4* NfaQ4::getInstance() {
    return &instance;
}


NfaQ5 NfaQ5::instance;

int NfaQ5::readInput(char inputChar)
{
    if (inputChar == 't') {
        StateMachine::setActiveState(STATE_Q6);
    }
    else {
        StateMachine::setActiveState(STATE_Q0);
    }
    return NOT_FOUND;
}

NfaQ5* NfaQ5::getInstance() {
    return &instance;
}


NfaQ6 NfaQ6::instance;

int NfaQ6::readInput(char inputChar)
{
    if (inputChar == 'i') {
        StateMachine::setActiveState(STATE_Q7);
    }
    else {
        StateMachine::setActiveState(STATE_Q0);
    }
    return NOT_FOUND;
}

NfaQ6* NfaQ6::getInstance() {
    return &instance;
}


NfaQ7 NfaQ7::instance;

int NfaQ7::readInput(char inputChar)
{
    if (inputChar == 'n') {
        StateMachine::setActiveState(STATE_Q8);
    }
    else {
        StateMachine::setActiveState(STATE_Q0);
    }
    return NOT_FOUND;
}

NfaQ7* NfaQ7::getInstance() {
    return &instance;
}


NfaQ8 NfaQ8::instance;

int NfaQ8::readInput(char inputChar)
{
    if (inputChar == 'g') {
        StateMachine::setActiveState(STATE_Q9);
    }
    else {
        StateMachine::setActiveState(STATE_Q0);
    }
    return NOT_FOUND;
}

NfaQ8* NfaQ8::getInstance() {
    return &instance;
}


NfaQ9 NfaQ9::instance;

int NfaQ9::readInput(char inputChar)
{
    if (inputChar == ' ') {
        StateMachine::setActiveState(STATE_Q10);
    }
    else {
        StateMachine::setActiveState(STATE_Q0);
    }
    return NOT_FOUND;
}

NfaQ9* NfaQ9::getInstance() {
    return &instance;
}


NfaQ10 NfaQ10::instance;

int NfaQ10::readInput(char inputChar)
{
    if (inputChar == 'r') {
        StateMachine::setActiveState(STATE_Q11);
    }
    else if (inputChar == 's') {
        StateMachine::setActiveState(STATE_Q14);
    }
    else {
        StateMachine::setActiveState(STATE_Q0);
    }
    return NOT_FOUND;
}

NfaQ10* NfaQ10::getInstance() {
    return &instance;
}


NfaQ11 NfaQ11::instance;

int NfaQ11::readInput(char inputChar)
{
    if (inputChar == 'o') {
        StateMachine::setActiveState(STATE_Q12);
    }
    else {
        StateMachine::setActiveState(STATE_Q0);
    }
    return NOT_FOUND;
}

NfaQ11* NfaQ11::getInstance() {
    return &instance;
}


NfaQ12 NfaQ12::instance;

int NfaQ12::readInput(char inputChar)
{
    if (inputChar == 'o') {
        StateMachine::setActiveState(STATE_Q13);
    }
    else {
        StateMachine::setActiveState(STATE_Q0);
    }
    return NOT_FOUND;
}

NfaQ12* NfaQ12::getInstance() {
    return &instance;
}


NfaQ13 NfaQ13::instance;

int NfaQ13::readInput(char inputChar)
{
    if (inputChar == 'm') {
        StateMachine::setActiveState(STATE_QF2);
    }
    else {
        StateMachine::setActiveState(STATE_Q0);
    }
    return NOT_FOUND;
}

NfaQ13* NfaQ13::getInstance() {
    return &instance;
}


NfaQ14 NfaQ14::instance;

int NfaQ14::readInput(char inputChar)
{
    if (inputChar == 'y') {
        StateMachine::setActiveState(STATE_Q15);
    }
    else {
        StateMachine::setActiveState(STATE_Q0);
    }
    return NOT_FOUND;
}

NfaQ14* NfaQ14::getInstance() {
    return &instance;
}


NfaQ15 NfaQ15::instance;

int NfaQ15::readInput(char inputChar)
{
    if (inputChar == 's') {
        StateMachine::setActiveState(STATE_Q16);
    }
    else {
        StateMachine::setActiveState(STATE_Q0);
    }
    return NOT_FOUND;
}

NfaQ15* NfaQ15::getInstance() {
    return &instance;
}


NfaQ16 NfaQ16::instance;

int NfaQ16::readInput(char inputChar)
{
    if (inputChar == 't') {
        StateMachine::setActiveState(STATE_Q17);
    }
    else {
        StateMachine::setActiveState(STATE_Q0);
    }
    return NOT_FOUND;
}

NfaQ16* NfaQ16::getInstance() {
    return &instance;
}


NfaQ17 NfaQ17::instance;

int NfaQ17::readInput(char inputChar)
{
    if (inputChar == 'e') {
        StateMachine::setActiveState(STATE_Q18);
    }
    else {
        StateMachine::setActiveState(STATE_Q0);
    }
    return NOT_FOUND;
}

NfaQ17* NfaQ17::getInstance() {
    return &instance;
}


NfaQ18 NfaQ18::instance;

int NfaQ18::readInput(char inputChar)
{
    if (inputChar == 'm') {
        StateMachine::setActiveState(STATE_QF);
    }
    else {
        StateMachine::setActiveState(STATE_Q0);
    }
    return NOT_FOUND;
}

NfaQ18* NfaQ18::getInstance() {
    return &instance;
}


//NfaQ19 NfaQ19::instance;

//int NfaQ19::readInput(char inputChar)
//{
    //if (inputChar == 'm') {
        //StateMachine::setActiveState(STATE_QF);
    //}
    //else {
        //StateMachine::setActiveState(STATE_Q0);
    //}
    //return NOT_FOUND;
//}

//NfaQ19* NfaQ19::getInstance() {
    //return &instance;
//}


//NfaQ20 NfaQ20::instance;

//int NfaQ20::readInput(char inputChar)
//{
    //if (inputChar == '') {
        //StateMachine::setActiveState();
    //}
    //else {
    //StateMachine::setActiveState(STATE_Q0);
    //}
    //return NOT_FOUND;
//}

//NfaQ20* NfaQ20::getInstance() {
    //return &instance;
//}


//NfaQ21 NfaQ21::instance;

//int NfaQ21::readInput(char inputChar)
//{
    //if (inputChar == '') {
        //StateMachine::setActiveState( );
    //}
    //return NOT_FOUND;
//}

//NfaQ21* NfaQ21::getInstance() {
    //return &instance;
//}


NfaQF NfaQF::instance;

int NfaQF::readInput(char inputChar)
{
    StateMachine::setActiveState(STATE_Q0);
    return SYSTEM_FOUND;
}

NfaQF* NfaQF::getInstance() {
    return &instance;
}

NfaQF2 NfaQF2::instance;

int NfaQF2::readInput(char inputChar)
{
    //TODO: this returns 1 character late, may be a good idea to check for the space here
    StateMachine::setActiveState(STATE_Q0);
    return ROOM_FOUND;
}

NfaQF2* NfaQF2::getInstance() {
    return &instance;
}

