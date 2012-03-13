/**
 * @file NfaNode.h
 * @brief The declaration for the base class for the states
 * @author Brandon Kasa and Andrew Williams
 * @version 1.0
 * @date 2012-03-13
 */
#ifndef NFANODE_H
#define NFANODE_H

#include <iostream>
using namespace std;

/**
 * @brief The abstract class for a basic state.
 *        All other states are derived from this one.
 */
class NfaNode
{
public:
    NfaNode();
    virtual ~NfaNode();

    // The function to read the character input must be implemented in the
    // derived state classes
    virtual int readInput(char inputChar) = 0;

private:
    /* data */
};

#endif /* end of include guard: NFANODE_H */
