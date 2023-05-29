#pragma once

struct BinaryTreeNode {
    BinaryTreeNode* leftChild;
    BinaryTreeNode* rightChild;
    BinaryTreeNode* parent;
    int value;

    BinaryTreeNode(int val) : leftChild(nullptr), rightChild(nullptr), parent(nullptr), value(val) {};
};