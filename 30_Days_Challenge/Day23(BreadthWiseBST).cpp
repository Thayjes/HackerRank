/* Level Order Traversal (Breadth Wise) of Binary Search Tree
Sample Input

6
3
5
4
7
2
1
Sample Output

3 2 5 1 4 7 

*/
#include <iostream>
#include <cstddef>
#include <queue>
#include <string>
#include <cstdlib>

void levelOrder(Node * root){
      //Write your code here
        Node *temp;
        queue<Node*> q;   //Important takeaway, we can use queues, stacks, vectors etc to store pointer types as well. 
        temp = root;
        while(temp){
            cout << temp->data << " ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
            temp = q.front();
            q.pop();
        }
        
	}