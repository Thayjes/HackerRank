/*
  Merge two sorted lists A and B as one linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/

#include<algorithm>
using namespace std;
#include<iostream>
void MoveNode(struct Node** destRef, struct Node** sourceRef)
{
	/* the front source node */
	struct Node* newNode = *sourceRef;
	//assert(newNode != NULL);

	/* Advance the source pointer */
	*sourceRef = newNode->next;

	/* Link the old dest off the new node */
	newNode->next = *destRef;

	/* Move dest to point to the new node */
	*destRef = newNode;
}

Node* MergeLists(Node *headA, Node* headB)
{
  // This is a "method-only" submission. 
  // You only need to complete this method 
    /* a dummy first node to hang the result on */
    struct Node dummy;
 
    /* tail points to the last result node  */
    struct Node* tail = &dummy;
 
    /* so tail->next is the place to add new nodes
      to the result. */
    dummy.next = NULL;
    while(1){
        if(headA == NULL){
            tail->next = headB;
            break;
        }
        else if (headB == NULL){
            tail->next = headA;
            break;
        }
        if(headA->data <= headB->data){
            MoveNode(&(tail->next), &headA);
        }
        else{
            MoveNode(&(tail->next), &headB);
        }
        tail = tail->next;
        
    }
    return dummy.next;
}