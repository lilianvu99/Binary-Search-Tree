#include "TreeNode.h"
#include <iostream>

#ifndef BINARY_SEARCH_TREE
#define BINARY_SEARCH_TREE

class BST //binary search tree class
{
public: //everything the public can see
BST(); //default constructor
void insertBST(int x); //insert a node in the tree
bool searchBS(int x); //search for an element in the tree
bool deleteBST(int x); //delete a node in the tree
void inorder(); //traverse the tree inorder fashion
void preorder(); //traverse the tree in preorder fashion
void postorder(); //traverse the tree in postorder fashion


private: //not one can see
TreeNode *root; //making the root of the tree
void inorder(TreePointer n); //redeclaring functions to include TreeNode
void preorder(TreePointer n); //redeclaring funcctions to include Treenode
void postorder(TreePointer n); //redeclaring functions to include Treenode
bool deleteBST(TreePointer n, TreePointer parent); //redeclaring functions to include Treenode
};
#endif //BINARY_SEARCH_TREE

