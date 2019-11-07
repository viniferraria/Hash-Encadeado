#ifndef HASH_H
#define HASH_H

#include "linked.h"

class Hash{
  private:
    int size;
    Linked ** vetor;
  public:
    explicit Hash(int size = 11);
    ~Hash();
    int fhash(int n);
    void search(int n);
    void insert(int n);
    void toString() const;
    friend class Linked;
    friend class Node;
};

#endif