/*
  Print elements of a linked list in reverse order as standard output
  head pointer could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
#include<vector>
#include<iostream>
using namespace std;
void ReversePrint(Node *head)
{
  // This is a "method-only" submission. 
  // You only need to complete this method. 
    vector<int> reverse;
    vector<int>::iterator it;
    Node*temp = head;
    while(temp!=NULL){
        reverse.emplace(reverse.begin(), temp->data);
        temp = temp->next;
    }
    for(it = reverse.begin(); it!=reverse.end(); ++it){
        cout << *it << endl;
    }
}
