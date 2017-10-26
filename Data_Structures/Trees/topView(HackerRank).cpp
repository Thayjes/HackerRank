/*
struct node
{
    int data;
    node* left;
    node* right;
};

*/
#include<queue>
#include<algorithm>
#include<map>
using namespace std;
void for_left(node * root){
    if(root->left){
        for_left(root->left);        
    }
    cout << root->data << " ";
}
void for_right(node * root){    
    node * temp = root;
    while(temp){
        cout << temp->data << " ";
        temp = temp->right;
    }
    
}
void topView(node * root) {
    if(root->left)
    for_left(root->left);             
    cout << root->data << " ";
    if(root->right)
    for_right(root->right);
}
