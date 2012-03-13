#ifndef NFASTATES_H
#define NFASTATES_H

#include "NfaNode.h"

enum {
    NOT_FOUND,
    SYSTEM_FOUND,
    ROOM_FOUND
};

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

class NfaQ19 : public NfaNode
{
    public:
        static NfaQ19 instance;

    public:
        virtual int readInput(char inputChar);

        static NfaQ19* getInstance();
    private:
        /* data */
};

//class NfaQ20 : public NfaNode
//{
    //public:
        //static NfaQ20 instance;

    //public:
        //virtual int readInput(char inputChar);

        //static NfaQ20* getInstance();
    //private:
        //[> data <]
//};

//class NfaQ21 : public NfaNode
//{
    //public:
        //static NfaQ21 instance;

    //public:
        //virtual int readInput(char inputChar);

        //static NfaQ21* getInstance();
    //private:
        //[> data <]
//};

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
