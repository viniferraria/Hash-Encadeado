#include <iostream>
#include "node.h"

Node::Node(int vl): value(vl)
{
  next = NULL;
}

Node::~Node(){}