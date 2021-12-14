
#pragma once

class Node {
public:
    Node();
    Node(int);
    ~Node();
    int element;
    Node *left;
    Node *right;
    Node *parent;
    int getval() { return element; }
private:
};

class BST {
public:
    BST();
    ~BST();
    int getroot();

private:
    Node *root;
};
