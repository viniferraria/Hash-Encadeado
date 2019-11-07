#ifndef LINKED_H
#define LINKED_H

#include "node.h"

class Linked{
  private:
    Node * head;
    int colisoes;
  public:
    explicit Linked();
    ~Linked();
    bool empty() const;
    void insert(int n);
    void toString() const;
    void search(int x) const;
    friend class Node;
    friend class Hash;
};

#endif