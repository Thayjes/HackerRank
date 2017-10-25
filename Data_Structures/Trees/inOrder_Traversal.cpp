/* you only have to complete the function given below.  
Node is defined as  

struct node
{
    int data;
    node* left;
    node* right;
};

*/

// Inorder traversal is (Left, Root, Right)

void inOrder(node *root) {
    node* temp = root;
    
    if(temp->left){
        inOrder(temp->left);
    }
    cout << temp->data << " ";
    if(temp->right){
        inOrder(temp->right);
    }
    

}
