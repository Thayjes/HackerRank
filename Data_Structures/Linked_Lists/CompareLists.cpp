/*
  Compare two linked lists A and B
  Return 1 if they are identical and 0 if they are not. 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
#include<iostream>
using namespace std;
int CompareLists(Node *headA, Node* headB)
{
  // This is a "method-only" submission. 
  // You only need to complete this method 
    int match = 1;
    if(headA == NULL && headB == NULL){
        return match;
    }
    else{        
        int Adata, Bdata;
        Node* tempA = headA;
        Node* tempB = headB;
        while(tempA!=NULL && tempB!=NULL){
            if(tempA->data != tempB->data){
                match = 0;
            }
            tempA = tempA->next;
            tempB = tempB->next;                        
        }
        //Check for unequal length match
        if(tempB!=NULL || tempA!=NULL){
            match = 0;
        }
        return match;
    }
}
