#ifndef NFAQ2_H
#define NFAQ2_H

#include "NfaNode.h"

class NfaQ2 : public NfaNode
{
 public:
  static NfaQ2 instance;

 public:
  virtual void activate();
  virtual void deactivate();

  virtual void readInput(char inputChar);

  static NfaQ2* getInstance();
 private:
  /* data */
};

#endif /* end of include guard: NFAQ2_H */
