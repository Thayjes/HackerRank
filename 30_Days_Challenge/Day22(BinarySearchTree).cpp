/*
Calculate the height of a Binary Search Tree. Height is defined as the largest number of edges between the root of the tree and 
the furthest leaf of the tree.
Sample Input

7
3
5
2
1
4
6
7
Sample Output

3

BST:
        3
    2       5
 1	    4      6 
		         7
The height is the largest number of edges from root (3) to furthest leaf (7)  = 3.
*/

#include <iostream>
#include <cstddef>

using namespace std;	

class Node{
    public:
        int data; // Current Node data, Type: Int.
        Node *left; // Left Node Pointer, Type: Node. 
        Node *right;// Right Node Pointer, Type: Node.
        Node(int d){ //Constructor
            data = d;
            left = NULL;
            right = NULL;
        }
};
class Solution{
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            }
            else {
                Node* cur;
                if(data <= root->data){
                    cur = insert(root->left, data);
                    root->left = cur;
                }
                else{
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }
		int getHeight(Node* root){
          //Write your code here
            int height;            
            if(!root){   // If we are looking left and right past the furthest leaf, getHeight should return -1, so that the furthest leaf returns 1-1  = 0.
                return -1;
            }   
            else{
                height = 1 + ((getHeight(root->left) > getHeight(root->right)) ? getHeight(root->left) : getHeight(root->right)); // Add one for the current leaf and then
				// call getHeight again for each left and right leaf. 
                return height;
                
            }            
            
        }
}; //End of Solution

int main() {
    Solution myTree;
    Node* root = NULL;
    int t;
    int data;

    cin >> t;

    while(t-- > 0){
        cin >> data;
        root = myTree.insert(root, data);
    }
    int height = myTree.getHeight(root);
    cout << height;

    return 0;
}
