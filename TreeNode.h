#include <iostream>

#ifndef TREE_SEARCH_TREE
#define TREE_SEARCH_TREE

class TreeNode //code from programming instructions
{
friend class BST;

public:
TreeNode(); //default constructor
TreeNode(int i, TreeNode* L=0, TreeNode* R=0);//explicit value constructor
int getItem() const; //ACCESSORY

private:
int item;
TreeNode *Lchild;
TreeNode *Rchild;
};
typedef TreeNode *TreePointer; //because i dont want to type TreeNode * to everything

inline TreeNode::TreeNode(){ /*C++ provides an inline functions to reduce the function call overhead.
Inline function is a function that is expanded in line when it is called.
 When the inline function is called whole code of the inline function gets inserted or substituted at the point of inline function call.*/

item = 0;
Lchild = Rchild = NULL;
}

inline TreeNode::TreeNode(int i, TreePointer L, TreePointer R) {
item = i;
Lchild = L;
Rchild = R;
}


inline int TreeNode::getItem() const {
return item;
}


#endif

