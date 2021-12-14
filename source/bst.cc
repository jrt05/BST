
#include "bst.h"

Node::Node():
    element(0),
    left(nullptr),
    right(nullptr),
    parent(nullptr)
{

}

Node::Node(int val):
    element(val),
    left(nullptr),
    right(nullptr),
    parent(nullptr)
{

}

Node::~Node()
{
    if(left != nullptr) {
        delete left;
    }
}

BST::BST():
    x(5)
{

}

BST::~BST()
{

}

int BST::getx()
{
    return x;
}
