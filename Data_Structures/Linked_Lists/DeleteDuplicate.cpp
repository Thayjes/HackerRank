/*
  Remove all duplicate elements from a sorted linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* RemoveDuplicates(Node *head)
{
  // This is a "method-only" submission. 
  // You only need to complete this method. 
    Node*temp = head;    
    while(temp->next!=NULL){
        Node*tempnext = temp->next;
        if(temp->data == tempnext->data){
            Node*tempnext2 = tempnext->next;
            temp->next = tempnext2;
        }
        else{
            temp = temp->next;
        }
    }
    return head;
}
