/**
 * @file PdaMachine.h
 * @brief Declaration for the state machine
 * @author Brandon Kasa
 * @version 1.0
 * @date 2012-04-14
 */
#ifndef PDAMACHINE_H
#define PDAMACHINE_H

#include <stack>
using namespace std;

#include "PdaNode.h"

/**
 * @brief A list of all the possible states
 */
enum {
    STATE_Q0,
    STATE_QF
};

/**
 * @brief The declaration for the state machine object.
 *        Is a universal object for the purposes of this program
 */
class PdaMachine
{
    private:
        // Stores the currently active state
        static PdaNode* activeState;

    public:
        static void initialize();

        static void setActiveState(int appStateID);
        static PdaNode* getActiveState();

        static void push(char inputChar);
        static void pop();
        static bool top(char inputChar);

        static bool isValid();

    private:
        static stack<char> PdaStack;
        static int currAppState;
};

#endif /* end of include guard: PDAMACHINE_H */
