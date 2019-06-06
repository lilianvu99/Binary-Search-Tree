#include "BST.h"
#include <iostream>
using namespace std;

BST::BST() {//default constructor
    root = NULL; //the root needs to be null
}

void BST::insertBST(int x) { //insert function
    TreePointer n = new TreeNode(x); //making a new node to insert
        if(root == NULL) //if the root is empty
            root = n; //make root equal to new node
    else { //if nah
            TreePointer p = root; //make a new node at the root
    while( p != NULL) { //while that new node is not empty
        if(x < p->item) { //if value to be inserted is less than current nodes value
            if(p->Lchild == NULL){ //go to left subtree: if left subtree is empty
                p->Lchild = n; //insert a new node there
                return;
            }
            else { //if there is something
                p = p->Lchild; //insert it at the next place in left subtree
            }
        }
        else { //if value to tbe inserted is greater than current nodes value
            if (p->Rchild == NULL) { //go to right subtree: find if right subtree is empty
                p->Rchild = n; //if empty, insert
                return;
            }
            else { //if not empty
                p = p->Rchild; //insert in the next plaxce
            }
        }
    }
    }
}

bool BST::searchBS(int x) { //search function
    TreePointer lilian = root; //new treeNode p at the root
        while(lilian !=NULL) { //while the node isnt empty, find the number they want
            if( lilian ->item == x) { //if that item in that node is x
                return true; //then return true
            }
            if(x < lilian->item) { //if x is less than the item, send compiler to left subtree
                lilian = lilian->Lchild;
            }
            else { //if x is greater than item, send compiler to right subtree
                lilian = lilian->Rchild;
            }
        }
            return false; //if not found at all, return false
}

bool BST::deleteBST(TreePointer n, TreePointer parent) {//deleting a node function that is private
    if(n->Lchild == NULL && n->Rchild == NULL) { //if right subtree and left subtree is empty
        if(parent != NULL) { //not deleting root
            if(parent->Lchild == n) { //if parent of the left subtree is the new node
                parent->Lchild = NULL; //make that parent emtpty
            }
            else {
                parent->Rchild = NULL; //make right side empty
            }
        }
    else { //deleting root which is the only node in tree
        root = NULL; //make root empty
    }
    delete n; //delete new node
    }
else if(n->Lchild != NULL && n->Rchild ==NULL){ //node to be deleted has only left child

    if(parent!=NULL) {
        if(parent->Lchild == n) {
            parent->Lchild = n->Lchild;
        }
        else {
            parent->Rchild = n->Lchild;
        }
    }
    else //dleeting root with left child
        root = n->Lchild; //update root

delete n;
}

else if(n->Rchild != NULL && n->Lchild ==NULL) { //node to be deleted has only right child
    if(parent!=NULL) { //not deleing root
        if(parent->Lchild == n) {
            parent->Lchild = n->Rchild;
        }
        else {
        parent->Rchild = n->Rchild;
        }
    }
else //delting root with right child
root = n->Rchild; //update root

delete n;
}
else { //node to be deleted has both the children
//find the rightmost node in left subtree i.e predecessor of n
    TreePointer cutie = n->Lchild;
    TreePointer cuteParent = n;

    while(cutie->Rchild!=NULL) {
        cuteParent = cutie;
        cutie = cutie->Rchild;
    }
    n->item = cutie->item;
    return deleteBST(cutie,cuteParent);
}

return true;

}
bool BST::deleteBST(int x) //delete function that user wil interact with
{

TreePointer lilian = root;
TreePointer parent =NULL;
    while (lilian !=NULL) {
        if( lilian ->item == x)
            return deleteBST(lilian, parent);

        parent = lilian;
        if(x < lilian->item) {
            lilian = lilian->Lchild;
        }
        else {
            lilian = lilian->Rchild;
        }
    }
return false;
}

void BST::inorder(TreePointer n) { //inorder function that is private so compiler can only use
    if(n == NULL)
        return;

inorder(n->Lchild); //putting the left side in order
cout<<n->item<<" "; //printing
inorder(n->Rchild); //ordering right right
}

void BST::inorder() { //inorder function that user will see
inorder(root); //ordering starting with the root
cout<<endl; //endline
}


void BST::preorder(TreePointer n) { //preorder function that is private so it has code that is used to build preordering
    if(n == NULL ) //is the node is empty
        return;

cout<<n->item<<" "; //printing
preorder(n->Lchild); //ordering left side
preorder(n->Rchild); //ordering right side
}

void BST::preorder(){ //preorder function in the public eye
preorder(root); //ordering starting with the root
cout<<endl;
}

void BST::postorder(TreePointer n) { //postorder function that is privated
    if(n == NULL)
        return;

postorder(n->Lchild); //ordering itema
postorder(n->Rchild); //ordering items
cout<<n->item<<" "; //printing
}

void BST::postorder() { //postorder function in the public eye
postorder(root); //starting at the root
cout<<endl;
}
