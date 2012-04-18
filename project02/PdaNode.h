/**
 * @file PdaNode.h
 * @brief The declaration for the base class for the states
 * @author Brandon Kasa
 * @version 1.0
 * @date 2012-04-14
 */
#ifndef PDANODE_H
#define PDANODE_H

#include <iostream>
using namespace std;

/**
 * @brief The abstract class for a basic state.
 *        All other states are derived from this one.
 */
class PdaNode
{
public:
    PdaNode();
    virtual ~PdaNode();

    // The function to read the character input must be implemented in the
    // derived state classes
    virtual bool readInput(char inputChar) = 0;

private:
    /* data */
};

#endif /* end of include guard: PDANODE_H */
