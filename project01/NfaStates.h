/**
 * @file NfaStates.h
 * @brief The declaration of all the states for this state machine
 * @author Brandon Kasa and Andrew Williams
 * @version 1.0
 * @date 2012-03-13
 */
#ifndef NFASTATES_H
#define NFASTATES_H

#include "NfaNode.h"

/**
 * @brief Used to keep track of which final state was found
 */
enum {
    NOT_FOUND,
    SYSTEM_FOUND,
    ROOM_FOUND
};

/**
 * @brief Declaration of the initial state
 */
class NfaQ0 : public NfaNode
{
    public:
        static NfaQ0 instance;

    public:
        virtual int readInput(char inputChar);

        static NfaQ0* getInstance();
    private:
        /* data */
};

/**
 * @brief Declaration of state 1
 */
class NfaQ1 : public NfaNode
{
    public:
        static NfaQ1 instance;

    public:
        virtual int readInput(char inputChar);

        static NfaQ1* getInstance();
    private:
        /* data */
};

/**
 * @brief Declaration of state 2
 */
class NfaQ2 : public NfaNode
{
    public:
        static NfaQ2 instance;

    public:
        virtual int readInput(char inputChar);

        static NfaQ2* getInstance();
    private:
        /* data */
};

/**
 * @brief Declaration of state 3
 */
class NfaQ3 : public NfaNode
{
    public:
        static NfaQ3 instance;

    public:
        virtual int readInput(char inputChar);

        static NfaQ3* getInstance();
    private:
        /* data */
};

/**
 * @brief Declaration of state 4
 */
class NfaQ4 : public NfaNode
{
    public:
        static NfaQ4 instance;

    public:
        virtual int readInput(char inputChar);

        static NfaQ4* getInstance();
    private:
        /* data */
};

/**
 * @brief Declaration of state 5
 */
class NfaQ5 : public NfaNode
{
    public:
        static NfaQ5 instance;

    public:
        virtual int readInput(char inputChar);

        static NfaQ5* getInstance();
    private:
        /* data */
};

/**
 * @brief Declaration of state 6
 */
class NfaQ6 : public NfaNode
{
    public:
        static NfaQ6 instance;

    public:
        virtual int readInput(char inputChar);

        static NfaQ6* getInstance();
    private:
        /* data */
};

/**
 * @brief Declaration of state 7
 */
class NfaQ7 : public NfaNode
{
    public:
        static NfaQ7 instance;

    public:
        virtual int readInput(char inputChar);

        static NfaQ7* getInstance();
    private:
        /* data */
};

/**
 * @brief Declaration of state 8
 */
class NfaQ8 : public NfaNode
{
    public:
        static NfaQ8 instance;

    public:
        virtual int readInput(char inputChar);

        static NfaQ8* getInstance();
    private:
        /* data */
};

/**
 * @brief Declaration of state 9
 */
class NfaQ9 : public NfaNode
{
    public:
        static NfaQ9 instance;

    public:
        virtual int readInput(char inputChar);

        static NfaQ9* getInstance();
    private:
        /* data */
};

/**
 * @brief Declaration of state 10
 */
class NfaQ10 : public NfaNode
{
    public:
        static NfaQ10 instance;

    public:
        virtual int readInput(char inputChar);

        static NfaQ10* getInstance();
    private:
        /* data */
};

/**
 * @brief Declaration of state 11
 */
class NfaQ11 : public NfaNode
{
    public:
        static NfaQ11 instance;

    public:
        virtual int readInput(char inputChar);

        static NfaQ11* getInstance();
    private:
        /* data */
};

/**
 * @brief Declaration of state 12
 */
class NfaQ12 : public NfaNode
{
    public:
        static NfaQ12 instance;

    public:
        virtual int readInput(char inputChar);

        static NfaQ12* getInstance();
    private:
        /* data */
};

/**
 * @brief Declaration of state 13
 */
class NfaQ13 : public NfaNode
{
    public:
        static NfaQ13 instance;

    public:
        virtual int readInput(char inputChar);

        static NfaQ13* getInstance();
    private:
        /* data */
};

/**
 * @brief Declaration of state 14
 */
class NfaQ14 : public NfaNode
{
    public:
        static NfaQ14 instance;

    public:
        virtual int readInput(char inputChar);

        static NfaQ14* getInstance();
    private:
        /* data */
};

/**
 * @brief Declaration of state 15
 */
class NfaQ15 : public NfaNode
{
    public:
        static NfaQ15 instance;

    public:
        virtual int readInput(char inputChar);

        static NfaQ15* getInstance();
    private:
        /* data */
};

/**
 * @brief Declaration of state 16
 */
class NfaQ16 : public NfaNode
{
    public:
        static NfaQ16 instance;

    public:
        virtual int readInput(char inputChar);

        static NfaQ16* getInstance();
    private:
        /* data */
};

/**
 * @brief Declaration of state 17
 */
class NfaQ17 : public NfaNode
{
    public:
        static NfaQ17 instance;

    public:
        virtual int readInput(char inputChar);

        static NfaQ17* getInstance();
    private:
        /* data */
};

/**
 * @brief Declaration of state 18
 */
class NfaQ18 : public NfaNode
{
    public:
        static NfaQ18 instance;

    public:
        virtual int readInput(char inputChar);

        static NfaQ18* getInstance();
    private:
        /* data */
};

/**
 * @brief Declaration of the first final state
 */
class NfaQF : public NfaNode
{
    public:
        static NfaQF instance;

    public:
        virtual int readInput(char inputChar);

        static NfaQF* getInstance();
    private:
        /* data */
};

/**
 * @brief Declaration of the second final state
 */
class NfaQF2 : public NfaNode
{
    public:
        static NfaQF2 instance;

    public:
        virtual int readInput(char inputChar);

        static NfaQF2* getInstance();
    private:
        /* data */
};

#endif /* end of include guard: NFASTATES_H */
