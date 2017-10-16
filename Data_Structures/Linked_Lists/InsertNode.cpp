/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
  // Complete this method only
  // Do not write main function. 
    Node*nthnode = new Node;
    nthnode->data = data;
    
    if(position == 0){
        nthnode->next = head;
        return nthnode;
    }
    else{
        Node*pos = head;
        Node*posNext = pos->next;
        for(int i = 0; i < position - 1; i++){
            if(pos == NULL){
                break;
            }
            pos = pos->next;
            posNext = pos->next;
        }
        pos->next = nthnode;
        nthnode->next = posNext;
        return head;
    }
    
}