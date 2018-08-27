#include "node.hpp"

Node::~Node() {
  for(std::vector<Node*>::iterator it = _children.begin(); it != _children.end(); ++it) {
    Node *child = *it;
    delete child;
  }
}
int Node::nextId = 0;
const std::string Node::id() const {
  return std::string("n") + std::to_string(_id);
}
const std::string Node::label() const {
  return _label;
}
const double Node::value() const {
  return _value;
}
const std::vector<Node*> &Node::children() const {
  return _children;
}
