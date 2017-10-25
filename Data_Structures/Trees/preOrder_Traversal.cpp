/* PREORDER TRAVERSAL */
/* you only have to complete the function given below.  
Node is defined as  

struct node
{
    int data;
    node* left;
    node* right;
};

*/
#include<iostream>

void preOrder(node *root) {
    // Preorder traversal is (Root, Left, Right)    
    // Initialize a temp node as root
    // Print out the data of the root node first
    node*temp = root;    
    cout << root->data << " ";
    
    // Then check if a left node is present
    // If yes, update the root node to the left node and call preOrder on that left node.
    if(root->left){
        temp = root->left;        
        preOrder(temp);
    } 
    // Do the same for right
    if(root->right){
        temp = root->right;
        preOrder(temp);
    }          
}
