/*
  Reverse a linked list and return pointer to the head
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
#include<vector>
using namespace std;
Node* Reverse(Node *head)
{
  // Complete this method
    if(head == NULL){
        return head;
    }
    else{
        vector<Node*> reverse;
        Node*temp = head;
        while(temp!=NULL){
            //cout << temp->data << endl;
            reverse.emplace(reverse.begin(), temp); //Store the node pointers (last to first) in a vector
            temp = temp->next;
        }
        vector<Node*>::iterator it;
        head = reverse[0];
        Node*temp1 = head;
        //cout << "reverse" << endl;
        //Now iterate through the vector, assigning the pointers to the head pointer
        for(it = reverse.begin()+1; it!=reverse.end()+1; ++it){
            //cout << temp1->data << endl;
            temp1->next = *it;
            temp1 = *it;
        }
    }
    return head;
    
}
