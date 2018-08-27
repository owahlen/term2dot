#ifndef __NODE_HPP_INCLUDED__
#define __NODE_HPP_INCLUDED__

#include<string>
#include<vector>

class Node {

  public:
    Node(std::string label, double value)
      :_id(Node::nextId++),_label(label),_value(value) {}
    Node(std::string label, double value, Node *child)
      :_id(Node::nextId++),_label(label),_value(value) { _children.push_back(child); }
    Node(std::string label, double value, Node *child1, Node *child2)
      :_id(Node::nextId++),_label(label),_value(value) { _children.push_back(child1); _children.push_back(child2); }
    ~Node();
    const std::string id() const;
    const std::string label() const;
    const double value() const;
    const std::vector<Node*> &children() const;
    friend std::ostream &operator<<( std::ostream &output, const Node &n );

  private:
    static int nextId;
    int _id;
    std::string _label;
    double _value;
    std::vector<Node*> _children;

};

#endif
