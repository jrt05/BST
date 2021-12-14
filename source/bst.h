
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
private:
};

class BST {
public:
    BST();
    ~BST();
    int getx();

private:
    int x;

};
