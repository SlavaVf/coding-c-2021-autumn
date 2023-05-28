#include <iostream>

struct BinaryTreeNode {
    BinaryTreeNode* left;
    BinaryTreeNode* right;
    BinaryTreeNode* parent;
    int value;
};

BinaryTreeNode* Leftmost(BinaryTreeNode* node) {
    if (node == NULL) {
        return NULL;
    }
    if (node->left != NULL) {
        return Leftmost(node->left);
    }
    return node;
}

BinaryTreeNode* Rightmost(BinaryTreeNode* node) {
    if (node == NULL) {
        return NULL;
    }
    if (node->right != NULL) {
        return Rightmost(node->right);
    }
    return node;
}

void DeleteNode(BinaryTreeNode* node, int value)
{
    if (node == NULL) { return; }
    if (value < node->value) {
        return DeleteNode(node->left, value);
    }
    else if (value > node->value) {
        return DeleteNode(node->right, value);
    }
    else {
        if (node->left == NULL && node->right == NULL) {
            if (node->parent->left == node) {
                node->parent->left = NULL;
            }
            else {
                node->parent->right = NULL;
            }
            delete node;
        }
        else {
            BinaryTreeNode* newnode = NULL;
            if (node->left != NULL) {
                newnode = Rightmost(node->left);
            }
            else {
                newnode = Leftmost(node->right);
            }

            if (node->parent->left == node) {
                node->parent->left = newnode;
            }
            else {
                node->parent->right = newnode;
            }
            newnode->parent = node->parent;
            newnode->right = node->right;
            newnode->left = node->left;
            delete node;
        }
    }
}

int main() {

    return EXIT_SUCCESS;
}