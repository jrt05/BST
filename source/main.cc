
#include <iostream>
#include "bst.h"

int main()
{
    //BST val;
    //std::cout << val.getroot() << "\n";

    Node *root = nullptr;

    root = new Node(99);
    std::cout << "----" << root->getval() << "----\n";

    return 0;
}