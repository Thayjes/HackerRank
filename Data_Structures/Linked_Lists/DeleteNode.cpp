/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
  // Complete this method
    if(position == 0){
        head = head->next;
        return head;
    }
    else{
        Node*posPrev = head;
        Node*posDel = head->next;
        for(int i = 0; i < position -1;i++){
            if(posPrev == NULL){
                break;
            }
            posPrev = posPrev->next;
            posDel = posPrev->next;
        }
        posPrev->next = posDel->next;
        return head;
        
    }
}
