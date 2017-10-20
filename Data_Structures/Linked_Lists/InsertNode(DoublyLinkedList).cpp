/*
    Insert Node in a doubly sorted linked list 
    After each insertion, the list should be sorted
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
#include<iostream>
using namespace std;
Node* SortedInsert(Node *head,int data)
{
    // Complete this function
   // Do not write the main method. 
    Node*newnode = new Node;
    newnode->data = data;
    newnode->prev = newnode->next = NULL;
    Node*temp;
    if(head == NULL){
        //cout << data << endl;
        head = newnode;
    }
    else if(head->data >= newnode->data){
        //cout << data << endl;
        newnode->next = head;
        newnode->next->prev = newnode;
        head = newnode;
    }
    else{
        temp = head;
        while(temp->next!=NULL && temp->next->data < newnode->data){
            temp = temp->next;
        }
        newnode->next = temp->next;
        if(temp->next != NULL){
            newnode->next->prev = newnode;
        }
        temp->next = newnode;
        newnode->prev = temp;
    }
    return head;
}
