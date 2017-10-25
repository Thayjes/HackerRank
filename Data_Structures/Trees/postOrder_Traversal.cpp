/* you only have to complete the function given below.  
Node is defined as  

struct node
{
    int data;
    node* left;
    node* right;
};

*/
/*Postorder traversal is (Left, Right, Root) */


void postOrder(node *root) {
    node* temp = root;    
    if(temp->left){
        postOrder(temp->left);        
    }    
    if(temp->right){
        postOrder(temp->right);
    }
    cout << temp->data << " ";
    
    
    

}
