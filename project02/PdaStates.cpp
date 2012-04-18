/**
 * @file PdaStates.cpp
 * @brief The implementation of all the states for this automata
 * @author Brandon Kasa
 * @version 1.0
 * @date 2012-04-14
 */
#include "PdaStates.h"
#include "PdaMachine.h"


// Declare an instance of this state
PdaQ0 PdaQ0::instance;

/**
 * @brief Checks if required character is found and changes to
 *        appropriate state as a result
 * @param inputChar The character to test
 * @return Whether this is a final state or not
 */
bool PdaQ0::readInput(char inputChar)
{
    switch (inputChar) {
        case 'i':
            if (PdaMachine::top('z') || PdaMachine::top('e')) {
                PdaMachine::push('e');
                PdaMachine::push('s');
            }
            else {
                return false;
            }
            break;
        case 'f':
            if (PdaMachine::top('s')) {
                PdaMachine::push('l');
                PdaMachine::push('e');
            }
            else {
                return false;
            }
            break;
        case 'e':
            if (PdaMachine::top('e')) {
                PdaMachine::pop();
            }
            else {
                return false;
            }
            break;
        case 'l':
            if (PdaMachine::top('l')) {
                PdaMachine::pop();
            }
            else {
                return false;
            }
            break;
        case 's':
            if (PdaMachine::top('s')) {
                PdaMachine::pop();
            }
            else {
                return false;
            }
            break;
        case '$':  // Represents lambda, or empty string
            if (PdaMachine::top('z') || PdaMachine::top('e')) {
                PdaMachine::setActiveState(STATE_QF);
            }
            break;
    }
    return true;
}

/**
 * @brief Returns an instance of this state
 * @return The instance of this state
 */
PdaQ0* PdaQ0::getInstance()
{
    return &instance;
}

// Declare an instance of this state
PdaQF PdaQF::instance;

/**
 * @brief Since this is a final state, any new input will send it
 *        back to the initial state
 * @param inputChar The character to test
 * @return Whether this is a final state or not
 */
bool PdaQF::readInput(char inputChar)
{
    //PdaMachine::setActiveState(STATE_0);
    return false;
}

/**
 * @brief Returns an instance of this state
 * @return The instance of this state
 */
PdaQF* PdaQF::getInstance() {
    return &instance;
}

/*// Declare an instance of this state*/
//Pda0 Pda0::instance;

/**
 * @brief Since this is a final state, any new input will send it
 *        back to the initial state
 * @param inputChar The character to test
 * @return Whether this is a final state or not
 */
//void Pda0::readInput(char inputChar)
//{
    //// Do nothing but fail.
//}

/**
 * @brief Returns an instance of this state
 * @return The instance of this state
 */
//Pda0* Pda0::getInstance() {
    //return &instance;
//}

