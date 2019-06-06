#include "BST.h"
#include <iostream>
using namespace std;

void Menu(BST &dollar_tree); //function for menu interface for user to select what to do with binary search tree

int main() //main function
{
BST dollar_tree; //creating an instance of the object BST called dollar tree
Menu(dollar_tree); //calling the menu function for BST dollar tree

cout<<"Thank You For Shopping At Dollar Tree"; //conclusion for program to look pretty
return 0;
}

void Menu(BST &dollar_tree)
{
int decision; //new int to record user decision
int n;
while(1)
{
cout << "Please select the operation you would like to do:" << endl; //different options for user
cout << "1. Insert" << endl;
cout << "2. Delete" << endl;
cout << "3. Search" << endl;
cout << "4. Inorder traversal" << endl;
cout << "5. Preorder traversal" << endl;
cout << "6. Postorder traversal" << endl;
cout << "7. Exit" << endl;
cout << "What is your final decision?: ";
cin >> decision; //recording users decision

switch(decision) //switch case depending on users decision
{
    case 1: //first case: if they want to insert new number in tree
        cout << "What number do you want to add?: "; //what number they want
        cin >> n; //record what number they want
            dollar_tree.insertBST(n); //calling insert function from BST
        cout << n << " has been added to tree" << endl; //saying which number was added
        break;
    case 2: //case 2: if they want to delete a number in the tree
        cout << "Which number do you want to delete?: "; //asking for which number to delete
        cin >> n; //recording what number to delete
        if(dollar_tree.deleteBST(n)) { //calling delete function and if that number has been deleted then it will proceed with if statement
            cout << n << " has been removed from tree" << endl;
        }
        else {
            cout << n << " not found in tree" << endl;
        }
        break;
    case 3: //case 3: if they want to search for a number
        cout << "What number do you want to search?: "; //
        cin >> n;
        if(dollar_tree.searchBS(n)) { //calling search function to search and if found then if statement will execute
            cout << n << " found in tree" << endl;
        }
        else {
            cout << n << " not found in tree" << endl;
        }
        break;
    case 4: //case 4: if they want to do an inorder traversal
        cout<<"Inorder traversal of tree is " << endl;
            dollar_tree.inorder(); //calling inorder function
        break;
    case 5: //case 5: if they want to do a preorder traversal
        cout<<"Preorder traversal of tree is " << endl;
            dollar_tree.preorder(); //calling preorder function
        break;
    case 6: //if they want to do a postorder traversal
        cout<<"Postorder traversal of tree is "<<endl;
            dollar_tree.postorder(); //calling postorder function
        break;
    case 7:
        return;
    default: /*default:  declaration that is automatically
        assigned by the compiler if caller of the function doesn't provide a value for the argument with default value.*/
        cerr<<"Invalid choice! Try Again! "<<endl; //output error


}
}
}
