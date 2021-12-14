
#include "bst.h"

Node::Node():
    element(0),
    left(NULL),
    right(NULL),
    parent(NULL),
{

}

Node::~Node()
{
    if(left != NULL) {
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
