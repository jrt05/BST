
#include "bst.h"
#include <iostream>

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
    if(right != nullptr) {
        delete right;
    }
    parent = nullptr;
    std::cout << element << "\n";
}

BST::BST():
    root(nullptr)
{

}

BST::~BST()
{
    if(root != nullptr) {
        delete root;
    }
}

int BST::getroot()
{
    if (root != nullptr) {
        return root->getval();
    }
    else {
        return 0;
    }
}
