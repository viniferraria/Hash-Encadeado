#ifndef NODE_H
#define NODE_H

class Node {
  private:
    int value;
    Node * next;
  public:
    explicit Node(int vl);
    ~Node();
    friend class Linked;
    friend class Hash;
};

#endif
