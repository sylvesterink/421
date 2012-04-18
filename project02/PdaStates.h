/**
 * @file PdaStates.h
 * @brief The declaration of all the states for this state machine
 * @author Brandon Kasa
 * @version 1.0
 * @date 2012-04-14
 */
#ifndef PDASTATES_H
#define PDASTATES_H

#include "PdaNode.h"

/**
 * @brief Used to keep track of which final state was found
 */
enum {
    INVALID,
    VALID
};

/**
 * @brief Declaration of the initial state
 */
class PdaQ0 : public PdaNode
{
    public:
        static PdaQ0 instance;

    public:
        virtual bool readInput(char inputChar);

        static PdaQ0* getInstance();
    private:
        /* data */
};


/**
 * @brief Declaration of the final state
 */
class PdaQF : public PdaNode
{
    public:
        static PdaQF instance;

    public:
        virtual bool readInput(char inputChar);

        static PdaQF* getInstance();
    private:
        /* data */
};

/**
 * @brief Declaration of the fail state
 */
//class Pda0 : public PdaNode
//{
    //public:
        //static Pda0 instance;

    //public:
        //virtual void readInput(char inputChar);

        //static Pda0* getInstance();
    //private:
        //[> data <]
//};
#endif /* end of include guard: PDASTATES_H */
