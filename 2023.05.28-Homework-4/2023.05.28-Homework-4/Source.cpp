#include <iostream>
#include "BinaryTreeNode.h"


BinaryTreeNode* insert(BinaryTreeNode* root, int value) {
    if (root == nullptr) {
        return new BinaryTreeNode(value);
    }
    if (value < root->value) {
        root->leftChild = insert(root->leftChild, value);
    }
    else {
        root->rightChild = insert(root->rightChild, value);
    }
    return root;
}

BinaryTreeNode* getMinimumKey(BinaryTreeNode* curr) {
    while (curr->leftChild != nullptr) {
        curr = curr->leftChild;
    }
    return curr;
}

void searchKey(BinaryTreeNode*& curr, int key, BinaryTreeNode*& parent) {
    while (curr != nullptr && curr->value != key) {
        parent = curr;
        if (key < curr->value) {
            curr = curr->leftChild;
        }
        else {
            curr = curr->rightChild;
        }
    }
}

void deleteNode(BinaryTreeNode*& root, int key) {
    BinaryTreeNode* parent = nullptr;
    BinaryTreeNode* curr = root;
    searchKey(curr, key, parent);
    if (curr == nullptr) {
        return;
    }
    if (curr->leftChild == nullptr && curr->rightChild == nullptr) {
        if (curr != root) {
            if (parent->leftChild == curr) {
                parent->leftChild = nullptr;
            }
            else {
                parent->rightChild = nullptr;
            }
        }
        else {
            root = nullptr;
        }
        delete curr;  
    }
    else if (curr->leftChild && curr->rightChild) {
        BinaryTreeNode* successor = getMinimumKey(curr->rightChild);
        int val = successor->value;
        deleteNode(root, successor->value);
        curr->value = val;
    }
    else {
        BinaryTreeNode* child = (curr->leftChild) ? curr->leftChild : curr->rightChild;
        if (curr != root) {
            if (curr == parent->leftChild) {
                parent->leftChild = child;
            }
            else {
                parent->rightChild = child;
            }
        }
        else {
            root = child;
        }
        delete curr;
    }
}

void PrintTree(BinaryTreeNode* p, int level) {
    if (p) {
        PrintTree(p->leftChild, level + 1);
        for (int i = 0; i < level; i++) {
            std::cout << "   ";
        }
        std::cout << p->value << std::endl;
        PrintTree(p->rightChild, level + 1);
    }
}



int main() {
    BinaryTreeNode* root = nullptr;
    root = insert(root, 2);
    root = insert(root, 1);
    root = insert(root, 3);
    PrintTree(root, 3);
    deleteNode(root, 3);
    PrintTree(root, 3);
    return EXIT_SUCCESS;
}