/*
   Find merge point of two linked lists
   Node is defined as
   struct Node
   {
       int data;
       Node* next;
   }
*/
#include<vector>
#include<algorithm>
using namespace std;
int FindMergeNode(Node *headA, Node *headB)
{
    // Complete this function
    // Do not write the main method. 
    vector<int> v;
    Node*temp = headA;
    while(temp!=NULL){
        v.push_back(temp->data);
        temp = temp->next;
    }
    temp = headB;    
    while(temp!= NULL){
        if(find(v.begin(), v.end(), temp->data) != v.end()){
            return temp->data;
        }
        temp = temp->next;
    }    
    return 0;
}
