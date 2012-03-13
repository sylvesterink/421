/**
 * @file NfaStates.cpp
 * @brief The implementation of all the states for this state machine
 * @author Brandon Kasa and Andrew Williams
 * @version 1.0
 * @date 2012-03-13
 */
#include "NfaStates.h"
#include "StateMachine.h"


// Declare an instance of this state
NfaQ0 NfaQ0::instance;

/**
 * @brief Checks if required character is found and changes to
 *        appropriate state as a result
 * @param inputChar The character to test
 * @return Whether this is a final state or not
 */
int NfaQ0::readInput(char inputChar)
{
    if (inputChar == 'o') {
        StateMachine::setActiveState(STATE_Q1);
    }
    return NOT_FOUND;
}

/**
 * @brief Returns an instance of this state
 * @return The instance of this state
 */
NfaQ0* NfaQ0::getInstance() {
    return &instance;
}


// Declare an instance of this state
NfaQ1 NfaQ1::instance;

/**
 * @brief Checks if required character is found and changes to
 *        appropriate state as a result
 * @param inputChar The character to test
 * @return Whether this is a final state or not
 */
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

/**
 * @brief Returns an instance of this state
 * @return The instance of this state
 */
NfaQ1* NfaQ1::getInstance() {
    return &instance;
}


// Declare an instance of this state
NfaQ2 NfaQ2::instance;

/**
 * @brief Checks if required character is found and changes to
 *        appropriate state as a result
 * @param inputChar The character to test
 * @return Whether this is a final state or not
 */
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

/**
 * @brief Returns an instance of this state
 * @return The instance of this state
 */
NfaQ2* NfaQ2::getInstance() {
    return &instance;
}


// Declare an instance of this state
NfaQ3 NfaQ3::instance;

/**
 * @brief Checks if required character is found and changes to
 *        appropriate state as a result
 * @param inputChar The character to test
 * @return Whether this is a final state or not
 */
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

/**
 * @brief Returns an instance of this state
 * @return The instance of this state
 */
NfaQ3* NfaQ3::getInstance() {
    return &instance;
}


// Declare an instance of this state
NfaQ4 NfaQ4::instance;

/**
 * @brief Checks if required character is found and changes to
 *        appropriate state as a result
 * @param inputChar The character to test
 * @return Whether this is a final state or not
 */
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

/**
 * @brief Returns an instance of this state
 * @return The instance of this state
 */
NfaQ4* NfaQ4::getInstance() {
    return &instance;
}


// Declare an instance of this state
NfaQ5 NfaQ5::instance;

/**
 * @brief Checks if required character is found and changes to
 *        appropriate state as a result
 * @param inputChar The character to test
 * @return Whether this is a final state or not
 */
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

/**
 * @brief Returns an instance of this state
 * @return The instance of this state
 */
NfaQ5* NfaQ5::getInstance() {
    return &instance;
}


// Declare an instance of this state
NfaQ6 NfaQ6::instance;

/**
 * @brief Checks if required character is found and changes to
 *        appropriate state as a result
 * @param inputChar The character to test
 * @return Whether this is a final state or not
 */
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

/**
 * @brief Returns an instance of this state
 * @return The instance of this state
 */
NfaQ6* NfaQ6::getInstance() {
    return &instance;
}


// Declare an instance of this state
NfaQ7 NfaQ7::instance;

/**
 * @brief Checks if required character is found and changes to
 *        appropriate state as a result
 * @param inputChar The character to test
 * @return Whether this is a final state or not
 */
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

/**
 * @brief Returns an instance of this state
 * @return The instance of this state
 */
NfaQ7* NfaQ7::getInstance() {
    return &instance;
}


// Declare an instance of this state
NfaQ8 NfaQ8::instance;

/**
 * @brief Checks if required character is found and changes to
 *        appropriate state as a result
 * @param inputChar The character to test
 * @return Whether this is a final state or not
 */
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

/**
 * @brief Returns an instance of this state
 * @return The instance of this state
 */
NfaQ8* NfaQ8::getInstance() {
    return &instance;
}


// Declare an instance of this state
NfaQ9 NfaQ9::instance;

/**
 * @brief Checks if required character is found and changes to
 *        appropriate state as a result
 * @param inputChar The character to test
 * @return Whether this is a final state or not
 */
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

/**
 * @brief Returns an instance of this state
 * @return The instance of this state
 */
NfaQ9* NfaQ9::getInstance() {
    return &instance;
}


// Declare an instance of this state
NfaQ10 NfaQ10::instance;

/**
 * @brief Checks if required character is found and changes to
 *        appropriate state as a result
 * @param inputChar The character to test
 * @return Whether this is a final state or not
 */
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

/**
 * @brief Returns an instance of this state
 * @return The instance of this state
 */
NfaQ10* NfaQ10::getInstance() {
    return &instance;
}


// Declare an instance of this state
NfaQ11 NfaQ11::instance;

/**
 * @brief Checks if required character is found and changes to
 *        appropriate state as a result
 * @param inputChar The character to test
 * @return Whether this is a final state or not
 */
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

/**
 * @brief Returns an instance of this state
 * @return The instance of this state
 */
NfaQ11* NfaQ11::getInstance() {
    return &instance;
}


// Declare an instance of this state
NfaQ12 NfaQ12::instance;

/**
 * @brief Checks if required character is found and changes to
 *        appropriate state as a result
 * @param inputChar The character to test
 * @return Whether this is a final state or not
 */
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

/**
 * @brief Returns an instance of this state
 * @return The instance of this state
 */
NfaQ12* NfaQ12::getInstance() {
    return &instance;
}


// Declare an instance of this state
NfaQ13 NfaQ13::instance;

/**
 * @brief Checks if required character is found and changes to
 *        appropriate state as a result
 * @param inputChar The character to test
 * @return Whether this is a final state or not
 */
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

/**
 * @brief Returns an instance of this state
 * @return The instance of this state
 */
NfaQ13* NfaQ13::getInstance() {
    return &instance;
}


// Declare an instance of this state
NfaQ14 NfaQ14::instance;

/**
 * @brief Checks if required character is found and changes to
 *        appropriate state as a result
 * @param inputChar The character to test
 * @return Whether this is a final state or not
 */
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

/**
 * @brief Returns an instance of this state
 * @return The instance of this state
 */
NfaQ14* NfaQ14::getInstance() {
    return &instance;
}


// Declare an instance of this state
NfaQ15 NfaQ15::instance;

/**
 * @brief Checks if required character is found and changes to
 *        appropriate state as a result
 * @param inputChar The character to test
 * @return Whether this is a final state or not
 */
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

/**
 * @brief Returns an instance of this state
 * @return The instance of this state
 */
NfaQ15* NfaQ15::getInstance() {
    return &instance;
}


// Declare an instance of this state
NfaQ16 NfaQ16::instance;

/**
 * @brief Checks if required character is found and changes to
 *        appropriate state as a result
 * @param inputChar The character to test
 * @return Whether this is a final state or not
 */
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

/**
 * @brief Returns an instance of this state
 * @return The instance of this state
 */
NfaQ16* NfaQ16::getInstance() {
    return &instance;
}


// Declare an instance of this state
NfaQ17 NfaQ17::instance;

/**
 * @brief Checks if required character is found and changes to
 *        appropriate state as a result
 * @param inputChar The character to test
 * @return Whether this is a final state or not
 */
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

/**
 * @brief Returns an instance of this state
 * @return The instance of this state
 */
NfaQ17* NfaQ17::getInstance() {
    return &instance;
}


// Declare an instance of this state
NfaQ18 NfaQ18::instance;

/**
 * @brief Checks if required character is found and changes to
 *        appropriate state as a result
 * @param inputChar The character to test
 * @return Whether this is a final state or not
 */
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

/**
 * @brief Returns an instance of this state
 * @return The instance of this state
 */
NfaQ18* NfaQ18::getInstance() {
    return &instance;
}


// Declare an instance of this state
NfaQF NfaQF::instance;

/**
 * @brief Since this is a final state, any new input will send it
 *        back to the initial state
 * @param inputChar The character to test
 * @return Whether this is a final state or not
 */
int NfaQF::readInput(char inputChar)
{
    StateMachine::setActiveState(STATE_Q0);
    return SYSTEM_FOUND;
}

/**
 * @brief Returns an instance of this state
 * @return The instance of this state
 */
NfaQF* NfaQF::getInstance() {
    return &instance;
}

// Declare an instance of this state
NfaQF2 NfaQF2::instance;

/**
 * @brief Since this is a final state, any new input will send it
 *        back to the initial state
 * @param inputChar The character to test
 * @return Whether this is a final state or not
 */
int NfaQF2::readInput(char inputChar)
{
    StateMachine::setActiveState(STATE_Q0);
    return ROOM_FOUND;
}

/**
 * @brief Returns an instance of this state
 * @return The instance of this state
 */
NfaQF2* NfaQF2::getInstance() {
    return &instance;
}

